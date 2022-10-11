#include <stdio.h>
#include <conio.h>

void main(){
    int a[30],x,n,i;
    printf("\nEnter No. of Elements : ");
    scanf("%d",&n);
    printf("\nEnter the values : ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nEnter Element to find : ");
    scanf("%d",&x);
    i=0;
    while(i<n && x != a[i]){
        i++;
    }
    if(i<n){
        printf("\nFound at Location %d",i+1);
    }else{
        printf("\nElement Not Found");
    }
    getch();
}