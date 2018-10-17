

/*
	we are ask to count the number of pairs (v[i],v[j])
	were i < j and v[i] is even and v[j] is odd

*/


//P = {0 ≤ n ≤ longitud(v) ∧ ∀k : 0 ≤ k < n : v[k] ≥ 0}
int evenAndOdd(int v[],int n)/*return p*/
{
	//A0 (Inicialización)
	int a = 0;
	int p = 0;
	int pares = 0;

	//{I, Cota} = {0 ≤ a ≤ n &&
	// p = # i, j : 0 ≤ i < j < a : v[i] %2 = 0 ∧ v[j] %2 = 1}} &&
	// pares = # i : 0<=i < a :v[i]%2 = 0

	while (a < n/*B*/)
	{
		//I ∧ B
		//A1
		if(v[a]%2 == 0)
			pares++;
		else
			p += pares;
		//R = {0 ≤ a+1 ≤ n && p = # i, j : 0 ≤ i < j < a+1 : v[i] %2 = 0 ∧ v[j] %2 = 1}}
		// pares = # i : 0<=i < a+1 :v[i]%2 = 0
		//A2
		a++;
		//I
	}
	return p;
}
//Q = {p = # i, j : 0 ≤ i < j < n : v[i] %2 = 0 ∧ v[j] %2 = 1}
