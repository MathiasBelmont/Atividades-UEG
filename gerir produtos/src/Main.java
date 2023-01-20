import java.util.Scanner;
import entites.product;

public class Main {
	public static void main(String[] args)
	{
		int i;
		Scanner sc = new Scanner(System.in);
		product product = new product();
		System.out.println("Entre o nome do produto");
		product.Nome = sc.nextLine();
		System.out.println("Entre a quantidade do produto");
		product.quant = sc.nextInt();
		System.out.println("Entre o preço do produto");
		product.preco = sc.nextFloat();
		System.out.println(product);
		System.out.println("Entre a quantidade para adicionar do produto");
		i = sc.nextInt();
		product.soma(i);
		System.out.println(product);
		System.out.println("Entre a quantidade para retirar do produto");
		i = sc.nextInt();
		product.sub(i);
		System.out.println(product);
		sc.close();
	}

}
