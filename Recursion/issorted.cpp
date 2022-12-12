#include<iostream>
using namespace std;
bool issorted(int arr[],int n){
    int r;
    if (n == 0){
        return true;
    }
    if (n == 1){
        return true;
    }
    
    if ( arr[0] > arr[1] ){
        // i have to check greater than condition or less then or equal condition because 1,2,3,3,3 is also sorted as some terms are repeated
        return false;
    }
    else{
        return issorted(arr+1,n-1);
        
    }
    
}

int main(){
    int arr[10] = {1,3,5,5,5};
    int size = 5;
    bool res = issorted(arr,size);
    if (res){
        cout << "array is sorted";
        
    }
    else
    {
        cout << "array is not sorted";
    }
}
