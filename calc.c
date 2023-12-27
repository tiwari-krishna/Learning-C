#include<stdio.h>

int main() {
	double a,b,ans;
	char opd;
	printf("Enter any 2 numbers\n");
	scanf("%lf%lf",&a,&b);
	printf("Enter what to perform + , -, /, *\n");
	scanf(" %c",&opd);
	switch(opd) {
		case '+':
		ans=a+b;
		printf("The sum is %lf\n",ans);
		break;
		case '-':
		ans=a-b;
		printf("The difference is %lf\n",ans);
		break;
		case '*':
		ans=a*b;
		printf("The Product is %lf\n",ans);
		break;
		case '/':
		ans=a/b;
		printf("The quotient is %lf\n", ans);
		break;
		default:
		printf("Wrong Operation\n");
	}
	return 0;
}
