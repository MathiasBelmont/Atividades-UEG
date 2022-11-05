#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<math.h>

int main(){
	int num1 , num2 , r, t;
	float rr;
	char op , c;
	printf("o que deseja fazer?\n[t=tabuada automatica, c=calculadora]\n");
	scanf("%c", &c);
	if(c=='c'){
	printf("digite a operacao [+,-,*,/,]\n");
	scanf(" %c", &op);
	printf("digite o primeiro numero :\n");
	scanf("%d", &num1);
	printf("digite o segundo numero :\n");
	scanf("%d", &num2);
	switch (op){
	   case '+' :{
	   	r=num1 + num2;
	   	printf("resultado : %d\n", r);
	   	break;}
	   case '*' :{
	   	r=num1 * num2;
	   	printf("resultado : %d\n", r);
		break;
	   }
	   case '-':{
	   	r=num1 - num2;
	    printf("resultado : %d\n", r);	
		break;
	   }
	   case '/':{
	   	rr=num1 / num2;
	   	printf("resultado : %d\n", rr);
		break;
	   }
	   default :{
	   	printf("erro");
		break;
	   }
}
system("pause");
}

    if (c=='t') {
     printf("digite o numero para fazer uma tabuada automatica\n");
     scanf("%d", &num1);
     printf("digite o limite para a tabuada\n");
     scanf("%d", &t);
     r=1;
     printf("qual tabuada gostaria de ver[+,-,*,/,]?\n");
     scanf(" %c", &op);
     switch(op){  
     
     	case '+' :{
	   	for(;r<=t;r++){
     	printf(" %d + %d = %d \n", num1 , r , num1+r);
     	Sleep(50);
	     }
	   	break;}
	   case '*' :{
	   	for(;r<=t;r++){
     	printf(" %d * %d = %d \n", num1 , r , num1*r);
     	Sleep(50);
     	if((num1*r)=32700){
		 system("pause";)};
	     }
	   }
	   case '-':{
	   	for(;r<=t;r++){
     	printf(" %d - %d = %d \n", num1 , r , num1-r);
     	Sleep(50);
	 }	
		break;
	   }
	   case '/':{
	   	for(;r<=t;r++){
	   		rr=num1/r;
     	    printf(" %d / %d = %f \n", num1 , r , rr);
     	    Sleep(50);
	 }
		break;
	   }
	   default :{
	   	printf("erro");
		break;
	   }
     	
	 }

system("pause");
}
return 0;
}
