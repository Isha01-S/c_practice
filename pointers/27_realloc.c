/*realloc() function*/

#include<stdio.h>
#include<stdlib.h> //because we are using dynamic memory allocation
int main(){
    int i, *ptr;
    ptr = (int *)malloc(5*sizeof(int));
    if(ptr==NULL){
        printf("memory not available");
        exit(1);
    }
    for(i=0; i<5;i++){
        *(ptr+i)=i*2;
    }
    ptr=(int *)realloc(ptr,9*sizeof(int));//allocate memory of 4 more integers

        for(i=5; i<9;i++){
            *(ptr+i)=i*10;
    }
    for(i=0;i<9;i++){
        printf("%d ",*(ptr+i));
    }
    printf("\n");
    

    return 0 ;
}