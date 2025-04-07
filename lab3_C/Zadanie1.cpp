#include <iostream>
#include <stdio.h>

using namespace std;


int main()
{
    string input;
    getline(cin, input);
    int validValues = 0 ;
    int invalidValues = 0;
    bool xorr = false;
   
    for(char i: input){
        if (i=='0'){
            validValues++;
        }
        else if (i=='1'){
        
                xorr != xorr;
                validValues++;
        
        }
        else{
            invalidValues++;
        }
        
    }
    cout<<"Valid numbers: "<< validValues<<endl;
    cout <<"Invalid numbers: "<< invalidValues<<endl;
    cout<< "Result XOR: "<<xorr<<endl;
    


}
