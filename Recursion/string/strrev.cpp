#include <bits/stdc++.h>

void stringrev(int i,int j,string& str){
    char temp;
    if ( i > j ){
        return ;
    }
    // Write your code here.
    temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    stringrev(i+1,j-1,str);
}

string reverseString(string str)
{
    int size = str.length();
    int i = 0 , j = size - 1;
    stringrev(i,j,str);
    return str;
}
