#include <iostream>
using namespace std;

int main(){
int n;
int x = 0;
cin >> n;
for (int i = 1; i <= n; ++i) {
    x = x + (i * i);
   }
cout << x << endl;
}
