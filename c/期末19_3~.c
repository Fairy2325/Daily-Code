#include <stdio.h>
int main()
{
	int a[10][10];//严格意义来说，应该弄一个动态二维数组的，但太麻烦了，就没弄，直接定一个上限
	int b[10][10]; 
	int jie;
//	printf("几阶矩阵\n");
	scanf("%d",&jie);
	int N;
//	printf("你想求它的几次幂\n");
	scanf("%d",&N); 
	int r,e;
//	printf("请输入矩阵每一项的值，每%d个数，按个回车\n",jie);
	for(r=0;r<jie;r++)
	{
		for(e=0;e<jie;e++)
		{
			scanf("%d",&a[r][e]);
		}
	} 
	
	
	int i,k;
	int m,n;
	for(i=0;i<N-1;i++)
	{
		//两两相乘 
		for(k=0;k<jie;k++)//控制b数组的行 
		{
			for(m=0;m<jie;m++)//控制b数组的列 
			{
				b[k][m]=0;
				for(n=0;n<jie;n++)//前面的行，乘后面的列，加几项，就遍历几项。 
				{
					b[k][m]=b[k][m]+a[k][n]*a[n][m];
				}
			}
			 
		}
		//两两相乘结束后，给临时数组的值，赋值到原数组，进行下一次的两两相乘。 
		int f,g;
		for(f=0;f<jie;f++)
		{
			for(g=0;g<jie;g++)
			{
				a[f][g]=b[f][g]; 
			}
		
		}
	}
	int u,p;
	for(u=0;u<jie;u++)
	{
		for(p=0;p<jie;p++)
		{
			printf("%d ",a[u][p]);
		}
		printf("\n");
	}
	
	return 0;
}
