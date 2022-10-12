#include<exception>
#include<limits>
#include<typeinfo>
#include<utility>
#include<functional>
#include<memory>
#include<locale>
#include<algorithm>
#include<bitset>
#include<deque>
#include<iterator>
#include<list>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<vector>
#include<complex>
#include<fstream>
#include<iomanip>
#include<iostream>
#include<random>
#include<string>
using namespace std;
#define ll long long int
int main(){
    // ifstream infile;
    // infile.open("test_input.txt");
    ll n,d;
    cin>>n;
    ll sum=0;
    ll SUM=(n*(n+1))/2;
    for(int i=0;i<n-1;i++){
        cin>>d;
        sum+=d;
    }
    cout<<SUM-sum;
    return 0;
}