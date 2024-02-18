#include<stdio.h>
#include<math.h>

int main() {
  int rem,num,temp,s=0;
  printf("Enter a number: ");
  scanf("%d",&num);
  temp=num;
  while (num > 0) {
    rem = num%10;
    s=s+pow(rem,3);
    num=num/10;
  }
  if (temp==s) {
    printf("Its arms are very strong\n");
  } else {
    printf("Sorry arms are weak\n");
  }
  return 0;
}
