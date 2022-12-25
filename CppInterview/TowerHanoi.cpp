#include <iostream>

using namespace std;

void TowerHanoi(int n, char source, char destination, char auxiliary) {
   if (n == 1) {
      cout << "Move disk " << n << " from source " << source << " to destination " << destination << endl;
   }
   else {
      TowerHanoi(n - 1, source, auxiliary, destination);
   cout << "Move disk " << n << " from source " << source << " to destination " << destination << endl;
   TowerHanoi(n - 1, auxiliary, destination, source);
   }
}

int main() {
   int pegs = 35;
   TowerHanoi(pegs, 'A', 'C', 'B');
   return 0;
}
