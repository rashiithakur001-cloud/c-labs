#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter the limit l: ");
    scanf("%d", &n);
    printf("Ramanujan numbers up to %d are:\n", n);
     for (int x = 1; x*x*x < n; x++) 
      {for (int y = x + 1; y*y*y < n; y++) 
      {for (int z = x + 1; z*z*z < n; z++) 
        {for (int l = z + 1; l*l*l < n; l++) {
    int s1 = x*x*x + y*y*y;
    int s2 = z*z*z+ l*l*l;
    
     if (s1 == s2 && s1 <= n) {
    printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n", s1, x, y, z, l);
    } }
    }
   }
    }
 return 0;
}