int main(){
    int proportion,x,verify=0,sum=0,answer;
    scanf("%d",&proportion);
    int matriz[proportion][proportion],i,j;
        for(i=0;i<proportion;i++){
        for(j=0;j<proportion;j++){
            scanf("%d",&matriz[i][j]);
        }
    }
    for(i=0;i<proportion;i++){
        for(j=0;j<proportion;j++){
            if(matriz[i][j]!=0){
                verify++;
            }
            if(verify==proportion && sum==0){
            for(x=0;x<proportion;x++){
            sum+=matriz[i][x];
            }
            }
        }
        verify=0;
    }

    for(i=0;i<proportion;i++){
        for(j=0;j<proportion;j++){
            if(matriz[i][j]==0){
                answer=sum;
                for(x=0;x<proportion;x++){
                    answer-=matriz[i][x];
                }
                printf("\n%d\n",answer);
                printf("%d\n",i+1);
                printf("%d\n",j+1);
            }
        }
    }
}