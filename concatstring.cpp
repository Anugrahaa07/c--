#include<iostream>
std::string concatstring(std::string s1,std::string s2){
    return s1 + " " + s2;
}
int main(){
    std::string string1;
    std::string string2;
    std::string S;
    std::cout<<"Enter first string: "<<'\n';
    std::cin>>string1;
    std::cout<<"Enter second string: "<<'\n';
    std::cin>>string2;
    S=concatstring(string1,string2);
    std::cout<<"The concatenated string is: "<<S;
    return 0;
}