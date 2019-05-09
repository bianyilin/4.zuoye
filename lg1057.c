/*************************************************************************
	> File Name: lg1057.c
	> Author: 
	> Mail: 
	> Created Time: 2019年04月07日 星期日 11时47分08秒
 ************************************************************************/

#include<stdio.h>

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int f[31][31]={0};
    f[0][1]=1;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(j==1)
            f[i][j]=f[i-1][n]+f[i-1][2];
            else if(j==n)
            f[i][j]=f[i-1][1]+f[i-1][n-1];
            else
            f[i][j]=f[i-1][j-1]+f[i-1][j+1];
        }
    }
    printf("%d\n",f[m][1]);
    return 0;
}
