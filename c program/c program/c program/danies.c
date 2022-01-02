#include<stdio.h>
struct customers{
    int serialNumber;
    char name[30];
    char nation[20];
};
int main(){
    
    struct customers bankCustomers[5]={{1,"Danies","India"},{2,"Dharun","Africa"},{3,"Jeeva","America"},{4,"Abthul","Mukkuroad"},{5,"PonnaDoggie","Not Found"}};

        int proceedNumber=0,i,j,datas;
       
        printf("1.List of customers\n");
        printf("2.Add customers\n");
        printf("Enter Number To Proceed : ");
        scanf("%d",&proceedNumber);
        if(proceedNumber==1){
            printf("List of customers:");
        for(i = 0;i<5;i++){
            printf("\n %d. %s",bankCustomers[i].serialNumber, bankCustomers[i].name);
        };
             int wantedDetails =0;
            printf("\n Enter the number of customers to get Details : ");
            scanf("%d",&wantedDetails);
            if(wantedDetails<=5 && wantedDetails>0){
                   for(j=0;j<5;j++){
                        if(wantedDetails==bankCustomers[j].serialNumber){
                        printf("\n%d \n%s \n%s",bankCustomers[j].serialNumber, bankCustomers[j].name,bankCustomers[j].nation);
                    }
                } 
            }
            else{
                printf("Not found");
                
            }
        }else if(proceedNumber==2){
            
             int r=sizeof(bankCustomers)/sizeof(bankCustomers[0]);
             printf("\n%d",r);
            printf("\n Add Customer to List ");
            printf("\nEnter Serial Number of new Customer:");
             scanf("%d",&bankCustomers[r].serialNumber);
//             printf("\n%d",bankCustomers[r].serialNumber);
             printf("\nEnter Name of new Customer:");
            scanf("%s",&bankCustomers[r].name);
            printf("\nEnter nation of new Customer:");
            scanf("%s",&bankCustomers[r].nation);
            for (datas=0;datas<=r;datas++){
                 printf("\n%d \n%s \n%s",bankCustomers[datas].serialNumber, bankCustomers[datas].name,bankCustomers[datas].nation);
            }
        //     
            
        }else{
            printf("Enter Correct Number## Either 1 Or 2");
        }
}
