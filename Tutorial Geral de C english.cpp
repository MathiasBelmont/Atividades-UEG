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

  /*Ok , mais algumas coisas para se notar , primeiro que temos que colocar um "%tipo" , para dizer para o programa que ele deve ler tal tipo de vari�vel , nesse caso
  c de caractere , segundo note que terminamos o "%c" com uma virgula e colocamos um "&" , sem esse "&" , o programa n�o associa o valor que o usu�rio digitar � vari�vel
  , ent�o preste muita aten��o , pois � facil de esquecer esse detalhe , depois voc� escreve o nome da vari�vel conforme acima*/

  /*Usaremos agora um if para verificar se o usu�rio colocou algo que nosso programa vai entender , nesse caso uma opera��o dentre as op��es que demos */
  if((Operation=='+')||(Operation=='-')||(Operation=='*')||(Operation=='\\')||(Operation=='!')) {
    /*Um "if" � nada mais que um "se" , quando o programa chega nele , se a vefirica��o dele der como correta , ele executar� todos os comandos dentro dos {}
    note que usamos um '||' , ele se traduz para um "ou" , se traduzirmos esse if para o portugu�s ficaria algo como
    "se opera��o igual a + ou igual a - ou igual a * ou igual a \ ou igual a ! fa�a isso"
    esse "ou" � para dizer que se pelo menos uma das senten�as for verdadeira , o if ser� verdadeiro , pesquise "operadores relacionais em c" para saber mais */
    //OBS N�o confundir "=" com "==" , o primeiro voc� atribui um valor a vari�vel , o segundo serve para comparar se duas coisas s�o iguais
    //Agora que j� sabemos que o usu�rio colocou uma das op��es que demos a ele , usaremos um switch para saber qual conta devemos fazer
    system("cls"); //comando para limpar a tela , sem ele os textos se acumulariam
    switch (Operation) {
        /*O switch funciona da seguinte forma , a gente seleciona uma coisa , e damos v�rias situa��es , caso essa coisa bata com alguma situa��o , os comandos dessa
        situa��o*/
      case '+' :
        printf("Digite dois numeros para a soma :\n");
        scanf("%d", &Number1);
        scanf("%d", &Number2);
        Results = Number1 + Number2;//Veja que "=" est� sendo usado para definir o valor para Results
        printf("Results da soma : %d\n", Results);//Perceba que onde colocar o %d , ser� onde vai ser escrito a vari�vel , e que n�o precisamos de "&"
        system("pause");//Este comando pausa a opera��o at� que o usu�rio aperte alguma tecla
        system("cls");
        goto back;//Lembra do r�tulo? , ent�o , esse comando faz com que o c�digo volte at� onde o r�tulo est�
        break;// Para cada case , voc� ter� que usar um break para determinar onde cada caso para

      case '-' :
        printf("Digite dois numeros para a subtra��o :\n");
        scanf("%d", &Number1);
        scanf("%d", &Number2);
        Results = Number1 - Number2;
        printf("Results da subitra��o : %d\n", Results);
        system("pause");
        system("cls");
        goto back;
        break;

      case '*' :
        printf("Digite dois numeros para a multiplica��o :\n");
        scanf("%d", &Number1);
        scanf("%d", &Number2);
        Results = Number1 * Number2;
        printf("Results da multiplica��o : %d\n", Results);
        system("pause");
        system("cls");
        goto back;
        break;

      case '\\' :
        printf("Digite dois numeros para a divis�o :\n");
        scanf("%d", &Number1);
        scanf("%d", &Number2);
        ResultsDiv = Number1 / Number2;//Perceba que diferente dos outros casos usamos outra vari�vel para o Results
        printf("Results da divis�o : %.2f\n", ResultsDiv);// e para escrevela usamos %.(numero de casas decimais desejadas)f , pois � um float
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
        /*o comando For � complicado , mas para resumir voc� colocar� 3 senten�as , a primeira (que n�o � obrigat�ria) dir� o ponto de partida do valor para a vari�vel
        na segunda senten�a voc� colocar� um teste , e enquanto o teste for verdadeiro os comandos dentro do for se repetir�o , e o terceiro ser� um comando que sempre
        ser� executado a cada repeti��o*/
        printf("Results da fatorial = %d ", Results);
        system("pause");
        system("cls");
        goto back;
        break;
    }
  }
  /*Usaremos este "else" para caso o usu�rio coloque uma op��o que n�o exista ,
   o else executa se o if correspondente for falso */
  else {
    system("cls");
    printf("Comando n�o existe , tente de novo ");
    system("pause");
    system("cls");
    goto back;
  }
}/*� isso , chegamos ao fim da calculadora , agora voc� pode colocar em pr�tica tudo que aprendeu com esse algoritmo simples , lembre-se que ainda � muito a se aprender
, se essa � sua voca��o , corra atraz e busque conhecimento*/
