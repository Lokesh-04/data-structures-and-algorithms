#include<iostream>
using namespace std;
void saydigits(string arr[],int n){
    int r;
    if (n == 0){
        return ;
        // in case of void type functions we can use return stmt without returning anything
    }
        r = n % 10;
        n = n / 10;
        
    
    saydigits(arr,n);
    cout << arr[r] << " ";    
        
}

int main(){
    
    int n;
    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    cin >> n;
    saydigits(arr,n);
    
}
