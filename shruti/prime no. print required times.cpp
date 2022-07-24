#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int count = 0;

    for(int num = 2; count < n ; num++)
    {


        bool isPrime = true;

        for(int i = 2; i < num; i++)
        {
            if(num % i == 0)
            {
                isPrime = false;
                break;
            }
        }

        if(isPrime == true)
        {
            count++;
            cout << num << " ";
        }

    }


}
