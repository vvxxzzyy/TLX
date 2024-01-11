#include<bits/stdc++.h>
using namespace std;

int main() {
   double n;
   scanf("%lf", &n);

   int f, c, x;
   x = trunc(n);

   if (n == trunc(n)) {
      f = x;
      c = f;
   } else if (n > 0) {
      f = x;
      c = x+1;
   } else if (n < 0) {
      f = x-1;
      c = x;
   }

   printf("%d %d\n", f,c);

  return 0;
}
