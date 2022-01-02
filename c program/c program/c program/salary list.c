#include<stdio.h>
int main()
{
	float ramu_bp,ramu_da,ramu_net;
	float somu_bp,somu_da,somu_net;
	float kumar_bp,kumar_da,kumar_net;
	
	/*calculation for ramu*/
	
	ramu_bp=15000;
	ramu_da=ramu_bp*15.0/100;
	ramu_net=ramu_bp+ramu_da;
	
	/*calculation for somu*/

	somu_bp=15000;
	somu_da=somu_bp*15.0/100;
	somu_net=somu_bp+somu_da;
	
	/*calculating for kumar*/
	
	kumar_bp=15000;
	kumar_da=kumar_bp*15.0/100;
	kumar_net=kumar_bp+kumar_da;
	
	
	printf("\nMy first c program in salary list");
	printf("\n*********************************");
	printf("\nS.no  Name          Basic pay        DA         Net salary ");
	printf("\n***********************************************************");
	printf("\n %-3d %-12s %14f %11.2f %11.2f", 1, "Ramu",ramu_bp, ramu_da, ramu_net);
	printf("\n %-3d %-12s %14f %11.2f %11.2f", 2, "Somu",somu_bp, somu_da, somu_net);
	printf("\n %-3d %-12s %14f %11.2f %11.2f", 3, "kumar",kumar_bp, kumar_da, kumar_net);
	printf("\n **********************************************************");
	printf("\n  TOTAL %20.2f %16.3f %110.3f ",
	                        ramu_bp+somu_bp+kumar_bp,
							ramu_da+somu_da+kumar_da,
							ramu_net+somu_net+kumar_net);
							
							
	


}
