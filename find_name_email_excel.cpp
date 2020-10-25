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
#define ll long long int
#define ld double
#define endl "\n"

vector<string> vec_splitter(string s) {
        s += ',';
        vector<string> res;
        while(!s.empty()) {
                res.push_back(s.substr(0, s.find(',')));
                s = s.substr(s.find(',') + 1);
        }
        return res;
}
void debug_out(
vector<string> __attribute__ ((unused)) args,
__attribute__ ((unused)) int idx, 
__attribute__ ((unused)) int LINE_NUM) { cerr << endl; } 
template <typename Head, typename... Tail>
void debug_out(vector<string> args, int idx, int LINE_NUM, Head H, Tail... T) {
        if(idx > 0) cerr << ", "; else cerr << "Line(" << LINE_NUM << ") ";
        stringstream ss; ss << H;
        cerr << args[idx] << " = " << ss.str();
        debug_out(args, idx + 1, LINE_NUM, T...);
}

#define XOX
#ifdef XOX
    #define deb(...) debug_out(vec_splitter(#__VA_ARGS__), 0, __LINE__, __VA_ARGS__)
#else
    #define deb(...) 42
#endif



const ll mod = 1e9+7;
const ll inf = 1e18;


int32_t main(){
    ios_base::sync_with_stdio(false);    //for faster inputing
 /* #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif */
    unordered_map<string,pair<string,ll>> virus;   
    ll total_email_name;
    cin>>total_email_name;
    while(total_email_name--){
         string email;
         cin>>email;
         transform(email.begin(),email.end(),email.begin(),::tolower);
         ll pno;
         cin>>pno;
         cin.ignore();
         string name;
         getline(cin,name);
         fflush(stdin);
         pair<string,ll> str = make_pair(name,pno);
         virus[email] = str;
        //your code goes here
    }
    ofstream email_found,email_not_found;
    email_found.open("email_found.csv");  //the output will be stored in this file
    email_not_found.open("email_not_found.csv");
    ll extract;
    cin>>extract;
    while(extract--){
        string email;
        cin>>email;
        transform(email.begin(),email.end(),email.begin(),::tolower);
        if(virus.find(email) == virus.end())
            email_not_found<<email<<endl;
        else    
            email_found<<virus[email].first<<","<<email<<","<<virus[email].second<<endl; //commas used to store in .csv format
    }
    email_found.close();
    email_not_found.close();
    //cerr<<"Time Elapsed: "<<clock()/(double)CLOCKS_PER_SEC<<endl;
    return 0;
}
