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
// infile.open(test_input.txt);//Add the quots to file name
    ll n,d;
    ll prev_term=0,sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>d;
        if(d>=prev_term){
            prev_term=d;
            continue;
        }
        else{
            sum+=(prev_term-d);
        }
    }
    cout<<sum;
    return 0;
}