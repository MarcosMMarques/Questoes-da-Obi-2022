#include <stdio.h>
int toSum_digits(int number){
    int digit_1,digit_2,digit_3,digit_4,digit_5=0,p;
    digit_1 = number / 10000;
	p = number % 10000;
	digit_2 = p / 1000;
	p = p % 1000;
	digit_3 = p / 100;
	p = p % 100;
	digit_4 = p / 10;
	p = p % 10;
	digit_5 = p;
	return digit_1 + digit_2 + digit_3 + digit_4 + digit_5;
}
int main(){
    int min,max,expected_sum,i,answer=0;
    scanf("%d%d%d",&min,&max,&expected_sum);
    for(i=min;i<=max;i++){
        if(toSum_digits(i) == expected_sum){
            answer=i;
        }
    }
    if(answer==0){
        printf("-1");
    }else{
        printf("%d",answer);
    }
}