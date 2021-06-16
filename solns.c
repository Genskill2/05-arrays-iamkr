/* Enter your solutions in this file */
#include <stdio.h>

int max(int a[],int n);
int min(int a[],int n);
float average(int a[],int n);
int mode(int[], int);
int factors(int, int []);

int max(int a[],int n)
{
	int max=0;
	for (int i=0;i<n;i++)
	{
		if (a[i]>max)
			max=a[i];
		else
			continue;
	}
	return max;
}



int min(int a[],int n)
{
	int min=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]<min)
			min=a[i];
		else
			continue;
	}
	return min;
}


float average(int a[],int n)
{
	float sum=0;
	float avg=0;
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
	}
	avg=(float)sum/n;
	return avg;
}


int mode(int a[], int n)
{
  int l_max=max(a,n);
	int l_min=min(a,n);
	int counts[100],k=0;
	for(int i =l_min;i<=l_max;i++)
		{
		int cnt=0;
		for(int j=0;j<n;j++)
		{
			if(a[j]==i)
				cnt++;
		}
		counts[k++]=cnt;
		}
	int cmax=0,flag=0;
	for (int i=0;i<=k;i++)
	{
		if (counts[i]>cmax)
		{	cmax=counts[i];
			flag=i-(0-l_min);
		}
		else
			continue;
	}
	return flag; 
}

int factors(int n ,int a[])
{
	int count=0;
	while (n!=1){
		for(int i=2;i<=n;i++){
			if(n%1==0){
				a[count]=i;
				count++;
				n=n/i;
				break;
			}
		}
	
	}
	return count;
}





