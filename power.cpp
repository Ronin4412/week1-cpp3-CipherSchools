#include<iostream>
using namespace std;

int power1(int base, int power){
    int product = 1;
    for(int i = 0 ; i < power; i++){
      product *= base;
    }
    return product;
}

int power2(int base, int power){
    if(power == 0)
    return 1;
    int ans = power2(base, power - 1);
    return ans * base;
}

int main(){
    int base, power;
    cout<<"enter the base"<<endl;
    cin>>base;
    cout<<"enter the product"<<endl;
    cin>>power;
    cout<<"answer is by iteration process "<<power1(base, power)<<endl;
    cout<<"answer is by recursion process "<<power2(base, power)<<endl;
    return 0;
}