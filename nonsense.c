#include<stdio.h>
#include<string.h>

int main() {
	char USERNAME[] = "krishna";
	char PASSWORD[] = "pass";
	
	char username[8], password[8];

	int legit;

	printf("Login Form\n Enter Your UserName\n");
	scanf("%s", username);

	legit=strcmp(USERNAME,username);

	if(legit==0) {
		printf("Enter Password\n");
		scanf("%s",password);
		if (strcmp(PASSWORD,password)==0) {
			printf("Login Successful\n");
		}
		else{
			printf("Incorrect Password\n");
		}
	}
	else{
		printf("Incorrect Username\n");
	}

	return 0;
}
