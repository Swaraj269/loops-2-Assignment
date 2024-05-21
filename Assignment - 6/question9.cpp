#include <iostream>
using namespace std;
int main(){
    int a =0;
    int amg = 0;
    int sum =0;
    int b ;
    for(int i =1; i<=500;i++){
        b = i;
        sum = 0;
        while(b>0){
            a = b%10;
            sum += a*a*a;
            b/=10;
        }
        if(sum == i){
            cout<<i<< endl;
        }
        else{
            continue;
        }
    }
    return 0;
}