#include<iostream>
#include<cmath>
int main(){
    double a,b,c;
    std::cout<<"Enter the sides of the triangle: "<<'\n';
    std::cin>>a;
    std::cin>>b;
    c=sqrt(pow(a,2)+pow(b,2));
    std::cout<<"The hypotenuse of the triangle is "<<c;
    return 0;
}
