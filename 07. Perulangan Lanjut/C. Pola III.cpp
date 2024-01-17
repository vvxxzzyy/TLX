#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  scanf("%d", &n);

  int k = 0;

  for (int i=0; i<n; i++) {
      for (int j=0; j<=i; j++) {
         printf("%d", k);
         k++;
         if (k==10) {
            k = 0;
         }
      }
      printf("\n");
  }

   return 0;
}