#include<iostream>
using namespace std;
bool b_search(int arr[],int s,int e,int k){
    int mid;
    mid = s + (e-s)/2;
    if ( s > e){
        return false;
    }
    
    if ( arr[mid] == k){
        return true;
    }
    else if ( arr[mid] < k){
        s = mid + 1;
        
        return b_search(arr,s,e,k);
    }
    else {
        
        e = mid - 1;
        return b_search(arr,s,e,k);
    }
    
    
}

int main(){
    int arr[10] = {-1,0,1,3,5,5,5};
    int k = 10;
    int s = 0;
    int e = 4;
    bool res = b_search(arr,s,e,k);
    if (res){
        cout << "element found";
        
    }
    else
    {
        cout << "element not found";
    }
}
