#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter a number: ";
    cin>>n;
    int f = 1;
    int s =1;
    int t =0;
    cout<<f<<" "<<s<<" ";
    for(int i=3; i<=n; i++){
        t = f+s;
        f = s;
        s = t;
        cout<<t<<" ";
    }

    return 0;
}