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
    ll n;
    cout<<0<<endl;
    cin>>n;
    for (long long i = 2 ; i <= n ; i++) {
      ll a=(i*i)*(i*i-1)/2//Total Possibilities
      ll b=(4*(i-2)*(i-1)) //Excluded cases
      cout << a-b<< endl;
    }
    return 0;
}