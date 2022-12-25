
// THE DIFFERENCES BETWEEN C AND C++

// C procedural language, no exception handling,  scoping via static members


// C++ Object Oriented Language  and procedural, built-in exception handling, uses classes for data hiding (encapsulation)


// OOP - Object Orientation, encapsulation, polymorphism, abstraction

// POLYMORPHISM door class, car, garage, front door, closet

// INHERITANCE base class, and derived classes

// ENCAPSULATION  securing code. scoping the code

// ABSTRACTION keeps data safe. abstract what we need without needing to know how it does what it does




// String data type - determine if a given string is a palindrome
#include <iostream>

using namespace std;

int main () {

   string text = "TACOCAT";
   bool palindrome = true;

   for (int i = 0; i < (text.length()-1)/2; i++) {
      if (text[i]  != text[(text.length()-1)-i]){
            palindrome = false;
            i = text.length()+1;
          }
   }
   if (palindrome) {
      cout << "This string is a palindrome" << endl;
   }
   else {
      cout << "The text is not a palindrome" << endl;
   }
}
