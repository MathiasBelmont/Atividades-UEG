//Autor:Matheus Brenner de Negreiros Brito 08/14/2022
//We can make comments using "//", the entire line of the program will be dedicated to commenting, not affecting the code.

/*However , if we need to use more than one line to comment ,
 we can write whatever we want between "/*---*/ /* using as many lines as necessary.*/

/* Time to learn about libraries, they are essential to build from the most basic programs
to include a library in our program we use the command #include <library name> , as you can see
below , we will use 4 libraries */
#include <stdio.h>
/*The library "stdio.h" , comes from "studio input output", that is, with it the user can put values and
the program can show values on the screen, we use it for commands like "scanf" and "printf"*/
#include <stdlib.h>
/*The library "stdlib,h" , comes from "studio libary" , it is used for memory and value allocations, along with
from "stdio.h" , are the most primordial libraries, you can't get very far without them*/
#include <windows.h>
/*This library will be just to make the program more intuitive and interactive
the "windows.h" library has many features, however, we will only use the "system" command, to let
the most beautiful program */

/*Here we will really start our program, to make a simple program just use:
int main()
{
  (where all the commands will be)
}
This structure has some variations , but this is its most fundamental form , and without it there is no program
(Remembering that the entire program must be between {})*/
int main()
{
  //never forget ! use ";" at the end of any command (except for some cases that I will show later)
  //Now let's define the variables that our program will use
  int Number1, Number2, Results;//Here we define variables of type integer , which are number , positive or negative between -32768 and 32768
  float ResultsDiv;//Variables of type "float" , nothing more are real numbers (ex: 5.38 , 4.32)
  char Operation;//char type variables are basically characters (letters)

  /*Now we are going to type the initial part of the program that will Write on the screen and then read what the user types after pressing enter
  for this we will use two commands "printf" and "scanf"*/

back ://A Label , we will use this so the program can do various operations

  printf("Enter which operation you want to do \nSum = +\nSubtraction = -\nMultiplication = *\nDivision = \\\nFatorial = !\n");

  /*Note some interesting things we use in this command, note that all text is in quotes , see those "\n"? , they will not appear on the screen ,
  instead the "\n" tells the program to skip a line , there are some commands we can do with some character followed by "\" , but not
  will be useful for us for now */

  scanf("%c",&Operation);

  /*Ok , mais algumas coisas para se notar , primeiro que temos que colocar um "%tipo" , para dizer para o programa que ele deve ler tal tipo de variável , nesse caso
  c de caractere , segundo note que terminamos o "%c" com uma virgula e colocamos um "&" , sem esse "&" , o programa não associa o valor que o usuário digitar á variável
  , então preste muita atenção , pois é facil de esquecer esse detalhe , depois você escreve o nome da variável conforme acima*/

  /*Usaremos agora um if para verificar se o usuário colocou algo que nosso programa vai entender , nesse caso uma operação dentre as opções que demos */
  if((Operation=='+')||(Operation=='-')||(Operation=='*')||(Operation=='\\')||(Operation=='!')) {
    /*Um "if" é nada mais que um "se" , quando o programa chega nele , se a vefiricação dele der como correta , ele executará todos os comandos dentro dos {}
    note que usamos um '||' , ele se traduz para um "ou" , se traduzirmos esse if para o português ficaria algo como
    "se operação igual a + ou igual a - ou igual a * ou igual a \ ou igual a ! faça isso"
    esse "ou" é para dizer que se pelo menos uma das sentenças for verdadeira , o if será verdadeiro , pesquise "operadores relacionais em c" para saber mais */
    //OBS Não confundir "=" com "==" , o primeiro você atribui um valor a variável , o segundo serve para comparar se duas coisas são iguais
    //Agora que já sabemos que o usuário colocou uma das opções que demos a ele , usaremos um switch para saber qual conta devemos fazer
    system("cls"); //comando para limpar a tela , sem ele os textos se acumulariam
    switch (Operation) {
        /*O switch funciona da seguinte forma , a gente seleciona uma coisa , e damos várias situações , caso essa coisa bata com alguma situação , os comandos dessa
        situação*/
      case '+' :
        printf("Digite dois numeros para a soma :\n");
        scanf("%d", &Number1);
        scanf("%d", &Number2);
        Results = Number1 + Number2;//Veja que "=" está sendo usado para definir o valor para Results
        printf("Results da soma : %d\n", Results);//Perceba que onde colocar o %d , será onde vai ser escrito a variável , e que não precisamos de "&"
        system("pause");//Este comando pausa a operação até que o usuário aperte alguma tecla
        system("cls");
        goto back;//Lembra do rótulo? , então , esse comando faz com que o código volte até onde o rótulo está
        break;// Para cada case , você terá que usar um break para determinar onde cada caso para

      case '-' :
        printf("Digite dois numeros para a subtração :\n");
        scanf("%d", &Number1);
        scanf("%d", &Number2);
        Results = Number1 - Number2;
        printf("Results da subitração : %d\n", Results);
        system("pause");
        system("cls");
        goto back;
        break;

      case '*' :
        printf("Digite dois numeros para a multiplicação :\n");
        scanf("%d", &Number1);
        scanf("%d", &Number2);
        Results = Number1 * Number2;
        printf("Results da multiplicação : %d\n", Results);
        system("pause");
        system("cls");
        goto back;
        break;

      case '\\' :
        printf("Digite dois numeros para a divisão :\n");
        scanf("%d", &Number1);
        scanf("%d", &Number2);
        ResultsDiv = Number1 / Number2;//Perceba que diferente dos outros casos usamos outra variável para o Results
        printf("Results da divisão : %.2f\n", ResultsDiv);// e para escrevela usamos %.(numero de casas decimais desejadas)f , pois é um float
        /*importante lembrar que para usar um scanf com um float apenas precisamos colocar um %f*/
        system("pause");
        system("cls");
        goto back;
        break;

      case '!' :
        printf("digite o numero que deseja saber a fatorial :");
        scanf("%d",&Number1);
        Results = Number1;
        Number1 = Number1 - 1;
        //Agora para o fatorial , usaremos um comando mais complexo , o for
        for( ; Number1>0; Number1=Number1-1) {
          Results = (Results*Number1);
        }
        /*o comando For é complicado , mas para resumir você colocará 3 sentenças , a primeira (que não é obrigatória) dirá o ponto de partida do valor para a variável
        na segunda sentença você colocará um teste , e enquanto o teste for verdadeiro os comandos dentro do for se repetirão , e o terceiro será um comando que sempre
        será executado a cada repetição*/
        printf("Results da fatorial = %d ", Results);
        system("pause");
        system("cls");
        goto back;
        break;
    }
  }
  /*Usaremos este "else" para caso o usuário coloque uma opção que não exista ,
   o else executa se o if correspondente for falso */
  else {
    system("cls");
    printf("Comando não existe , tente de novo ");
    system("pause");
    system("cls");
    goto back;
  }
}/*É isso , chegamos ao fim da calculadora , agora você pode colocar em prática tudo que aprendeu com esse algoritmo simples , lembre-se que ainda á muito a se aprender
, se essa é sua vocação , corra atraz e busque conhecimento*/
