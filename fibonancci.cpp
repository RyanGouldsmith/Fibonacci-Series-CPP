#include "fibonancci.h"

Fibonancci::Fibonancci(){
}
int Fibonancci::produce_output(int number){
    if (number < 2){
        return number;
    }else{
        return (produce_output(number-1)+produce_output(number-2));
    } 
}
