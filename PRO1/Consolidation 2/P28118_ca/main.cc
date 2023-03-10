#include <iostream>
#include <cmath>
using namespace std;

double distancia(double x1, double y1, double x2, double y2) {
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    
    string s;
    double x1,y1,x2,y2;
    
    while (cin >> s) {
        double sol = 0.0;
        cin >> x1 >> y1;
        double x_aux = x1, y_aux = y1;
        bool found = false;
        while (not found and cin >> x2 >> y2) {
            if (x2 == x_aux and y2 == y_aux) found = true;
            sol += distancia(x1,y1,x2,y2);
            x1 = x2;
            y1 = y2;
        }
        cout << "Trajecte " << s << ": " << sol << endl;
    }
}
