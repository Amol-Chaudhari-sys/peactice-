#include<bits/stdc++.h>
using namespace std;
// recursion 1 
void printname (int i,int n){
    if (i>n)
    return ;
    cout << "amol" <<endl;
    printname (i+1,n);
}
void printrno(int n){
    if(n<0)
    return;
    cout << n <<endl;
    printrno(n-1);
}

void printno(int i, int n){
    if (i>n)
    return ;
    cout << i <<endl;
    printno(i+1,n);
}
 void oneton(int i){
    if (i<1)
    return ;
    oneton(i-1);
    cout<< i <<endl;
}
void nto1(int i,int n){
    if (i>n)
    return;
    nto1(i+1,n);
    cout << i << endl ;

}

int sumofnum (int s,int n){
    if (n<1){
        cout << s<<endl;
        return 0 ;
    }
    sumofnum(s+n,n-1);
}
int sumofNo(int n){
    if (n==0){
    return 0;
    }
    return n + sumofNo(n-1);
}

int fact(int n){
    if (n==1)
    return 1;
    return n*fact(n-1);

}
void revarr(int i,int a[],int n){
    if (i>=n/2){
    return; 
    }

    swap(a[i],a[n-i-1]);
    revarr(i+1,a,n); 
}
bool palendrome(int l,string &s){
    if ( l >= s.size()/2){
        cout << "palendrome ..."<<endl;
        return true;
    }
    if(s[l]!=s[s.size()-l-1]) return false;
    palendrome(l+1,s);
}
// tc= O(2²)
int fibo(int n){
    if (n<=1) return n;
    return fibo(n-1)+fibo(n-2);
}

int main (){
    
    printrno(5);
    printno(1,5);
    printname(1,5); 
    oneton(5); // backrtacking procedure after function call
    nto1(1,5);
                                                                               
// parameterized method
    sumofnum(0,6);
    //functional method
    cout << "sum is : ";
    cout <<sumofNo(6) <<endl;
    cout << "factorial is :" <<fact(6)<<endl;
    int arr[]= {1,2,3,4,5,6};
    revarr(0,arr,6);
    for (int i=0;i<=5;i++){
        cout << arr[i]<<" ";
    }
    cout<<endl;
    string s="swaraws";
    cout<<palendrome(0,s)<< endl; 

// multiple recursion call 
cout<< fibo (2)<<endl;
cout<< fibo (3)<<endl;
cout<< fibo (4)<<endl;
cout<< fibo (5)<<endl;
cout<< fibo (6)<<endl;
cout<< fibo (7)<<endl;


    
    return 0; 
}
