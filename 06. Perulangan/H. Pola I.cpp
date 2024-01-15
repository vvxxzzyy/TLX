#include<bits/stdc++.h>
using namespace std;

int main() {
   int n, m;
   scanf("%d %d", &n, &m);

   for (int i=1; i<=n; i++) {
      if (i%m == 0) {
         printf("* ");
         continue;
      }
      printf("%d", i);

      if (i <= n-1) {
         printf(" ");
      } else {
         printf("\n");
      }
   }

   return 0;
}