#include <iostream>

using namespace std;

int main(){
    int n, k;
    float d;
    cin >> n >> k;
    cout << k / 100 + (k - ((k / 10)*10)) + n;

    //321 / 100 = 3
    // (321 / 10) * 10 = 320
    // 321 - 320

    return 0;
}