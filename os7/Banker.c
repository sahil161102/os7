#include <stdio.h>

struct consumerDemand{
	int res1;
	int res2;
	int res3;
	int flag = 1;
};

struct consAvailableResource{
	int res1;
	int res2;
	int res3;
};

struct inventory{
	int res1;
	int res2;
	int res3;
};

int main(){
 	int n;
	printf("Enter the no. of consumers :\t");
	scanf("%d",&n);
	consumerDemand consDem[n];
	consAvailaibleResource consAvRes[n];
	inventory inv;
	printf("Enter the available items of resource 1 in inventory :\t");
	scanf("%d",&inv.res1);
	printf("Enter the available items of resource 2 in inventory :\t");
	scanf("%d",&inv.res2);
	printf("Enter the available items of resource 3 in inventory :\t");
	scanf("%d",&inv.res3);
	for(int i = 0;i<n;i++){
	printf("Enter the demand of resource 1 for consumer %d :\t",i);
	scanf("%d",&consDem.res1);
	printf("Enter the demand of resource 2 for consumer %d :\t",i);
	scanf("%d",&consDem.res2);
	printf("Enter the demand of resource 3 for consumer %d :\t",i);
	scanf("%d",&consDem.res3);
	}
	for(int i = 0;i<n;i++){
	printf("Enter the available item of resource 1 for consumer %d :\t",i);
	scanf("%d",&consAvRes.res1);
	printf("Enter the available item of resource 2 for consumer %d :\t",i);
	scanf("%d",&consAvRes.res2);
	printf("Enter the available item of resource 3 for consumer %d :\t",i);
	scanf("%d",&consAvRes.res3);
	}
	printf("INVENTORY :\n");
	printf("resource1\tresource2\tresource3\n");
	printf("%d\t\t%d\t\t%d\n",inv.res1,inv.res2,inv.res3);
	printf("AVAILABLE RESOURCES :\n");
	printf("resource1\tresource2\tresource3\n");
	for(int i =0;i<n;i++)
	printf("%d\t\t%d\t\t%d\n",consAvRes[i].res1,consAvRes[i].res2,consAvRes[i].res3);
  printf("NEEDED RESOURCES :\n");
	printf("resource1\tresource2\tresource3\n");
	for(int i =0;i<n;i++)
		printf("%d\t\t%d\t\t%d\n",consDem[i].res1,consDem[i].res2,consDem[i].res3);
	while(n--){
  		for(int i = 0; i<n; i++){
			if(inv[i].res1>consDem[i].res1 && inv[i].res2>consDem[i].res2 && inv[i].res3>consDem[i].res3 && 			consDem[i].flag){
				inv.res1 += consDem[i].res1;
				inv.res2 += consDem[i].res2;
				inv.res3 += consDem[i].res3;
				consDem[i].flag = 0;
			}
		}
	}
}
