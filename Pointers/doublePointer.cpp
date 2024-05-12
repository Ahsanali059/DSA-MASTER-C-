/*
 *double pointer is also know as pointer to pointer
 *it hold the address of another pointer variable it point to the memory location where another pointer is
 *stored
 *where we used this
 *when we need to allocate the dynamic memory aloocation
 *
 */

#include<iostream>
using namespace std;

int main() {
 int nums = 10;
 int *ptr=&nums;

 int **doublePointer = &ptr;

 //same like triple pointer that hold the address of double pointer





}