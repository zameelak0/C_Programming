#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    int myarray[5];

    for (int i=0;i<5;i++){
        printf("Enter the elements  \n");
        scanf("%d",&b);
        myarray[i]=b;

    }
    printf("Enter element which u want to search \n");
    scanf("%d",&a);
    for (int j=0;j<5;j++){
        if (a==myarray[j]){
    printf("Element found at myarray[%d]=%d \n",j,a);
   }else {

   }
    }

    return 0;
}
