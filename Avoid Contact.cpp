//Raj Kamal Shakya
//IIIT SONEPAT
#include <bits/stdc++.h>

using namespace std;

int main(){
  long long n;
    cin >> n;
    while(n--){
       long long x , y;
        cin >> x >> y;
        if(x == y){
            cout << 2*x - 1 <<endl;
        }
        else if(y==0){
            cout << x <<endl;
        }
        else{
            cout << x+y <<endl;   
        }
    }
    return 0;

}
