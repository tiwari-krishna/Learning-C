#include<stdio.h>
#include<string.h>

int main()
{
    int i, j, num;
    char name[100][50], temp[50];
    printf("How many names do you wanna enter?\n");
    scanf("%d",&num);

    printf("Enter %d names:\n",num);

    for (i=0; i<num; i++)
    {
        
        scanf("%s",name[i]);
       
    }

    for (i=0; i<num; i++)
    {
        for (j=i+1; j<num; j++)
        {
            if(strcmp(name[i],name[j])>0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    printf("\nDisplaying names is alphabetical order\n");

    for (i=0; i<num; i++)
    {
       puts(name[i]);
    }
    
    return 0;
}
