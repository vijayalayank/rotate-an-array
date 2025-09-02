
#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &arr,int start,int end){
    while(start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main() {
    int k=4;
   vector<int> arr = {0,1,2,3,4,5,6,7,8,9};
   rotate(arr,0,k-1);
   rotate(arr,k,arr.size()-1);
   rotate(arr,0,arr.size()-1);
   for(auto it:arr){
       cout<<it<<" ";
   }
   
}
