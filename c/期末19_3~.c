#include <stdio.h>
int main()
{
	int a[10][10];//�ϸ�������˵��Ӧ��Ūһ����̬��ά����ģ���̫�鷳�ˣ���ûŪ��ֱ�Ӷ�һ������
	int b[10][10]; 
	int jie;
//	printf("���׾���\n");
	scanf("%d",&jie);
	int N;
//	printf("���������ļ�����\n");
	scanf("%d",&N); 
	int r,e;
//	printf("���������ÿһ���ֵ��ÿ%d�����������س�\n",jie);
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
		//������� 
		for(k=0;k<jie;k++)//����b������� 
		{
			for(m=0;m<jie;m++)//����b������� 
			{
				b[k][m]=0;
				for(n=0;n<jie;n++)//ǰ����У��˺�����У��Ӽ���ͱ������ 
				{
					b[k][m]=b[k][m]+a[k][n]*a[n][m];
				}
			}
			 
		}
		//������˽����󣬸���ʱ�����ֵ����ֵ��ԭ���飬������һ�ε�������ˡ� 
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
