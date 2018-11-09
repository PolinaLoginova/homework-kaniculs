#include <iostream>
using namespace std;

int main() {
	int a, sum = 0;
    cin >> a;
    while (a != 0){
            a%10;
            if ((a%10)%2 != 0)
            {
           sum += (a%10);
           }
         else {a/10;}
         a = a/10;
    }
         cout << sum;



	return 0;
}
