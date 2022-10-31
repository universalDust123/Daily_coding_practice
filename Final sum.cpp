#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,i,q,l,r,sum;
    cin>>t;
    while(t--){
        sum=0;
        cin>>n>>q;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++){
            sum+=a[i];
        }
        for(i=0;i<q;i++){
            cin>>l>>r;
            if((r-l+1)%2!=0){
                sum++;
            }
        }
        cout<<sum<<"\n";
    }
	return 0;
}
