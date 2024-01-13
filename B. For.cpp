#include<bits/stdc++.h>
using namespace std;

int main() {
   int n;
   scanf("%d", &n);

   int x;
   int sum = 0;
   for (int i = 1; i <= n; i++) {
      scanf("%d", &x);
      sum+=x;
   }

   printf("%d\n", sum);
   
   return 0;
}