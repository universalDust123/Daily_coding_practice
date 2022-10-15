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
    ll t,y,x,count=0;
    cin>>t;
    while(t--){
        cin>>y>>x;
        if(y>x){
            if(y%2==0){
                count=y*y;
                cout<<count-x+1<<endl;
            }
            else{
                count=(y-1)*(y-1);
                cout<<count+x<<endl;
            }
        }
        else{
            if(x%2==1){
                count=x*x;
                cout<<count-y+1<<endl;
            }
            else{
                count=(x-1)*(x-1);
                cout<<count+y<<endl;
            }
        }

    }
    return 0;
}