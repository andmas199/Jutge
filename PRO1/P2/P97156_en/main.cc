#include <iostream>
using namespace std;

int main(){
int x,y;
cin >> x >> y;
while (x <= y) {
    cout << x ;
    if (x < y) cout << ",";
    x = x + 1;
    }
cout << endl;
}
