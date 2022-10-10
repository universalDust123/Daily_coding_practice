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
    int n;
    cin>>n;
    if(n==2 || n==3){
        cout<<"NO SOLUTION"<<endl;
    }
    else if(n==1){
        cout<<1;
    }
    else if(n==4){
        cout<<"2 4 1 3";
    }
    else{
        for(int i=n;i>0;i-=2){
            cout<<i<<" ";
        }
        for(int i=n-1;i>0;i-=2){
            cout<<i<<" ";
        }
    }
    return 0;
}