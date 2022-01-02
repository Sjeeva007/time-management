#include <stdio.h>
struct customers{
    int roll;
    char name[40];
    char gender[6];
};

int main(){
    int chooseNumber=0,sizeOfArray,i,j;
    int exitCode;
   	struct customers bankCustomers[]={
        {1,"Danies","Male"},
        {2,"Jeeva","Male"},
        {3,"Dharun","Male"}
    };
    sizeOfArray = sizeof(bankCustomers)/sizeof(bankCustomers[0]);
    
    do{
    printf("1. List of Students");
    printf("\n2. Update list");
    printf("\nEnter the number : " );
    scanf("%d",&chooseNumber);
    
       // LIST OF STUDENTS TO DISPLAY
        if(chooseNumber==1){
            for(i=0;i<sizeOfArray;i++){
                printf("\n%d . %s - %s",bankCustomers[i].roll,bankCustomers[i].name,bankCustomers[i].gender);
            }
        }else if(chooseNumber==2){
            printf("\n1.Add Customer");
            printf("\n2.Delete Customer");
            printf("\nEnter the number : " );
            scanf("%d",&chooseNumber);
            if(chooseNumber==1){
                printf("\n### Adding Customer ###");
                    printf("\nEnter Roll Number :");
                    scanf("%d",&bankCustomers[sizeOfArray].roll);
                    printf("\nEnter Name :");
                    scanf("%s",&bankCustomers[sizeOfArray].name);
                    printf("\nEnter Gender :");
                    scanf("%s",&bankCustomers[sizeOfArray].gender);
                    sizeOfArray++;
                    for(i=0;i<sizeOfArray;i++){
                        printf("\n%d . %s - %s",bankCustomers[i].roll,bankCustomers[i].name,bankCustomers[i].gender);
                    }
                }
            }else if(chooseNumber==2){
                printf("\nDeleting Customer");
            }else{
            printf("#### WRONG #### Enter Correct Number 1 or 2 ");
        } 
        printf("\n\nEnter 1 to continue 2 to exit : ");
        scanf("%d",&exitCode);
    }while( exitCode==1  );
}
