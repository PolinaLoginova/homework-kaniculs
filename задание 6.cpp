#include <iostream>

using namespace std;

int main()
{
    int n; // размер массива
    cout << "Write n" << endl;
    cin >> n;
    int d=0; // показатель колличества делимостей
    int i=0;
    int *elmt = new int [n];
    for ( i; i<n; i++)
    {
        cout << "elmt[" << i << "]"<<endl;
        cin >> elmt[i];
    }

    for (i=0; i<n; i++)
    {
        for (int a=1; a<=elmt[i]; a++)
            {
                if (elmt[i]%a==0)
                {
                    d++;
                }

            }
        if(d>5)
        {
            cout << elmt[i] << " ";
        }

        d=0;

    }
    return 0;
}
