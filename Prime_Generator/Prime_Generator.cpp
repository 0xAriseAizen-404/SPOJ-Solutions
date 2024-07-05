
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n1, n2;
        cin>>n1>>n2;
        for(int i = n1; i <= n2; i++){
            bool isPrime = true;
            for(int j = 2; j <= sqrt(i); j++){
            if(i % j == 0){
                isPrime = false;
                break;
            }
            }
            if(isPrime && i > 1){
            cout << i << endl;
            }
        }
        cout<<endl;
    }
}