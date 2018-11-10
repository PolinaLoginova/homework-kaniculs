#include <iostream>
using namespace std;
int main()
{
    int num; // размер массива
    cout << "Enter integer value: ";
    cin >> num; // получение от пользователя размера массива
    int *p_darr = new int[num];
    int i=0;
    for (i; i < num; i++)
        {// Заполнение массива и вывод значений его элементов
        cout << "p_darr[" << i << "]";
        cin >> p_darr[i];
        cout << "Value of " << i << " element is " << p_darr[i] << endl;
        }
    int sum=0;
    for (int i=0; i<num; i++)
    {           if (p_darr[i]<0)
                {
                    i++;
                }
              if (p_darr[i]==1)
                {
                    i++;
                }
            for (int b = 2; b<p_darr[i]; b++)
                { if (p_darr[i]%b == 0)
                    {
                        i++;
                    }

                }

                    sum = p_darr[i] + sum;
                    cout << p_darr[i]<< " ";

    }


    cout << sum;
    return 0;
}
