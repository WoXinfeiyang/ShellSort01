/**
 * 文件名称：希尔排序ShellSort01(不含哨兵变量)
 * 时间：2016-3-7 16:18
 * 说明：1、希尔排序ShellSort概念：将含有大量待排记录数的序列按增量间隔分成若干子序列，
 * 在这些子序列中分别进行直接插入排序；当整个序列都基本有序时，再对全体记录进行一次直接插入排序。
 *2、时间复杂度o(n^1.5).
 *3、希尔排序ShellSort的关键是选取合适的增量间隔分组进行直接插入排序。
 * */

/**
 *函数名称：shellSort(int *a,int length)
 *函数参数：a---指向整型数组的指针,length---数组长度
 *函数说明：从小到大希尔排序shellSort，不含哨兵变量
 * */
void shellSort(int *a,int length)
{
	int i,j;
	int dt=length;/*增量间隔*/
	do
	{
		dt=dt/3+1;
		for(i=0+dt;i<length;i++)
		{
			if(a[i]<a[i-dt])/*当当前第i个记录a[i]不符合排序规则时*/
			{
				int temp=a[i];/*临时变量，相当于哨兵变量*/
				for(j=i-dt;(temp<a[j])&&(j>=0);j=j-dt)/*当哨兵(临时变量)中的值小于a[j]时移动前i-dt个已排好顺序的数组*/
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

