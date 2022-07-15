#include<stdio.h>
int main(){
	int day_value=0,price_elevating=0,arrived=0,final_value=0,before_arrived=0,final_day=0,i=0;
	scanf("%d%d%d",&day_value,&price_elevating,&arrived);
	before_arrived=arrived-1;
	if(before_arrived==0){
		before_arrived=1;
	}
	final_day=31-arrived;
	final_day++;
	
	for(i=2;i<=31;i++){
		if(i==arrived){
			final_value=day_value+(before_arrived*price_elevating);
			final_value=final_day*final_value;
		}else if(arrived==1){
			final_value=final_day*day_value;
		}
	}
	if(arrived>=16){
		final_value=day_value+(14*price_elevating);
		final_value=final_day*final_value;
	}
	printf("%d",final_value);
	return 0;
}
