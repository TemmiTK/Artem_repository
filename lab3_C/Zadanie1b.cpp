
#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int number = 13;
    int number_while = 13;
    int num_do = 13;
    int do_loop = 0 ;
    int power = 2;
    int while_loop = 0;


    for (int i = 0; i < power-1; i++)
    {
        number *=number;
    }
    cout<<"Result: "<< number<<endl;
    while (while_loop<power-1)
    {
        number_while*=number_while;
        while_loop++;
    }
    cout<<"Result: "<< number_while<<endl;
    do
    {
        num_do*=num_do;
        do_loop++;

    } while (do_loop<power-2);
    
    cout<<"Result: "<< num_do <<endl;
    
    
}
