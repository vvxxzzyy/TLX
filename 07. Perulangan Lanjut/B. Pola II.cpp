#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  scanf("%d", &n);

  for (int i=n; i>0; i--) {
   for (int j=1; j<=n; j++) {
      if (i>j) {
         printf(" ");
      } else {
         printf("*");
      }
   }
   printf("\n");
  }

   return 0;
}