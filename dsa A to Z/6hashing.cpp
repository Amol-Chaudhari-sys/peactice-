#include<bits/stdc++.h>
using namespace std;
int main(){
    string b ="10001000";
    int dec=0;
    int len =b.length();
    for (int i =0;i<len;++i){
        if(b[len-1-i]== '1'){ 
            dec =dec +pow(2,i);
        }

    }
    cout << dec ;
    

    
}