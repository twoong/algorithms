#include <stdio.h>
//#include <math.h>

int power(int n, int square){
    int result = 1;
    for(int i=0; i<square; i++){
        result *=n;
    }
    return result;
}
int main () {
    int input, result=0, size=0;
    int count;
    
    scanf("%d", &input);
    for(int i=1; input>=i; i=i*10){
        size++;
    }    
    
    if(size>1){
        result = 9;
    }else {
        result = input;
        printf("%d\n", result);
        return 0;
    }

    for(int count=1; count<size-1; count++){
        result += (power(10,(count+1))-power(10,count))*(count+1);
        //printf("result = %d\n", result);
    }
    result += (size*(input-power(10,size-1)+1));
    
    printf("%d", result);
        
    return 0;
}