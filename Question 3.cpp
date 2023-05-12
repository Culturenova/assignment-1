#include <iostream>
using namespace std;

int main() {
   int sum = 0;
   int n = 200;

  
   for(int i=1; i<=n; i++) {
      sum += i;
   }

 
   double average = sum / (double)n;

  
   cout << "The average of the first " << n << " natural numbers is: " << average << endl;

   return 0;
}
