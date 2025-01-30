#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 100
#define MAX_COMMAND_LENGTH 200
#define MAX_OUTPUT_LENGTH 200

void executeCommand(const char *command, char *output) {
    FILE *fp = popen(command, "r");
    if (fp == NULL) {
        perror("Erro ao executar o comando");
        exit(1);
    }
    fgets(output, MAX_OUTPUT_LENGTH, fp);
    pclose(fp);
}

int main() {
    FILE *inputFile = fopen("computers.txt", "r");
    if (inputFile == NULL) {
        perror("Erro ao abrir o arquivo de entrada");
        return 1;
    }

    FILE *outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        perror("Erro ao abrir o arquivo de saída");
        fclose(inputFile);
        return 1;
    }

    char computerName[MAX_NAME_LENGTH];
    char command[MAX_COMMAND_LENGTH];
    char output[MAX_OUTPUT_LENGTH];

    while (fgets(computerName, MAX_NAME_LENGTH, inputFile) != NULL) {
        // Remover o caractere de nova linha do nome do computador
        computerName[strcspn(computerName, "\n")] = '\0';

        sprintf(command, "wmic /node:%s computersystem get username", computerName);
        executeCommand(command, output);

        // Extrair o nome de usuário da saída
        char *username = strstr(output, "\\");
        if (username != NULL) {
            fprintf(outputFile, "%s: %s\n", computerName, username + 1);
        } else {
            fprintf(outputFile, "%s: nao encontrado\n", computerName);
        }
    }

    fclose(inputFile);
    fclose(outputFile);
    
    return 0;
}

