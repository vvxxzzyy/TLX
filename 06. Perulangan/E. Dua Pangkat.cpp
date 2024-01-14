#include<bits/stdc++.h>
using namespace std;

int main() {
   int n;
   scanf("%d", &n);

   while (n%2==0) {
      n = n/2;
   }

   if (n==1) {
      printf("ya\n");
   } else {
      printf("bukan\n");
   }

   return 0;
}