#include <iostream>
using namespace std;

int main() {
   int num;
   int sum = 0;

   cout << "Enter a positive number (enter a negative number to stop): ";

   while(cin >> num && num >= 0) {
      sum += num;
      cout << "Enter another positive number (enter a negative number to stop): ";
   }

   cout << "The sum of the positive numbers entered is: " << sum << endl;

   return 0;
}
