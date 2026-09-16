#include <iostream>
using namespace std;

int main() {
   int n;
   cout << "Enter size of array: ";
   cin >> n;
   int a[100];
   cout << "Enter array elements: ";
   for (int i = 0; i < n; i++) {
       cin >> a[i];
   }
   // Move non-zero elements to the front
   int j = 0;
   for (int i = 0; i < n; i++) {
       if (a[i] != 0) {
           a[j] = a[i];
           j++;
       }
   }
  
   // Fill remaining positions with zeros
   while (j < n) { 
     a[j] = 0; 
     j++;
   }
     cout << "Array after shifting zeros to right: ";
     for (int i = 0; i < n; i++) {
     cout << a[i] << " ";
     }
     return 0;
  } 
