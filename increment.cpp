#include<iostream>
using namespace std;

int increment(int &a){
     a++;
     return a;
}



int main(){

int a;
    cout<<"enter a number"<<endl;
    cin>>a;
    int &b = a;
    b++;

    cout<<"after the increment is "<<increment(a)<<endl;
    cout<<b;
        
    return 0;
}