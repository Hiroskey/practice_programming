#include<bits/stdc++.h>

using namespace std;

int main(){
    int A, B;
    cin >> A >> B;

    if((A+B)%2 == 0){
        cout << (A+B)/2 << endl;
        return 0;
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}