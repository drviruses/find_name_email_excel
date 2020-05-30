/*
    @uthor: Amit Kumar
    user: GitHub: drviruses ;CodeChef: dr_virus_ ; Codeforces,Hackerearth,Hakerrank: dr_virus;
*/
#include <bits/stdc++.h>
#include<fstream>            //for file inputing and outputing
using namespace std;
//#include <boost/multiprecision/cpp_int.hpp>
//namespace mp = boost::multiprecision;
//#define ln mp::cpp_int;
#define ll long long
#define ld double
#define endl "\n"

const ll mod = 1e9+7;
const ll inf = 1e18;


int32_t main(){
    ios_base::sync_with_stdio(false);    //for faster inputing
 /* #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif */
    unordered_map<string,string> virus;   
    ll total_email_name;
    cin>>total_email_name;
    while(total_email_name--){
         string email;
         cin>>email;
         cin.ignore();
         string name;
         getline(cin,name);
         fflush(stdin);
         virus[email] = name;
        //your code goes here
    }
    ofstream email_found,email_not_found;
    email_found.open("email_found.txt");  //the output will be stored in this file
    email_not_found.open("email_not_found.txt");
    ll extract;
    cin>>extract;
    while(extract--){
        string email;
        cin>>email;
        if(virus.find(email) == virus.end())
            email_not_found<<email<<endl;
        else    
            email_found<<virus[email]<<"           "<<email<<endl;
    }

    //cerr<<"Time Elapsed: "<<clock()/(double)CLOCKS_PER_SEC<<endl;
    return 0;
}
