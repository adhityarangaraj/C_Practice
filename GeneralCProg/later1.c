#include <stdio.h>

int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    int A[n1], B[n2], inter[n1+n2];
    for(int i=0;i<n1;i++) scanf("%d",&A[i]);
    for(int i=0;i<n2;i++) scanf("%d",&B[i]);

    int k=0;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(A[i] == B[j])
            {
                int flag=1;
                for(int x=0;x<k;x++)
                {
                    if(inter[x]==A[i])
                    { flag=0; break; }
                }
                if(flag) 
                    inter[k++] = A[i];
            }
        }
    }
    for(int i=0;i<k;i++) 
        printf("%d ", inter[i]);
    return 0;
}