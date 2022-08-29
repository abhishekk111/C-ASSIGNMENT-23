//Write a C++ program to calculate an average of 3 numbers.
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    float avg;
    std::cout<<"Enter three numbers:";
    std::cin>>a>>b>>c;
    avg=(a+b+c)/3.0;
    std::cout<<"Average of three numbers"<<"is"<<avg;
    return 0;
}

