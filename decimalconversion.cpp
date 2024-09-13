#include <iostream>
using namespace std;

int decimalconversion(int n)
{
    int ans = 0;
    int power = 1;
    while (n > 0)
    {
        ans += (n%10)*power;
        n /= 10;
        power*=2;
    }
    
    
    return ans;
}

int main()
{
    cout << decimalconversion(110010);

    return 0;
}