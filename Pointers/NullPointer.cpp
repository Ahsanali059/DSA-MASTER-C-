#include<iostream>

int main()
{
    //create Null pointer using NULL Keyword or 0
    //this pointer is not pointing to anyone
    //this standard create programmers not provided by c++
    int *ptr = NULL;
    *ptr = 5;//this is also wrong also use if before this

    if(ptr!=NULL) {
        *ptr = 5;
    }


}