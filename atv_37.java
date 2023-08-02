package atividades;

import java.util.Scanner;
public class atv_37 
{

	public static void main(String[] args) 
	{
		Scanner scanner = new Scanner(System.in);
        System.out.print("Digite uma frase: ");
        char[] letters = scanner.nextLine().toCharArray();//esta função faz com que a linha seja transformada em caracteres.
        System.out.print("Frase ao contrário: ");
        for (int i = letters.length - 1; i >= 0; i--) 
        {
            System.out.print(letters[i]);
            
        }
        scanner.close();
	}

}
