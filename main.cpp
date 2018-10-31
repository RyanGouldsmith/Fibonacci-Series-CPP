#include "fibonancci.h"
#include <iostream.h>
using namespace std;

int main ()
{
    Fibonancci fib; 
    int term=0,userInput;
    cout<<"Enter the number of elements required in the series";
    cin>>userInput;
    
    for (int i = 0; i < userInput; i++)
        term += fib.produce_output(i);
    
    cout << term << endl;
    return 0;
}
