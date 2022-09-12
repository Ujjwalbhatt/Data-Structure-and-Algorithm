#include <stdio.h>

int find_and(int arr[], int len)
{
    // Initialise ans variable is arr[0]
    int ans = arr[0];
    // Traverse the array compute AND
    for (int i = 0; i < len; i++)
        ans = (ans | arr[i]);
    return ans;
}

#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int N;
        scanf("%d", &N);
        int arr[N];
        int A[100];
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &arr[j]);
        }
        int Xor = A[0];
        for (int k = 0; k < N; k++){
            
            Xor = (Xor | arr[k]);
        }
        printf("%d",Xor);
    }
    return 0;
}