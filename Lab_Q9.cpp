#include <iostream>
using namespace std;

int main() {
    int r,c;
    printf("enter no. of rows: ");
    scanf("%d",&r);
    printf("enter no. of columns: ");
    scanf("%d",&c);
    
    int a[r][c],b[r][c],i,j,ch;
    printf("Enter elements of 1st matrix: ");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements of 2nd matrix: ");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    }
    int p[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            p[i][j]=a[i][j]+b[i][j];
            printf("%d ", p[i][j]);
        }
    }
    return 0;
}