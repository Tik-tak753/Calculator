#include <iostream>

using namespace std;

int main()
{
   
    double a, b, d;

    char c;
    
    cin >> a;

    cin >> c;

    enum c { sum = '+', min = '-', mult = '*', div = '/' };
    
    cin >> b;

    switch (c)
    {
    case sum:
        
        d = a + b;
        
        cout << d;
        
        break;
    case min:
        d = a - b;
        
        cout << d;
        
        break;
    case mult:
        
        d = a * b;

        cout << d;

        break;
    case div:
        d = a / b;

        cout << d;

        break;

    }

    



    
    std::cout << "\n\ result\n";
}

