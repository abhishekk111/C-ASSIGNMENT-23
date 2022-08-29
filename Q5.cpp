//Write a C++ program to calculate the volume of a cuboid
#include<iostream>
using namespace std;
int main()
{
    float v,w,h,l;
    std::cout<<"Enter length,height and width of a cuboid:";
    std::cin>>l>>h>>w;
    v=l*h*w;
    std::cout<<"Volume of cuboid"<<"is"<<v;
    return 0;
}


