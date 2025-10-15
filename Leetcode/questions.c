#include<stdio.h>


// // 268
// // Missing Numbers
int main() {
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];
    int occ[size + 1];
    for (int i = 0; i <= size; i++) {
        occ[i] = 0;
    }
    for (int i = 0; i < size; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &arr[i]);
        occ[arr[i]]++;
    }
    for (int i = 0; i <= size; i++) {
        if (occ[i] == 0) {
            printf("The missing number is %d.\n", i);
            break;
        }
    }
    return 0;
}


// 3423. Maximum Difference Between Adjacent Elements in a Circular Array

int main()
{
    int arr[3] = {4, -5, 3}, abso, maxAbs;
    for (int i = 0; i < 3; i++)
    {
        if (i == 0)
        {
            abso = abs(arr[i + 1] - arr[i]);
            maxAbs = abso;
        }
        else if (i == 2)
        {
            abso = abs(arr[i] - arr[0]);
            if (abso > maxAbs)
            {
                maxAbs = abso;
            }
        }
        else
        {
            abso = abs(arr[i + 1] - arr[i]);
            if (abso > maxAbs)
            {
                maxAbs = abso;
            }
        }
    }
    printf("The max absolute difference is %d.\n", maxAbs);
    return 0;

}
