#include<stdio.h>
struct student{
	char name[20];
	int roll;
	int mark;
}st[];
	int main(){
	int i,p,j;
	printf("Enter The number of students:");
	scanf("%d",&p);
	for(i=0;i<p;i++){
		printf("Enter The detail of student:%d",i+1);
		printf("\nEnter Name:");
		scanf("%s",&st[i].name);
		printf("\nEnter Roll No:");
		scanf("%d",&st[i].roll);
		printf("\nEnter Mark:");
		scanf("%d",&st[i].mark);
	}
		for(j=0;j<i;j++){
		printf("\nDetails of student:%d",j+1);
		printf("\n%s",st[j].name);
		printf("\n%d",st[j].roll);
		printf("\n%d",st[j].mark);
		
	}
}
