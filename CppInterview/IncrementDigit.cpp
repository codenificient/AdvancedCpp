#include <iostream>
#include <vector>

using namespace std;


int main() {

int arr[] = { 6, 8, 2, 8};
int arrSize = (sizeof(arr)/sizeof(arr[0])) - 1;

// cout << arrSize << endl;

vector <int> digits;
int carry = 1;
int sumHolder = 0;
for (int i = arrSize; i >= 0; i--) {
   sumHolder = arr[i] + carry;
   if (sumHolder >= 10) {
      digits.push_back(sumHolder % 10);
      carry = 1;
   }
   else {
      digits.push_back(sumHolder);
      carry = 0;
   }
}
if (carry == 1) {
   digits.push_back(carry);
   carry = 0;
}

for (int i = digits.size() - 1; i >= 0; i--) {
   cout << digits.at(i);
}

return 0;
}
