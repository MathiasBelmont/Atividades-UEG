package entites;

public class product {

		 public String Nome;
		 public int quant;
		 public float preco;
		 
		 public double total()
		 {
			 return preco * quant;
		 }
		public void soma(int num)
		{
			quant+=num;
		}
		public void sub(int num)
		{
			quant-=num;
		}
		public String toString()
		{
			return Nome+", $ "+preco+", "+quant+" unidades, total: $ "+total();
		}
}
