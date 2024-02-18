#include<stdio.h>

int main() {
  int num,new=0,rem,temp;
  printf("Enter number with at least 2 digits: ");
  scanf("%d",&num);
  temp=num;
  while (num != 0) {
    rem = num%10;
    new = new*10 + rem;
    num = num/10;
  }
  if (temp == new) {
    printf("Since the reverse of %d is %d. The number is palindrome", temp,new);
  } else {
    printf("Since the reverse of %d is %d. The number is not palindrome", num,new);
  }
  return 0;
}
