#include<stdio.h>
#include<conio.h>
void main(){
    int arr[10],i,j,temp,n,min;
    printf("ENTER THE NUMBER OF ELEMENTS : ");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS \n");
    for (i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0 ; i<n-1 ; i++){
        min=i;
        for(j=i+1;j<n;j++)
            if (arr[j]<arr[min])
            min=j;
            temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
        }
        printf("SORTED ARRAY IS \n");
        for(i=0 ; i<n; i++){
            printf("%d\n",arr[i]);
        }
    getch(); 
}
