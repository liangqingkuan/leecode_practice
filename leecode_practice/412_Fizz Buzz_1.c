/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    char** answer=malloc(n*sizeof(char*));
    *returnSize=n;
    for(int i=1;i<n+1;i++){
        if((i)%3==0&&(i)%5==0)
            answer[i-1]="FizzBuzz";
        else if((i)%3==0)
            answer[i-1]="Fizz";           
        else if((i)%5==0)
            answer[i-1]="Buzz";
        else{
       answer[i-1]=malloc(12) ;                snprintf(answer[i-1],sizeof(answer[i-1]),"%d",i);
}

    }
    return answer;
}