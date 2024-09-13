#include <iostream>
using namespace std;

int bin(int decimal){
    int rem = 0;
    int i = 1;
    while (decimal > 0)
    {
        rem += (decimal%2)*i;
        decimal /= 2;
        i *= 10;
    }
    return rem;
}

int main (){
    
        cout << bin(2);
    
    
    return 0;
}