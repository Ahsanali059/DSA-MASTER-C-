// #include<iostream>
//
//
// int main()
// {
//     int a=12;
//
//     //create pointer
//     int *ptr = a;
//
//     //address
//     std::cout <<"Address "<< ptr;
//     //print value
//     std::cout <<"Value "<< *ptr;
//
// }
//

#include<iostream>
using namespace std;

int main() {

    // int a=10;
    //
    // //Know ptr store the address of a
    // int *ptr = &a;
    //
    // cout<<"Value of a is "<<a<<endl;
    // cout<<"Value of ptr " <<*ptr<<endl;
    //
    // cout<<"Address of a from ptr"<<ptr<<endl;
    //
    // cout<<"Address of a from a "<<&a<<endl;

    /*Pointer Arthimatic
    int arr[] = {1, 2, 3, 4, 5, 6, 5, 6, 7};

    int *ptr[] = {arr};

    cout<<(*ptr+1)<<endl;

    cout<<(ptr+2)<<endl;
    */

    //Derefrences Operator
    int *ptr=NULL;
    int value = *ptr;//* Is a derefrences Operator

    cout<<"Value "<<value<<endl;
    cout<<"Current Address "<<ptr<<endl;
    //move pointer to next memory location
    ptr++;//example if integer value address is 1000 then next address should be 1004
    cout<<"Next Address "<<ptr<<endl;



    return 0;








}

