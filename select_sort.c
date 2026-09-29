#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[] = {3,5,10,1,22,4};
    int i,j, max_idx, tmp;

    for(i=0; i<5; i++){
        max_idx = i; // On suppose que l'index actuel est le maximum
        for(int j=i+1; j<6; j++){
            if (arr[max_idx] < arr[j]){
                max_idx = j; // Mettre à jour l'indice du maximum si un élément plus grand est trouvé
            }
        }
        // Échanger l'élément maximum trouvé avec le premier élément de la partie non triée
                tmp = arr[i];
                arr[i] = arr[max_idx];
                arr[max_idx] = tmp;
        
    }
    for(i=0; i<6; i++){
        printf("%d ", arr[i]);
    }

    /* code */
    return 0;
}
