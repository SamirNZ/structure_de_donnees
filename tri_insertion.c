#include <stdio.h>

int main(){
    //Order croissant
    int arr[] = {3,5,10,1,22,4};

     //Affichage du tableau avant le trie
    for(int i=0; i<6; i++){
        printf("%d ", arr[i]);
    }
    
    for(int i=0; i<6-1; i++){
        int tmp = arr[i+1];

        for(int j = i; j >= 0; j--){
            
            if(arr[j] > tmp) {
                //décalage des éléments vers la droite
                arr[j+1] = arr[j];
                arr[j] = tmp;
            }
                

        }
    }

    //Affichage du tableau après le trie
    for(int i=0; i<6; i++){
        printf("%d ", arr[i]);
    }
return 0;
}