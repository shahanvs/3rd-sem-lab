#include<stdio.h>
int main(){
    int arr[20],i,n,item,l=0,result=-1,r;
    printf("ENTER THE NUMBER OF ELEMENT : ");
    scanf("%d",&n);
    printf("ENTER ELEMENTS IN SORTED ORDER :\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("ENTER THE ITEM TO BE SEARCHED : ");
    scanf("%d",&item);
    r=n-1;
    while (l<=r){
        int m=l+(r-l)/2;
        if (arr[m]==item){
            result=m;
         }
        if (arr[m]<item){
            l=m+1;
        }
        else {
            r=m-1;
        }
    }
    if (result==-1){
        printf("ELEMENT NOT FOUND IN ARRAY");
    }
    else{
        printf("ELEMENT FOUND AT POSSITION :  %d",result+1);
    }
    return 0;
}
