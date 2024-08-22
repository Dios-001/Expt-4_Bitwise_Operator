

#include <iostream>
using namespace std;
int main(){
    int i=56,bit_to_be_set,bit_to_be_reset,set,reset;
    cout<<"Enter position of bit to be set: ";
    cin>>bit_to_be_set;
    cout<<"enter position of bit to be reset: ";
    cin>>bit_to_be_reset;
    //setting the bit
    set = i|(1<<bit_to_be_set);
    //resetting the bit
    reset = i&(~(1<<bit_to_be_reset));
    cout<<"set number: "<<set<<endl;
    cout<<"reset number: "<<reset<<endl;
}
