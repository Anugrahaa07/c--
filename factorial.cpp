#include<iostream>
int fact(int n);
int main(){
    std::cout<<fact(5);
    return 0;
}
int fact(int n){
    if(n>1){
        return n*fact(n-1);
    }
    else{
        return 1;
    }
}