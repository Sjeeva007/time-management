#include<stdio.h>
struct manavargal{
	int serialno;
	char name[20];
	int regno;
	char college[40];
};
int main(){
	int a=3,i;
	struct  manavargal stu[]={
		{1,"danies",01,"hindustan"},
		{2,"dharun",02,"aj"},
        {3,"abthul",03,"sadak"}
	};
	
	for(i=0;i<a;i++){
	printf(" \n%d %s %d %s",stu[i].serialno,stu[i].name,stu[i].regno,stu[i].college);
}
}
