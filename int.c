#include<stdio.h>
#include<math.h>
int main() {
        float p, i, t, r;
        scanf("%f%f%f", &p,&t,&r);
        i=p*(pow((1+(0.01*r)),t)-1);
        printf("Interest is %f", i);
        return 0;
}

