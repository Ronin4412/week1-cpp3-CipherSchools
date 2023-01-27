#include<iostream>
using namespace std;

int sum(int n1 , int n2){
    return n1 + n2;
}

int main(){
    int n1 , n2;
    cout<<"enter the two no"<<endl;
    cin>>n1>>n2;
    cout<<"sum of two no "<<sum(n1,n2)<<endl;
    
    return 0;
}