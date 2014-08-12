#include "fibonancci.h"
#include <iostream>
using namespace std;

int main (){
    Fibonancci fib; 
    int total=0;
    for (int i = 0; i < 20; i++)
        total += fib.produce_output(i);
    cout << total << endl;
    return 0;
}
