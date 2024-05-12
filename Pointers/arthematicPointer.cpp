#include<iostream>
using namespace std;

int main() {
    int nums = 7;
    int *ptr = &nums;

    int incrementedPOinter = *ptr+1<<endl;

    cout<<"New Value "<<incrementedPOinter<<endl;

    //Increase Address
    int *newAddress = (ptr)+1;


}
