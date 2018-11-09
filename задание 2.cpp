#include <iostream>

using namespace std;

int main()
{ int n, comp = 1; //n is numder; comp is composution;
    cout << "Write number" << endl;
    cin >> n;
    if (n%2 == 0)
        {
            while(n>0)
            {
                if((n%10)%2==0)
                {
                    comp = comp * (n%10);
                }
                n=n/10;
            }
        }
    else
        {
        while(n>0)
            {
                if((n%10)%2!=0)
                {
                    comp = comp * (n%10);

                }
                n=n/10;
            }


        }
    cout << sum;
    return 0;
}
