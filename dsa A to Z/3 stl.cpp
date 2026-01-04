/// Algorithm
// contener
// function
// iterator
#include <bits/stdc++.h>
using namespace std;
void explorepair()
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;
    pair<int, pair<int, int>> a = {1, {4, 6}};
    cout << a.first << a.second.first << a.second.second << endl;
    pair<int, int> arr[] = {{1, 4}, {3, 2}, {5, 6}, {7, 8}};
    cout << arr[0].first;

    // utility library
}
void explorevector()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(4);
    v.emplace_back(3);
    v.emplace_back(6);
    v.emplace_back(7);

    vector<pair<int, int>> vec;
    vec.push_back({3, 2});
    vec.emplace_back(6, 7);

    vector<int> w(5, 100); //(100,100,100,100,100)
    cout << w[2] << w.at(1) << endl;
    vector<int> vr(5); // ( , , , , )

    vector<int> v1(5, 20); //(20 ,20, 20,20,20)
    vector<int> v2(v1);    // copy

    vector<int>::iterator it = v.begin();
    it++;
    cout << *(it); // 4
    it = it + 2;
    cout << *(it) << endl;

    // vector<int>::iterator it=v.end();
    // cout<<*(it)<<endl;
    // vector<int>::iterator it=v.rend();

    // vector<int>::iterator it=v.rbegin();

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
    // deletion element
    v.erase(v.begin() + 1, v.begin() + 4);

    for (auto t : v)
    {
        cout << t << " ";
    }
    cout << endl;
    // insertion element
    vector<int> y(2, 100);          //(100,100)
    y.insert(y.begin(), 300);       //(300,100,100)
    y.insert(y.begin() + 1, 2, 10); //(300,10,10,100,100)

    vector<int> x(2, 50);
    y.insert(y.begin(), x.begin(), x.end());
    for (auto t : y)
    {
        cout << t << " ";
    }
    cout << endl;
    cout << y.size() << endl;

    y.swap(v); // y=v v=y

    y.insert(y.begin(), x.begin(), x.end());
    for (auto t : y)
    {
        cout << t << " ";
    }
    cout << endl;
    v.pop_back();
    y.clear(); // erease entire vector
    cout << y.empty() << endl;
    cout << v.empty() << endl;
}
void explorelist()
{
    list<int> ls;
    ls.push_back(2);    // 2
    ls.emplace_back(4); // 2,4
    ls.push_front(5);   // 5,2,4
    ls.emplace_front(); // 2,4
    // begin ,end ,rberin,rend ,clear,insert,size,swap
}
void exploredeque()
{
    deque<int> dq;
    dq.push_back(1);     // 1
    dq.emplace_back(2);  // 1,2
    dq.push_front(3);    // 3,1,2
    dq.emplace_front(4); // 4,3,1,2

    dq.pop_back();  // 3,4,1
    dq.pop_front(); // 4,1

    for (auto it = dq.front(); it == dq.back(); it++)
    {
        cout << dq[it];
    }
    cout << endl;

    dq.back();
    dq.front();
}
void explorestack()
{
    stack<int> st;
    st.push(1);    // 1
    st.push(4);    // 4,1
    st.push(3);    // 3,4,1
    st.push(2);    // 2,3,4,1
    st.emplace(6); // 6,2,3,4,1

    cout << st.top() << endl; // 6
    st.pop();                 // 2,3,4,1
    cout << st.size() << endl;
    cout << st.empty() << endl;

    stack<int> st1, st2;
    st1.swap(st2);
}
void explorequeue()
{
    queue<int> q;
    q.push(1);
    q.push(4);
    q.emplace(3);

    q.back() += 5;

    cout << q.back() << endl;
    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;
    q.pop();
    q.front() -= 5;

    cout << q.front() << endl;
}
void explorepq()
{
    priority_queue<int> pq;

    // incresing order stores
    // maximum heap
    pq.push(5);     // 5
    pq.push(2);     // 5,2
    pq.push(8);     // 8,5,2
    pq.emplace(10); // 10 ,8,5,2

    cout << pq.top() << endl; // 10
    pq.pop();                 // 8,5,2
    cout << pq.top() << endl; // 8

    // decresing order store
    // minimum heap
    priority_queue<int, vector<int>, greater<int>> p;
    p.push(5);
    p.push(2);
    p.push(8);
    p.emplace(10); //  2,5,8,10

    cout << p.top() << endl;
}
void exploreset()
{
    // sorted order and unique element
    set<int> st;
    st.insert(1);  // 1
    st.insert(3);  // 1,3
    st.insert(2);  // 1,2,3
    st.insert(2);  // 1,2,3
    st.emplace(5); // 1,2,3,5

    // auto it=st.find(3);
    // auto ite= st.find (6); //set.end
    int cnt = st.count(6);
    cout << cnt << endl;

    auto it1 = st.find(5);
    auto it2 = st.find(3);
    st.erase(it1, it2);

    // auto it4=st.lower_bound(2);
    // auto it3=st.upper_bound (3);
}
void exploremultiset()
{
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1); // 1,1,1,

    int cnt = ms.count(1);
    cout << cnt << endl;

    // only delete single one
    ms.erase(ms.find(1));

    ms.erase(ms.find(1), ms.find(1));
    ms.erase(1); // delete every one all 1's
}
void explainUset()
{
    // store random order
    //  unique element
    //  time complex.... O(1)
    //  few times its.... O(n)
    unordered_set<int> st;
}
void explainmap()
{
    map<int, int> mpp;

    map<int, pair<int, int>> mmp;

    map<pair<int, int>, int> mp;

    mpp[1]=2;
    mpp.insert({2,4});
    mpp.insert({3,5});

    mp [{2,3}]=10;
    for(auto it:mpp){
        cout<<it.first<<" "<< it.second<<endl;
    }

    // auto it=mpp.find(3);
    // cout << *(it).second;







}
void multimap(){
    // stores multiple keys 

}
void unorderedmap(){
    //same as set and unorder set diffrance 
}
 
// Algorithms
// void comp(pair<int,int > p1,pair<int,int> p2){
//     if (p1.second <p2.second )return true;
//     if (p1.second >p2.second )return false;
//     // same then 
//     if (p1.first>p2.second) return true;
//     return false ;

// }
// void explainExtra(){
//     sort(a,a+n);
//     sort (v.begin(),v.end());

//     sort(a+2,a+4);
//     sort (a, a+n,grater<int>); // sort in decending order 

//     pair <int,int> a[]= {{1,2},{2,1},{3,4}};

// // sort acording to second element
// //if second element is same then sore according to first ilement in decresing element 

//     sort (a,a+n,comp);

//     // (4,1),(2,1),(1,2)

//     int num =7;
//     int cnt =__builtin_popcount();
//     long long num =1234567898765;
//     int cnt =__builtinpopcountll();

//     string s="123";
//      do {cout << s<< endl;
//     }while (next_permutation(s.begin(),s.end()));
//     int maxi +*max _element(a,a+n);

// }

 



int main()
{
    // explorepair(); // utility library
    // explorevector();
    // explorelist();
    // exploredeque();
    // explorestack();
    // explorequeue();
    // explorepq(); //prearioty queue
    // exploreset();
    // exploremultiset();
    // explainUset();
    explainmap();
}