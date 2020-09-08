#include <iostream>

using namespace std;

int main()
{
    int *a;
    int *b;
    int n,m,c;

    cout << "n = ";
    cin >> n;

    cout << "m = ";
    cin >> m;

    a= new int[n];
    b= new int[m];



    for (int i = 0; i < n; i++)
        {
        cout << "a[" << i << "] = ";
        cin >> a[i];
        }

    for (int i = 0; i < m; i++)
        {
        cout << "b[" << i << "] = ";
        cin >> b[i];
        }

    int temp;

    for (int i = 0; i < n - 1; i++)
        {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

for (int i = 0; i < m - 1; i++)
        {
        for (int j = 0; j < m - i - 1; j++)
        {
            if (b[j] > b[j + 1])
            {
                temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
        {
        cout << a[i] << " ";
        }
    cout << endl;

      for (int i = 0; i < m; i++)
        {
        cout << b[i] << " ";
        }
    cout << endl;

    for (int i = 1; i < n-1; i++)
        {
        if ((a[i]>a[i-1]) && (a[i]<a[i+1]))
            a[i]=a[i];
        else a[i]=0;
        }

       for (int i = 0; i < n - 1; i++)
        {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
        {
        if (a[i]!=0)
        cout << a[i] << " ";
        }
    cout << endl;

    for (int i = 1; i < m-1; i++)
        {
        if ((b[i]>b[i-1]) && (b[i]<b[i+1]))
            b[i]=b[i];
        else b[i]=0;
        }

       for (int i = 0; i < m - 1; i++)
        {
        for (int j = 0; j < m - i - 1; j++)
        {
            if (b[j] > b[j + 1])
            {
                temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < m; i++)
        {
        if (b[i]!=0)
        cout << b[i] << " ";
        }
    cout << endl;


    cout << "Vv No operacii";
    cout << endl;
    cout << "1-obedinenie";
    cout << endl;
    cout << "2-peresechenie";
    cout << endl;
    cout << "3-raznost'";
    cout << endl;
    cout << "4-simmetrichnaya raznost'";
    cout << endl;
    cout << "5-obratnoe dopolnenie";
    cout << endl;
    cout << "6-dopolnenie ";
    cout << endl;
    cin >> c;



     //if (c=1)
     //{
      // for (int i = 0; i < n; i++)


     //}

 if (c=2)
     {
       for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        if ((a[i]!=0)&&(b[j]!=0))
        if (a[i]==b[j])
            cout<<a[i]<<" ";
     }



    delete [] a;
    delete [] b;

    return 0;
}
