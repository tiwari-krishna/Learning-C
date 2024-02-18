#include<stdio.h>
#include<string.h>

void reverseString(char str[]) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        // Swap characters at start and end indices
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move indices towards each other
        start++;
        end--;
    }
}

int main() {
  char ab[256],ba[256];
  printf("Enter the number: ");
  scanf("%s",ab);
  reverseString(ab);
  strcpy(ba,ab);
  if (ab==ba) {
    printf("%s is palindrome",ab);
  } else {
    printf("%s is not plaindrome",ab);
  }
}
