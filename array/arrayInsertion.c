#include<stdio.h>
int a[1000000];
int main(){
    int length;
    scanf("%d", &length);
    for(int i = 0 ; i<length; i++){
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < length; i++)
    {
        /* code */
        printf("%d ", a[i]);
    }

    length++;

    int index , value;
    scanf("%d %d", &index , &value);

    for (int  i = length - 1; i >= index; i--)
    {
        /* code */
        // printf("%d", a[i]);
        a[i + 1] = a[i];

    }
    printf("\n");
    a[index] = value;
    for(int i =0 ; i <length ; i++){
        printf("%d ",a[i]);
    }
    

    return 0;
}


/**
 

  [1 , 2, 3, 5]
  index 3
  value 4
  step 1 : take the all array
  step 2 : increase array length
  step 3 : loop from last index 
  step 4 : insert the number into the array 


 */