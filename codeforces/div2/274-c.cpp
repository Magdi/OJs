#include <bits/stdc++.h>

using namespace std ;


int main(){
    int n ;
    cin >> n ;
    vector<pair<int,int> > v(n) ;
    for(int i = 0 ; i < n ; i++){
        cin >> v[i].first >> v[i].second ;
    }
    sort(v.begin(),v.end());
    int best = -1;
    for(int i = 0; i < n; i++) {
        if (best <= v[i].second) {
             best = v[i].second;
         } else {
             best = v[i].first;
         }
    }
    cout << best << endl ;
     return 0;
}
