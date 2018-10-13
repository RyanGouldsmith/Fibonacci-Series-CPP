#include "fibonancci.h"
#include <iostream.h>
using namespace std;

int main ()
{
    Fibonancci fib; 
    int term=0,n;
    cout<<"Enter the number of elements required in the series";
    cin>>n;
    
    for (int i = 0; i < n; i++)
        term += fib.produce_output(i);
    
    cout << term << endl;
    return 0;
}
