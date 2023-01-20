int Funcao_verifica(int ValorA, ValorB)
{
	if (ValorA != ValorB)
	{
		if(ValorA>ValorB)
		{
			return ValorA;
		}
		else
		{
			return ValorB;	
		}
	}
	else
	{
		return -1;
	}
}
