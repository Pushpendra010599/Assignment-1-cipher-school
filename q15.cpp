#include<iostream>
#include<algorithm>
using namespace std;

int minPlatform(int arrival[], int departure[], int n) {
   sort(arrival, arrival+n);   
   sort(departure, departure+n);

   int platform = 1, minPlatform = 1;
   int i = 1, j = 0;

   while (i < n && j < n) {
      if (arrival[i] < departure[j]) {
         platform++;     //platform added
         i++;
         if (platform > minPlatform)   
            minPlatform = platform;
      } else {
         platform--;    
         j++;
      }
   }
   return minPlatform;
}

int main() {
   int arrival[] = {900, 940, 950, 1100, 1500, 1800};
   int departure[] = {910, 1200, 1120, 1130, 1900, 2000};
   int n = 6;
   cout << "Minimum Number of Platforms Required: " << minPlatform(arrival, departure, n);
}
