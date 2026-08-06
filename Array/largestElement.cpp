// #include <iostream>
// #include<vector>
// using namespace std;

//     int largestElement(vector<int>& arr,int n) {
//         int largest=arr[0];
//         for(int i=0;i<n;i++){
//             if(arr[i]>largest){
//                 largest=arr[i];
//             }
            
//         }
//         return largest;

//     }
//     int main(){
//         int n;
//         cin>>n;
//         vector<int>arr(n);
//         for(int i=0;i<n;i++)cin>>arr[i];
         
      
//        cout<< largestElement(arr,n);


//         return 0;
//     }

#include <iostream>
#include <vector>
using namespace std;

int largest(vector<int>& arr) {
    int max = arr[0];

    //Traverse  from second and compare
    // every element with current max
    for (int i = 1; i < arr.size(); i++)
        if (arr[i] > max)
            max = arr[i];

    return max;
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<arr.size();i++) cin>>arr[i];
   
    cout << largest(arr);
    return 0;
}

  