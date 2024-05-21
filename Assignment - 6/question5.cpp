#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter a number: ";
    cin>>n;
    int sum =0;
    int a = 1;
    while(n>0){
        a = n%10;
        if(a%2==0){
            sum += a;
        }
        n/=10;
    }
    cout<< "Sum of the even digits of the number is: "<<sum<<endl;
    return 0;
}