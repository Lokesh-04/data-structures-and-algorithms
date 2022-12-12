#include<iostream>
using namespace std;
bool l_search(int arr[],int n,int k){
    int r;
    if (n == 0){
        return false;
    }
    
    if ( arr[0] == k){
        return true;
    }
    
    else{
        return l_search(arr+1,n-1,k);
    }
    
    
    
}

int main(){
    int arr[10] = {1,3,5,5,5};
    int size = 5;
    int k = 5;
    bool res = l_search(arr,size,k);
    if (res){
        cout << "element found";
        
    }
    else
    {
        cout << "element not found";
    }
}
