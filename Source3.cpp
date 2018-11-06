#include<iostream>

using namespace std;

int main()
{
	int x;
	cout << "x = ", cin >> x;

	int k = 3;
	int prim = 1;
	int y = 3;

	int f = x;
	int q = 1;
	int u = 0;
	while (q > 0)
	{
		if (f % 2 == 0)
		{
			f = f / 2;
			u++;
		}
		if (f % 2 != 0)
		{
			q = 0;
			break;
		}
		
	}
	if (u > 0)
	{
		cout << 2 << '^' << u << '*';
	}
	
	
	
	while (k <= x)
	{   
		y = 3; prim = 1;
		while (y*y <= k)
		{
			if (k % y == 0)
			{
				prim = 0;
				y = k;
			}
			y++;
		}
		if (prim == 1)
		{
			int i = 0;
			int h = 1;
			int o = x;
			while (h > 0)
			{
				if (o % k == 0)
				{
					o = o / k;
					i++;
				}
				if (o % k != 0)
				{
					h = 0;
					break;
				}
				
				

			}
			if (i > 0)
			{
				cout << k << '^' << i << '*';
			}
			

		}
		k += 2;
	}

	return 0;

}

//Obtin numarull dorit.Iau fiecare numar prim(pe care il generez [ impart fiecare numar impar la toate numerele pana in radical din acel numar impar]) si vad daca se impartte cu numaru dorit.Daca se imparte ,vad de cate ori se imparte si daca nu s-ar numaru..Pentru a vedea de cate ori se imparte un numar , trebuie folosita o structura repetitiva(fii creativ)  