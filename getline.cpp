#include<iostream>
int main(){
    std::string name;
    int age;
    std::cout<<"Whats your age"<<'\n';
    std::cin>>age;
    std::cout<<"Whats your name"<<'\n';
    std::getline(std::cin>>std::ws,name);
    std::cout<<"Hello "<<name<<".Your age is "<<age<<" years old";
    return 0;
}