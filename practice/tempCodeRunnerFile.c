#include<stdio.h>
int main(){
	int T;
	int Costofgreen;
	int Costofpurple;
	int count1=0,count2=0;
	int num;
	int totalcost;
	scanf("%d",&T);
	
    for(int i=0;i<T;i++){
	scanf("%d %d", &Costofgreen, &Costofpurple);
	scanf("%d",&num);
	int arr[num][2];
		for(int j=0;j<num;j++){
			for(int k=0;k<2;k++){
				scanf("%d",&arr[j][k]);
			}
		}
		for (int j = 0; j < num; j++)
		{
			if(arr[j][0]==1){
				count1++;
			}
			if(arr[j][1]==1){
				count2++;
			}
		}
		if(count1>count2){
			if(Costofgreen>Costofpurple)
			totalcost=(count1*Costofpurple)+(count2*Costofgreen);
			else
			totalcost=(count1*Costofgreen)+(count2*Costofpurple);
		}
		else{
				if(Costofgreen>Costofpurple)
			totalcost=(count2*Costofpurple)+(count1*Costofgreen);
			else
			totalcost=(count2*Costofgreen)+(count1*Costofpurple);
		}
		printf("%d\n",totalcost);
	}
	return 0;
}
