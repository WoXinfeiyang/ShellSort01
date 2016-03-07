/**
 * �ļ����ƣ�ϣ������ShellSort01(�����ڱ�����)
 * ʱ�䣺2016-3-7 16:18
 * ˵����1��ϣ������ShellSort��������д������ż�¼�������а���������ֳ����������У�
 * ����Щ�������зֱ����ֱ�Ӳ������򣻵��������ж���������ʱ���ٶ�ȫ���¼����һ��ֱ�Ӳ�������
 *2��ʱ�临�Ӷ�o(n^1.5).
 *3��ϣ������ShellSort�Ĺؼ���ѡȡ���ʵ���������������ֱ�Ӳ�������
 * */

/**
 *�������ƣ�shellSort(int *a,int length)
 *����������a---ָ�����������ָ��,length---���鳤��
 *����˵������С����ϣ������shellSort�������ڱ�����
 * */
void shellSort(int *a,int length)
{
	int i,j;
	int dt=length;/*�������*/
	do
	{
		dt=dt/3+1;
		for(i=0+dt;i<length;i++)
		{
			if(a[i]<a[i-dt])/*����ǰ��i����¼a[i]�������������ʱ*/
			{
				int temp=a[i];/*��ʱ�������൱���ڱ�����*/
				for(j=i-dt;(temp<a[j])&&(j>=0);j=j-dt)/*���ڱ�(��ʱ����)�е�ֵС��a[j]ʱ�ƶ�ǰi-dt�����ź�˳�������*/
				{
					a[j+dt]=a[j];
				}
				a[j+dt]=temp;
			}
		}
	}while(dt>1);
}

void arrayTraversal(int *a,int length)
{
	int i;
	for(i=0;i<length;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}

void main()
{
	int a[7]={5,4,3,2,1,7,6};
	shellSort(a,7);
	arrayTraversal(a,7);

	int b[5]={5,3,4,6,2};
	shellSort(b,5);
	arrayTraversal(b,5);
}

