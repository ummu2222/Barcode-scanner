#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define ld long double
#define MAX 101
#define MOD 1000000007
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 3.14159265358979323846
#define w ll _; cin >> _; while(_--)
#define endl "\n"
#define flush fflush(stdout);
#define fixedprec cout << fixed << setprecision(18);

int main(){

    fast

    w{
        ll i,j,n,k;
        cin >> n >> k;
        ll a[n];
        ll d = 0;
        map<ll,ll> mp;
        for(i=0;i<n;i++){
            cin >> a[i];
            if(!mp[a[i]]){
                d++;
            }
            mp[a[i]]=1;
        }
        ll ans = 0;
        if(k==1){
            if(d==1){
                cout << 1 << endl;
            }
            else{
                cout << -1 << endl;
            }
            continue;
        }
        while(1){
            if(d<=1){
                break;
            }
            d-=(k-1);
            ans++;
        }
        if((d>0)&&(!k)){
            cout << -1 << endl;
        }
        else{
            cout << ans << endl;
        }       //ujjwal
    }

}
