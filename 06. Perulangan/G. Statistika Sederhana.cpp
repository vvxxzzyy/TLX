#include<bits/stdc++.h>
using namespace std;

int main() {
   int n;
   scanf("%d", &n);

   int besar = 100000;
   int kecil = -100000;
   for (int i=1; i<=n; i++) {
      int x;
      scanf("%d", &x);
      if (x<besar) {
         besar = x;
      } 
       if (x>kecil){
         kecil = x;
      }
   }

   printf("%d %d\n", kecil, besar);

   return 0;
}