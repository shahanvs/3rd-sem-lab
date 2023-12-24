#include<stdio.h>
#include<conio.h>
int main() {
    int arr[10],num,i,n,found=0,pos=-1;
    printf("\nEnter the number of element in the array: ");
    scanf("%d",&n);
    printf("\n Enter the element : ");
    for(i=0;i<n;i++)
    {
        printf("\n arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    printf("\n Enter the Number that has to be searched : ");
    scanf("%d",&num);
    for(i=0;i<n;i++){
        if(arr[i]==num)
        {
            found=1;
            pos=i;
            printf("\n %d is found in the array at position = %d",num,i+1);
            break;
        }
    }
    if (found==0)
    printf("\n %d DOES NOT EXIST IN THE ARRAY ");
    getch();
    return 0;

}