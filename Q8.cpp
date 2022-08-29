//Write a C++ program to swap values of two int variables without using third variable
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    std::cout<<"Enter two numbers:";
    std::cin>>x>>y;
    x+y;
    x=x+y;
    y=x-y;
    x=x-y;
    std::cout<<"Swap is"<<x<<y;
    return 0;
}
