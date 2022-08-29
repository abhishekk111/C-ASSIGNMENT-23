//Write a C++ program to calculate the area of a circle
#include<iostream>
using namespace std;
int main()
{
    float r,area;
    std::cout<<"Enter radius of circle:";
    std::cin>>r;
    area=3.14*r*r;
    std::cout<<"Area of circle"<<"is"<<area;
    return 0;
}

