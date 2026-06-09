#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int value[]={1000,900,500,100,90,50,40,10,9,5,4,1};
    string roman[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    int n=sizeof(value)/sizeof(value[0]);
    for(int i=0;i<n;i++){
        while(num>=value[i]){
            cout<<roman[i];
            num-=value[i];
        }
    }
}