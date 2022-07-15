#include<stdio.h>
int main(){
	//6
	//2
	//0 2 0 1 0 1
	/*Sao 6 os intervalos com soma igual a 2: [2], [0,2], [2,0], [0,2,0], [1,0,1]
	e [0,1,0,1*/
	int nm=0,sr=0,i=0,s=0,j=0,res=0;
	scanf("%d%d",&nm,&sr);
	int v[nm];
	for(i=0;i<nm;i++){
		scanf("%d",&v[i]);
	}
	for(i=0;i<nm;i++){
		s=v[i];
		for(j=i+1;j<nm;j++){
			s+=v[j];
			if(s==sr){
				res++;
			}
			if(s>sr){
				break;
			}
		}
		if(v[i]==sr){
			res++;
		}
	}
	printf("%d",res);
	return 0;
}
