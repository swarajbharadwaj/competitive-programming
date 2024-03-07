#include <bits/stdc++.h>
#define int long long
using namespace std;
const int M = 998244353;
const int N = 1e5;
void solve(){
    int n,c;
    cin>>n>>c;
    int a[n];
    int ans=0,ans1=0,ans2=0,ans3=0,ans4=0;int oddcnt=0,evencnt=0;
     ans1=((c+1)*(c+2))/2;
    for(int i=0;i<n;++i){
        cin>>a[i];
        ans4+=(c-a[i]+1);
        if(a[i]%2){

            oddcnt++;
            ans2+=(a[i]+1)/2;
            ans3+=oddcnt;
        }
        else{
            evencnt++;
            ans2+=(a[i])/2+1;
            ans3+=evencnt;

        }
        
    }

     //cout<<ans1<<" "<<ans2<<" "<<ans3<<" "<<ans4<<endl;
    ans=ans1-ans2-ans4+ans3;
    cout<<ans<<endl;


   
}


int32_t main(){
    int t;
    cin >> t;

    while (t--){
         solve();
    }
    return 0;
}
