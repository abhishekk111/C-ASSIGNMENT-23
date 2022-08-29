//Write a C++ program to find the maximum of two numbers.
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    std::cout<<"Enter two numbers:";
    std::cin>>x>>y;
    if((x>y))
        std::cout<<"Maximum of"<<x<<"and "<<y<<"is"<<x;
    else
        std::cout<<"Maximum of"<<x<<"and "<<y<<"is"<<y;
    return 0;
}

