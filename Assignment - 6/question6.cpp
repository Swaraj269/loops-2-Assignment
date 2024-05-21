#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter a number: ";
    cin>>n;
    int a = n;
    int b = 0;
    int rev =0;
    while(n>0){
        b = n%10;
        rev = rev*10+b;
        n = n/10;
    }
    cout<< "Sum is: "<< a+rev<<endl;
}