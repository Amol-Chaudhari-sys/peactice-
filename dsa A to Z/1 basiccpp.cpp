#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// int main()
// {
    // std::cout <<"Amol"<<std ::endl;
    // std::cout <<"Amol"<<"\n";

    // string str ;
    // getline(cin,str );
    // cout << str ;
    // return 0;

    //
    // int age ;
    // cout << "enter your age ";
    // cin >> age;
    // if (age>=18){
    //     cout <<"your adult ";
    // }
    // else
    // cout << "your not adult";
    // float m;
    // cout <<"Enter your marks";
    // cin >> m;
    // if (m<=25){
    //     cout <<"F";
    // }
    // else if(m<=44){
    //     cout <<"E";
    // }
    // else if(m<=49){
    //     cout<<"D";
    // }
    // else if(m<=59){
    //     cout <<"C";
    // }
    // else if(m<=79){
    //     cout<<"B";
    // }
    // else if(m<=100){
    //     cout <<"A";
    // }
    // else
    // cout <<"invalit marke";
    // int day;
    // cout << "Enter day ";
    // cin >> day;
    // switch (day)
    // {
    // case 1:
    //     cout << "monday ";
    //     break;
    // case 2:
    //     cout << "tuesday";
    //     break;
    // case 3:
    //     cout << "wednesday";
    //     break;
    // case 4:
    //     cout << "thrusday";
    //     break;    
    // case 5:
    //     cout << "friday";
    //     break;
    // case 6:
    //     cout << "saturday";
    //     break;
    // case 7:
    //     cout << "sunday";
    //     break;
    // default:
    // cout << "invalid";
    // }

// int arr[5];
// cin >> arr[0]>>arr[1]>>arr[2];
// cout <<arr[2];
    
// int arr[4][3];
// arr[0][2]=7;
// arr[1][1]=6;
// cout<< arr[1][1];
  
// string s ="Chaudhari";
// int l= s.size();
// cout <<s[2];
// cout << l;

// for (int i=0;i<=10;i++){
//     cout <<"amol"<< i<< endl;
// }
// int j=1;
// while (j<=5){
//     cout << "amol" <<j<<endl;
//     j++;
// }
// int k=2;
// do {
//     cout << "amols " <<k<<endl;
//     k++;
// }while(k<=1);
//   cout << k << endl;
// void print(string name){
//     cout << "hey "<< name << endl;
// }
// int main(){
//     string name ;
//     cout << "enter your name";
//     cin >>name ;
//     print (name);
void sum(int &num ){
    cout << num <<endl;
    num +=5;
    cout << num << endl;
    num +=5;
    cout << num << endl;

}
int main (){
    int num = 10;
    sum(num );
    cout << num << endl;
 return 0;
}