Algoritmo "tabuada automática"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor   : Antonio Carlos Nicolodi 
// Autor(a)    : Matheus Brenner de negreiros brito
// Data atual  : 23/06/2022
Var
   // Seção de Declarações das variáveis
   calculo , numero  :inteiro
   // a variavel calculo vai servir para as operações de
   // subitração . soma e multiplicação
   divisao : real
   // a variavel para a divisão , tem que ser real , pois o resultado vai ser quebrado
   operacao : caractere
Inicio
   //se você quiser alterar a quantidade de numeros exibidos na tabuada
   // mude o numero de até , troque 10 por qualquer numero e dará certo
   escreva("digite o numero")
   leia(numero)
   escreva("digite a operação [+,-,*,/]")
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