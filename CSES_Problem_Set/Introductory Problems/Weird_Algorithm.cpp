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
    ll n;
    cin>>n;
    cout<<n<<" ";
    while(n!=1){
        if(n%2==0){
            n/=2;
        }
        else{
            n*=3;
            n++;
        }
        cout<<n<<" ";
    }
    return 0;
}