int numberOfSteps(int num) {
    int numberOfSteps=0;
    if(num==0){
        numberOfSteps=0;
    }
    while(num!=0){
   
    if(num%2==0){
        num=num/2;
        numberOfSteps+=1;
    }
    else{
        num-=1;
        numberOfSteps+=1;
        }
    }
    return numberOfSteps;
}