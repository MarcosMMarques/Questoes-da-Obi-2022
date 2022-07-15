#include<stdio.h>
int main(){
	int number_measureaments,expected_sum,i,sum=0,j,answer=0;
	scanf("%d%d",&number_measureaments,&expected_sum);
	int vector[number_measureaments];
	for(i=0;i<number_measureaments;i++){
		scanf("%d",&vector[i]);
	}
	for(i=0;i<number_measureaments;i++){
		sum=vector[i];
		for(j=i+1;j<number_measureaments;j++){
			sum+=vector[j];
			if(sum==expected_sum){
				answer++;
			}
			if(sum>expected_sum){
				break;
			}
		}
		if(vector[i]==expected_sum){
			answer++;
		}
	}
	printf("%d",answer);
	return 0;
}
