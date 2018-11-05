#include<iostream>

using namespace std;


// Ex. 1 - Al n-lea numar fibonacci  => seria fibonacci: f(n) = f(n-1)+f(n-2) . Ex : 1 , 1 , 2 , 3 , 5 , 8 , 13... (13 = 8 + 5)

/*
int main()
{
	int fibonacci;
	int ultimul = 1;
	int penultimul = 0;
	int n;
	cout << "n = ", cin >> n;


	for (int i = 1; i <= n; i++)
	{
		fibonacci = ultimul + penultimul; 
		penultimul = ultimul;
		ultimul = fibonacci;

	}

	cout << fibonacci << endl;

	return 0;

}
*/

//Ex. 2 - Fie n numar natural.Este n fibonacci ? => iau fiecare numar fibonacci si vad daca vreun numar fibonacci este egal cu numaru dorit.Cand numarul fibonacci este mai mare decat numarul dorit , programul se inchide (lucru care s-ar putea face fara o structura extterna daca ar fi vreo mettoda de a afla ''locul'' numarului dorit ( i)).

/*
int main()
{
	int fibonacci;
	int k;
	int ultimul = 1;
	int penultimul = 0;

	cout << "k = ", cin >> k;

	for (int i = 1; i <= k; i++)
	{
		fibonacci = ultimul + penultimul;
		penultimul = ultimul;
		ultimul = fibonacci;

		if (fibonacci == k)
		{
			cout << "este fibonacii" << endl;
			break;
		}
		if (fibonacci >= k)
		{
			cout << "nu e fibonacci" << endl;
			break;
		}
	}
	
	return 0;


}
*/


//Ex.3 - Sa se afiseze primele n numere Fibonacci. => spun cate numere vreau (n). La fiecare ciclarea valoare lui i creste( i = numarul de ciclari care corespunde cu numarul de numere fibonacci) si cand i este mai mare ca n , oprim loop.La fiecare ciclare scoatem numarul fibonacci
/*
int main()
{
	int n;
	int fibonacci;
	int ultimul = 1;
	int penultimul = 0;

	cout << "n = ", cin >> n;

	for (int i = 1; i <= n; i++)
	{
		fibonacci = ultimul + penultimul;
		penultimul = ultimul;
		ultimul = fibonacci;
		cout << fibonacci << endl;
	}
	return 0;
}
*/

//Ex.4 - Lista primelor n numere prime fibonacci. -> generez n numere fibonacci . Fiecare numar este testat pentru primaliatete(divid cu fiecare numar pana la radical din acesta sau mai bine zis x*x).Daca gasesc un divizor , inseamna ca numaru nu ii prim . Daca nu gasesc, loopul va contiinua pana cand x va fii prea mare , check ramandn 1 si arattandui pc ca am gasit un nr prim..

/*
int main()
{
	int fibonacci;
	int ultimul = 1;
	int penultimul = 0;
	int n;
	cout << "n = ", cin >> n;
	int check = 1;
	
	for(int i = 1;i <= n;i++)
	{
		fibonacci = ultimul + penultimul;
		penultimul = ultimul;
		ultimul = fibonacci;

		check = 1; 
		for(int x = 2;x*x <= fibonacci;x++)
		{
			if (fibonacci%x == 0)
			{
				check = 0;
				break;
			}
			
		}
		
		if (check == 1)
		{
			cout << fibonacci << endl;
		}
	}

	return 0;


}

*/

//Ex.5 - Raportul fibonacci.

int main()
{
	int fibonacci;
	int ultimul = 1;
	int anterior = 0;
	int n; 
	cout << "n = ", cin >> n;

	for (int i = 1; i <= n; i++)
	{
		fibonacci = ultimul + anterior;
		cout << fibonacci << endl;
		
		int k = ultimul / fibonacci;
		int l = anterior / ultimul;

		for (int y = 1; y <= n; y++)
		{
		    k *= 10;
		    l *= 10;
		}
		if (k % 10 != l % 10)
		{
			break;
		}

		anterior = ultimul;
		ultimul = fibonacci;


	}

	return 0;

}