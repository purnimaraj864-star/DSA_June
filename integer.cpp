#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int val[] = {1000, 900, 500, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int n=sizeof(val)/sizeof(val[0]);
    for(int i=0;i<n;i++){
        while(num>=val[i]){
            cout<<roman[i];
            num-=val[i];
        }
      
    }
    return 0;
}
    

