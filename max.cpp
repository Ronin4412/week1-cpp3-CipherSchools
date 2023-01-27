#include<iostream>
using namespace std;

int max(int n1 , int n2){
    if(n1 > n2){
        return n1;
    }
    else{
        return n2;
    }
}
int max(int n1 , int n2 , int n3){
    if(n1 > n2){
        if(n1 > n3)return n1;
        return n3;
    }
    if(n2 > n3)return n2;
    return n3;
}
int max(int a, int b, int c, int d){
    int e = max(a , b , c);
    return max(e , d);
}

int main(){
    int n1 , n2;
    int a,b,c;
    cout<<"enter the two no"<<endl;
    cin>>n1>>n2;
    cout<<"max of  two no "<<max(n1,n2)<<endl;
    cout<<"enter the three number"<<endl;
    cin>>a>>b>>c;
    cout<<"max of three no "<<max(a,b,c);
    
    return 0;
}