int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int* sum=(int*)malloc(accountsSize*sizeof(int));
    int maximumWealth;
    for(int i=0;i<accountsSize;i++){
        sum[i]=0;
        for(int j=0;j<accountsColSize[i];j++){
          sum[i]+=accounts[i][j]; 
          } 
          }
          maximumWealth=sum[0];
     for(int k=1;k<accountsSize;k++){
         if(sum[k]>maximumWealth){
             maximumWealth=sum[k];
         }
     }
    
    return maximumWealth;
}