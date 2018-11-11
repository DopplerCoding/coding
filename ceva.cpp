#include<iostream>

using namespace std;
/*
int main()
{
    int n;
    cin>>n;

    int arr[n] = {0};

    for(int i = 1;i<= n;i++)
    {
        arr[i-1] = i;
    }

    for(int j = 0;j<=n;j++)
    {
        if(arr[j] % 2== 0)
        {
            cout<<arr[j]<<" ";
        }
    }

    for(int k = n;k >= 0;k--)
    {
        if(arr[k] % 2 != 0)
        {
            cout<<arr[k]<<" ";
        }
    }

    return 0;
}
*/

int main()
{
    int n;
    cout<<"n = ",cin>>n;
    int k;
    cout<<"k = ",cin>>k;

    int x = 3;
    int check = 1;
    int y = 2;

    while(x <= k)
    {
        check = 1;y = 2;
        while(y*y<= x)
        {
            if(x % y==0)
            {
                check = 0;
                y = x;
            }
            y++;
        }
        if(check == 1)
        {
            int fibonacci = 0;
            int ultimul = 1;
            int penultimul = 0;


            while(fibonacci <= k)
            {
                fibonacci = ultimul + penultimul;
                penultimul =ultimul;
                ultimul = fibonacci;
            if(fibonacci == x)
            {
                if(fibonacci>=n)
                {
                  cout<<fibonacci<<endl;
                }

            }
            }
        }
        x+=2;
    }
        return 0;
    }
























