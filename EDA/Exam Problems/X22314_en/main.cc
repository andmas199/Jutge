#include <iostream>
#include <map>
using namespace std;


int main() {
  map<string, int> M;
  char c;
  while (cin >> c) {
    if (c == 'N') {
      cout << "number: " << M.size() << endl;
    }
    else if (c == 'D') {
      string nif;
      int money;
      cin >> nif >> money;
      if(M.find(nif) != M.end()) M[nif] += money;
      else M[nif] = money;
    }
    else if (c == 'Q') {
      string nif;
      cin >> nif;
      if(M.find(nif) != M.end()) cout << M[nif] << endl;
      else cout << "-1" << endl;
    }
    else if (c == 'P') {
      bool first = true;
      for(auto it = M.begin(); it != M.end(); ++it) {
        if(it->first[it->first.size()-2] % 2 == 0) {
          if(not first) cout << " ";
          first = false;
          cout << it->first;
        }
      }
      cout << endl;
    }
    else { // c == 'L'
      if(M.size() == 0) cout << "NO LAST NIF" << endl;
      else {
        auto it = M.end();
        --it;
        cout << it->first << " " << it->second << endl;
      }
    }
  }
}
