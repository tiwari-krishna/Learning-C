#include <stdio.h>
#include <string.h>

int main() {
 char a[200];
 int i,j;
 printf("Enter the String: \n");
 scanf("%s",a);
 int k=strlen(a);
 for (i=0,j=k-1;i<j;i++,j--) {
  if (a[i] != a[j]) {
   printf("The String is not palindrome\n");
   return 0;
  }
 }
 printf("The String is palindrome\n");
 return 0;
}
