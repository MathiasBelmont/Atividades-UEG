Algoritmo "tabuada autom�tica"
// Disciplina   : [Linguagem e L�gica de Programa��o] 
// Professor   : Antonio Carlos Nicolodi 
// Autor(a)    : Matheus Brenner de negreiros brito
// Data atual  : 23/06/2022
Var
   // Se��o de Declara��es das vari�veis
   calculo , numero  :inteiro
   // a variavel calculo vai servir para as opera��es de
   // subitra��o . soma e multiplica��o
   divisao : real
   // a variavel para a divis�o , tem que ser real , pois o resultado vai ser quebrado
   operacao : caractere
Inicio
   //se voc� quiser alterar a quantidade de numeros exibidos na tabuada
   // mude o numero de at� , troque 10 por qualquer numero e dar� certo
   escreva("digite o numero")
   leia(numero)
   escreva("digite a opera��o [+,-,*,/]")
   leia(operacao)
   se (operacao="+")entao
      para calculo de 1 ate 10 passo 1 faca
         escreval ( numero , " +"  , calculo , " =" , numero + calculo)
      fimpara
   fimse
   se (operacao="*")entao
      para calculo de 1 ate 10 passo 1 faca
         escreval ( numero , " *"  , calculo , " =" , numero * calculo)
      fimpara
   fimse
   se (operacao="-")entao
      para calculo de 1 ate 10 passo 1 faca
         escreval ( numero , " -"  , calculo , " =" , numero - calculo)
      fimpara
   fimse
   se (operacao="/")entao
      para calculo de 1 ate 10 passo 1 faca
         divisao<-numero div calculo
         escreval ( numero , " /"  , calculo , " =" , divisao)
      fimpara
   fimse

Fimalgoritmo