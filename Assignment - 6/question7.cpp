#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter a number: ";
    cin>>n;
    int fac;
    for(int i=1; i<=n; i++){
        fac=1;
        for(int j=1; j<=i; j++){
            fac*=j;
        }
        cout<< fac<<endl;
    }
    return 0;
}