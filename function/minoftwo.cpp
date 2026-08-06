#include <iostream>

using namespace std;

int minofTwo(int a, int b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}
    int main(){
    cout<<minofTwo(10,9)<<endl;
return 0;
}