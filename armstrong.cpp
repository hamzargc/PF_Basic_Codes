#include <iostream>
using namespace std;
int main()
{
    int number, n, mod, answer = 0;
    cout << "Enter 3 dig integer: ";
    cin >> number;
    n = number;
    while (n != 0)
    {
        mod = n%10;
        answer += mod*mod*mod;
        n /= 10;
    }
    
    if(answer == number)
        {
		cout << number << " is an Armstrong number." ;
		}
    else
        {
		cout << number << " is not an Armstrong number.";
    	}
	return 0;
}
