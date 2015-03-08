#include <bits/stdc++.h>

using namespace std ;

string sol(int z , int o){
    if(z - o >= 2 || o - (z*2) >= 3){
        return "-1";
    }else{
        string res = "" ;
        if(z > o) res += "0" , z--;
        while(o || z){
            if(o == z && o && z) {
                res+= "10";
                o-- , z--;
            }else if(o > z && o>1 && z){
                res += "110";
                o-=2,z--;
            }else if(o){
                res += "1";
                o--;
            }
        }
        return res ;
    }
}

int main(){
    int z , o ;
    cin >> z >> o ;
    cout << sol(z,o) << endl ;
    return 0;
}
