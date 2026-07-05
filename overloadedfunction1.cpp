#include<iostream>
int calculate(int a,int b){
    return a+b;
}
double calculate(double a,double b){
    return a*b;
}
int calculate(int a){
    return a*a;
}
char calculate( char grade){
    return grade;
}
int main(){
    int num1,num2,num3,add,total,option;
    double d1,d2,product;
    char grade;
    std::cout<<"What would you like me to perform:\n1.Sum of 2 integers\n2.Product of 2 decimals\n3.Grade Calculator\n";
    std::cin>>option;
    switch(option){
        case 1:
        std::cout<<"*************SUM OF 2 INTEGERS*************";
        std::cout<<'\n';
        std::cout<<"Enter 2 integers: "<<'\n';
        std::cin>>num1;
        std::cin>>num2;
        add=calculate(num1,num2);
        std::cout<<"The sum of 2 integers is: "<<add<<'\n';
        break;

        case 2:
        std::cout<<"*************PRODUCT OF 2 DECIMALS*************";
        std::cout<<'\n';
        std::cout<<"Enter 2 decimals: "<<'\n';
        std::cin>>d1;
        std::cin>>d2;
        product=calculate(d1,d2);
        std::cout<<"The product of 2 decimals is: "<<product<<'\n';
        break;

        case 3:
        std::cout<<"*************GRADE CALCULATOR*************";
        std::cout<<'\n';
        std::cout<<"Enter your marks: "<<'\n';
        std::cin>>num1;
        std::cin>>num2;
        std::cin>>num3;
        total = ((num1+num2+num3)/3);
        if(total>=90){
            grade='A';
            std::cout<<"Your grade is "<<calculate(grade)<<'\n';
        }
        else if(total<90 && total>=50){
            grade='B';
            std::cout<<"Your grade is "<<calculate(grade)<<'\n';
        }
        else{
            grade='F';
            std::cout<<"Your grade is "<<calculate(grade)<<'\n';
        }
        break;
    }
    return 0;
}
