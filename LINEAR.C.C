#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,arr[100],s;
clrscr();
printf("Enter no of elements: ");
scanf("%d",&n);
printf("Enter the elements : ");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("Enter the element for search");
scanf("%d",&s);
for(i=0;i<n;i++){
if(arr[i]==s){
printf("The element %d is in the position %d in the array",s,i);
break;
}
}
if(i==n){
printf("The element %d is not in the array",s);
}
getch();
}
