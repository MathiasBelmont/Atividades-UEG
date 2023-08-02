package atividades;

import java.util.Scanner;

public class atv_11 {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		float Numeros[] = new float[3];
		System.out.println("Digite o primeiro numero:");
		Numeros[0] = sc.nextFloat();
		System.out.println("Digite o segundo numero:");
		Numeros[1] = sc.nextFloat();
		System.out.println("Digite o terceiro numero:");
		Numeros[2] = sc.nextFloat();
		sc.close();
		System.out.println((Numeros[0]+Numeros[1]+Numeros[2])/3);
		
	}

}
