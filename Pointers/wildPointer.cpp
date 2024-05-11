#include<iostream>
using namespace std;

int main()
{
    //this is Know as wild pointer or Unintialized pointer
    //See when program run programe have two memory areas consume area and
    //free area
    //when jab hum is tarha say pointer ko create karta hay ty hamay pata nahi hota ka
    //wo kis area may ja raha hay wo free area ka andar ja raha hota hay
    //this is unpredictable sitaution in c+
    int *ptr;
    *ptr = 10;

    //How to solve this Create Null Pointer




}