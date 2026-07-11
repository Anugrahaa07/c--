#include<iostream>
int main(){
    int *pointer = nullptr;
    int x=123;
    pointer = &x;
    if(pointer==nullptr){
        std::cout<<"Address was not assigned"<<'\n';
        std::cout<<*pointer;

    }
    else{
        std::cout<<"Address was assigned"<<'\n';
        std::cout<<*pointer;
    }
    return 0;
}