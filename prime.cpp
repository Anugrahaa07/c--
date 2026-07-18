#include<iostream>
using namespace std;
int main(){
    int a,div=1,count = 0;
    cout<<"Enter a number: "<<'\n';
    cin>>a;
    if(a==1){
        cout<<"The number you entered is 1, which is neither prime or composite"<<"\n";
    }
    else if (a==0)
    {
        cout<<"The number you entered is 0, which is neither prime nor composite"<<'\n';
    }
    else{
        while(div!=a){
            if(a % div==0 )
            count = count+1;
            div=div+1;
        }
        if(count==1){
            cout<<"The number "<<a<<" is a prime number"<<'\n'
        }
        else{
            cout<<"The number is a composite number"<<'\n';
        }
    }
    return 0;
}