#include<iostream>


int main()
{
    int a=12;

    //create pointer
    int *ptr = a;

    //address
    std::cout <<"Address "<< ptr;
    //print value
    std::cout <<"Value "<< *ptr;

}

