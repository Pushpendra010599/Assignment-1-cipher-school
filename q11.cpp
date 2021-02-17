#include <iostream>
using namespace std;
int max(int a, int b){
   if(a > b)
      return a;
      return b;
}
int MaximizeProfit(int stkPrice[], int firstDay, int lastDay){
   if (lastDay <= firstDay)
      return 0;
   int maxProfit = 0;
   for (int i = firstDay; i < lastDay; i++) {
      for (int j = i + 1; j <= lastDay; j++) {
         if (stkPrice[j] > stkPrice[i]) {
            int profit = ( stkPrice[j] - stkPrice[i] ) + MaximizeProfit(stkPrice, firstDay, i - 1) + MaximizeProfit(stkPrice, j + 1, lastDay);
            maxProfit = max(maxProfit, profit);
         }
      }
   }
   return maxProfit;
}
int main(){
   int stkPrice[] = { 120, 310, 405, 210, 150, 550 };
   int days = 6 ;
   cout<<"The Maximum profit is "<<MaximizeProfit(stkPrice, 0, days);
   return 0;
}
