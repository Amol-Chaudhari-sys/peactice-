#include <bits/stdc++.h>
using namespace std;
int count(int n){
    int cnt=0;
     while (n>0){
        int l=n%10;
        cout << l <<" ";
        n=n/10;
        cnt++;
     }
     return cnt;
}
int count2(int n){
    int cnt =(int)(log10)(n)+1;
    cout << "by count 2 method log10 "<< cnt<< endl ; 
    return cnt ;
}
int revno(int n){
    int r=0;
    while (n>0){
        r=r*10+(n%10);
        n=n/10;
    }
    cout<< r<< endl;
    return r;

}
void palendrom(int n){
    int rev =revno(n);
    if (n==rev ) cout<< "True "<< endl ;
    else  cout <<"False" <<endl; 
}
void armstrongno(int n){
    int cnt =count2(n);
    int m=n;
    int sum=0;
    while (n>0){
        int ld =n%10;
        sum =sum +(pow(ld,cnt));
        n=n/10;
    }
    cout << sum << endl;
    if (m==sum ) cout << "armstrong no  "<<endl;
    else  cout <<"not armstrong no " ;



}
// O(n)
void divider(int n){
    for (int i=1;i<=n;i++){
        if (n%i==0) cout<< i << " ";
    }
} // O(n)
//O(sqrt N)
void divider2(int n){
    vector <int > ls;
    for (int i =1;i<=sqrt(n);i++){
        if (n%i==0){
            ls.push_back(i);
            
            if (n/i!=i) ls.push_back(n/i);
        }
        

    }
    // O(n log n)
    sort(ls.begin(),ls.end());
    for(auto it :ls) cout << it <<" ";
}
// O(n)
void prime(int n){
    int cnt =0;
    for (int i=1; i<=n;i++){
        if (n%i==0){
            cnt =cnt +1;
        }
    }
    if (cnt ==2) cout << "prime no ";
    else cout << "not prime ";

}

void prime2(int n){
    int cnt =0;
    for (int i=1;i*i<=n;i++){
        if (n%i==0){
            cnt++;
            if (n/i!=i) cnt++;
        }
    }
    if (cnt ==2) cout<< "prime no by pm2 :";
    else cout<< "not prime by pm2 ";
}
void gcd(int n, int m){
    int gcd =0;
    for (int i=min(m,n);i>=1;i-- ){
        if ((i%n==0)&&(i%m==0)){
            gcd =i;
            break ;
            cout << "gcd is " << gcd ;
        }
    }
}
//O(log  (min (a,b)))
void gcd2(int n,int m){
    while (n>0 && m>0){
        if (n>m) n=n%m;
        else m=m%n;

    }
    if (n==0 ) cout << m<< " is the gcd ";
    else cout << n<< " is gcd ";


}


int main()
{ int n;
    cout << "enter the no. :";
    cin >> n;
    // int m=count (n);
    // cout <<"length is : "<< m << endl;
    // count2(n);1
    // revno(n);
    // palendrom(n);
    // armstrongno(n);
    //  divider(n);  // time complaxity O(n)
    // divider2(n);  // time complexity O(log(n))
    // prime(n); //O(n)
    // prime2(n);
    gcd (25,35);
    // gcd2(25,35); 
} 