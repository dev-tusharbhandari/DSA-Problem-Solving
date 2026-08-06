#include <iostream>

using namespace std;
int findPrime(int n){
    bool isPrime= true;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            isPrime= false;
            break;
        }
    }
    if(isPrime==true){
        cout<<"prime"<<endl;
    }else{
        cout<<"notPrime"<<endl;
    }
  return isPrime;
}
    int main(){
        cout<<findPrime(9)<<endl;
          cout<<findPrime(5)<<endl;
    
return 0;
}