#include<iostream>
using namespace std;
int main(){
    int a[100],n,i,key;
    cout<<"Enter the size of the array: "<<'\n';
    cin>>n;
    cout<<"Enter the elements into the array: "<<'\n';
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"The elements are: "<<"\n";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl<<"Enter the number to be found: ";
    cin>>key;
    for(i=0;i<n;i++){
        if(key==a[i]){
            cout<<"The number "<<a[i]<<" is found at the index "<<i<<" and the position is "<<i+1<<'\n';
        }
    }
    
    return 0;
}