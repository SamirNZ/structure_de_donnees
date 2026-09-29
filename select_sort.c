#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[] = {3,5,10,1,22,4};
    int i,j, max, tmp;

    for(i=0; i<5; i++){
        max = arr[i];
        for(int j=i+1; j<6; j++){
            if (max < arr[j]){
                max = arr[j];
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
        
    }
    for(i=0; i<6; i++){
        printf("%d ", arr[i]);
    }

    /* code */
    return 0;
}
