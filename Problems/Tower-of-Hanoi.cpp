#include <iostream>
using namespace std;

void move(int n, int x,int y){
    for (int i = n; i >= 1; i--) {
        // move disk i from peg x to peg y
        cout << x << " " << y << endl;
        // move the remaining disks from the intermediate peg to peg y
        if (i > 1) {
            move(i-1, 6-x-y, y);
        }
    }
}

int main(){
    int n;
    cin >> n;

    long long num = (1 << (2*n)) - 1;
    cout << num << endl;
    move(n, 1, 3);
}

//https://cses.fi/problemset/task/2165/
