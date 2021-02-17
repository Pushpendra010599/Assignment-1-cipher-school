#include<iostream>
using namespace std;

bool WillMeet(int p1, int j1, int p2, int j2){

   return ( (j1 > j2 && ( ((p2 - p1) % (j1 - j2)) == 0)) || (j2 > j1 && ( ((p1 - p2) % (j2 - j1)) == 0)) );
}

int main() {
   
   int p1 = 5, j1 = 4, p2 = 9, j2 = 2;
   if(WillMeet(p1, j1, p2, j2))
      cout<<"Both will meet at some point";
   else
      cout<<"Both will not meet at any point";
   
   return 0;
}

