#include<iostream>
template<typename T,typename U>
auto sum(T x, U y){
    return x+y;
}
template<typename T,typename U>
auto subtract(T x,U y){
    return x-y;
}
template<typename T,typename U>
auto product(T x,U y){
    return x*y;
}
template<typename T,typename U>
auto division(T x,U y){
    return (x)/y;
}
int main(){
    double x,y;
    int option;
    std::cout<<"************CALCULATOR***********"<<"\n";
    do
    {
        std::cout<<"Enter which operation you want to do: "<<'\n'<<"1.Addition"<<'\n'<<"2.Subtraction"<<'\n'<<"3.Multiplicatiom"<<'\n'<<"4.Division"<<'\n'<<"5.Exit"<<'\n';
        std::cin>>option;
        switch(option){
            case 1:
            std::cout<<"Enter 2 numbers: "<<'\n';
            std::cin>>x;
            std::cin>>y;
            std::cout<<"The sum is "<<sum(x,y)<<'\n';
            break;
            case 2:
            std::cout<<"Enter 2 numbers: "<<'\n';
            std::cin>> x;
            std::cin>>y;
            std::cout<<"The difference is "<<subtract(x,y)<<'\n';
            break;
            case 3:
            std::cout<<"Enter 2 numbers: "<<'\n';
            std::cin>>x;
            std::cin>>y;
            std::cout<<"The product is "<<product(x,y)<<'\n';
            break;
            case 4:
            std::cout<<"Enter 2 numbers: "<<'\n';
            std::cin>> x;
            std::cin>>y;
            std::cout<<"The quotient is "<<division(x,y)<<'\n';
            break;
            case 5:
            std::cout<<"Thank You!"<<'\n'<<"Exiting the program"<<'\n';
            break;
            default:
            std::cout<<"Invalid Entry"<<'\n'<<"Try Again";
            break;
        }
    } while (option != 5);
    
    return 0;
}
