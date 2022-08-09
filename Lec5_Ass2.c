#include<stdio.h>

/* Write C code that manage a small school. The school has 3 classes each class
contains 10 students. Define three arrays for the three classes each one with a
length of 10. Save a random numbers in all array elements to indicate the
students grade. The program will calculate and display the following statistics:
1- Number of passed students
2- Number of Failed students
3- Highest grade
4- Lowest grade
5- Average grade
Knowing that the total grade is from 100 and the minimum passing grade is 50. */

void main(void)
{
	int class1[10],class2[10],class3[10];
	int i,j;
	int passed =0,failed=0;
	int min=100,max=0,sum=0;
	
	for (i=1 ; i < 4 ; i++)
	{
		for(j=0 ; j < 10 ; j++)
		{
			printf(" entre grade for student number %d in class %d :",j+1,i);
			
			if (i==1)
			{scanf("%d",&class1[j]);}
			if (i==2)
			{scanf("%d",&class2[j]);}
			if (i==3)
			{scanf("%d",&class3[j]);}
		}
	}
	
	for (i=1 ; i < 4 ; i++)
	{
		for(j=0 ; j< 10 ; j++)
		{
			
			if(i==1)
			{
				
				if (class1[j] > max)
					max = class1[j] ;
				else if (class1[j] < min )
					min = class1[j] ;
				
				if (class1[j] >= 50 )
					passed++;
				else 
					failed++;
				
				sum += class1[j] ; 
			} 
			if (i==2)
			{
				if (class2[j] > max)
					max=class2[j];
				else if (class2[j] < min)
					min=class2[j];
				
				if (class2[j] >= 50)
					passed++;
				else
					failed++;
				
				sum+=class2[j];
			}
			if (i==3)
			{
				if (class3[j] > max)
					max=class3[j];
				else if (class3[j] < min)
					min=class3[j];
				
				if (class3[j] >= 50)
					passed++;
				else
					failed++;
				
				sum+=class3[j];
			}
		}
	}
	
	printf("number of passed student is : %d\n",passed);
	printf("number of failed students is : %d\n",failed);
	printf("the highest grade is  : %d\n",max);
	printf("the lowest grade is  : %d\n",min);
	printf("the average grade is : %d\n",sum/30);
	
}
	
				
		
