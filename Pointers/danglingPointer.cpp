// #include<iostream>
//
//
// /*
//  *
// A dandling pointer, also known as a dangling pointer, is a term used in computer
// science, particularly in programming languages like C and C++. It refers to a
// pointer that points to a memory location that has been deallocated or freed.
//  *
//  */
// int main()
// {
//     //int *ptr = new int(10);
//
//     // Deallocate the memory
//    // delete ptr;
//
//    // std::cout <<"Value pointed to by dangling pointer "<< *ptr<<std::endl;
//
//     //How free a pointer use free(pointer) method and point to Null
//     int a=12;
//     int *p = &a;
//
//     // free(p);
//
//     std::cout << "Memory is free"<<a<<std::endl;
//
//  return 0;
//
//
// }