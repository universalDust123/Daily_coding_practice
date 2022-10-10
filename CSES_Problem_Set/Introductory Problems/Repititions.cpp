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
    string a;
    cin>>a;
    ll n=a.length();
    ll counter=0,ma=0;
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            counter++;
        }
        else{
            counter=0;
        }
        ma=max(ma,counter);
    }
    cout<<ma+1;
    return 0;
}