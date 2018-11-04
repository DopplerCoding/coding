#include<iostream>
#include<string>
using namespace std;

//Ex. 1 - palindromitate (logica este sa iei fiecare cifra de la final si sa creezi un nou nr)

/*int main()
{
	int x;
	cout << "x = ", cin >> x;

	int w = x;
	int result = 0;


	while (w > 0)
	{
		
		result = 10*result + (w % 10);
		w = w / 10;
	}

	if (result == x)
	{
		cout << "palindrom" << endl;
	}

	if (result != x)
	{
		cout << "nu" << endl;
	}

	return 0;
}
*/

//Ex. 2 - Nr cifre (imparttim la 10 numarul , pana cand e sub 1)

/*int main()
{
	int x;
	cout << "x = ", cin >> x;
	int k = 0;

	while (x >= 1)
	{
		
		x = x / 10;
		k++;

	}

	cout << k << endl;
 	return 0;


}
*/

//Ex.3 cel mai mare cu numerele lui

/*int main()
{
	int x;
	cout << "x = ", cin >> x;

	//creez array
	int arr[10] = { 0 };

	//transform numaru in string
	string str = to_string(x);

	//updatez array-ul
	for (int i = 0; i < str.length(); i++)
		arr[str[i] - '0']++;

	int result = 0;
	int multiplier = 1;

	for (int k = 0; k <= 9; k++)
	{
		while (arr[k] >= 1)
		{
			result = result + (k*multiplier);
			multiplier *= 10;
			arr[k]--;

		}
	}
	cout << result << endl;
	return 0;
}
*/

//Ex. 4 cel mai mic cu numerele lui

/*int main()
{
	int x;
	cout << "x = ", cin >> x;

	//creez array
	int arr[10] = { 0 };

	//transform numaru in string
	string str = to_string(x);

	//updatez array-ul
	for (int i = 0; i < str.length(); i++)
		arr[str[i] - '0']++;

	int result = 0;
	int multiplier = 1;

	for (int k = 9; k >=0; k--)
	{
		while (arr[k] >= 1)
		{
			result = result + (k*multiplier);
			multiplier *= 10;
			arr[k]--;

		}
	}
	cout << result << endl;
	return 0;
}
*/


//Ex. 5 problema cu array-ul

int main()
{
	int arr[5] = { 7,19,5,21,4 };

	int vector[5] = { 0 };

	vector[0] = arr[0];

	for (int i = 0; i < sizeof(arr)-1; i++)
	{
		if (arr[i] < arr[i + 1])
		{
			vector[i + 1] = arr[i + 1];
		}
		if (arr[i] > arr[i + 1])
		{
			arr[i + 1] = arr[1];
		}
	}

	for (int k = 0; k < sizeof(vector); k++)
	{
		cout << vector[k] << endl;
	}

	return 0;
}

//correct recapitulare