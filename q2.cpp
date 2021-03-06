#include<iostream>
using namespace std;
int PeakElement(int a[], int start, int end) {
   int i, mid;
   mid = (end+start+1)/2;
   if((a[mid] > a[mid+1] && mid == start)||(a[mid] > a[mid-1] && mid == end)) {
      return a[mid];
   } else if(a[mid] < a[mid-1] && a[mid] > a[mid+1]) {
      return a[mid];
   } else if(a[mid] <= a[mid+1]) {
      return PeakElement(a, mid+1, end);
   } else if(a[mid] <= a[mid-1]) {
      return PeakElement(a, start,mid-1);
   }
}
int main() {
   int n, i, p;
   cout<<"\nEnter the number of data element: ";
   cin>>n;
   int arr[n];
   for(i = 0; i < n; i++) {
      cout<<"Enter element "<<i+1<<": ";
      cin>>arr[i];
   }
   p = PeakElement(arr, 0, n-1);
   cout<<"\nThe peak element of the given array is: "<<p;
   return 0;
}

