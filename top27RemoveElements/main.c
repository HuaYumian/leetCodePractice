#include <stdio.h>
int removeElement(int* nums, int numsSize, int val) ;
int main(int argc, char *argv[])
{
	int table[4]={3,2,2,3};
	int temp=0,list=0;	
	printf("Hello C-Free!\n");
	temp=removeElement(table,4,3);	
	printf("length = %d\n",temp);	
 	for(list=0;list<4;list++)
 		printf("table[%d]=[%d]\n",list,table[list]);
	return 0;
}
int removeElement(int* nums, int numsSize, int val) {
  int i,j;
  int temp=numsSize;
  for(i=0;i<temp;i++)
  {
    if(nums[i]==val){
      temp--;
      for(j=i;j<temp;j++)
      	nums[j]=nums[j+1];
    }
  }
  return temp;
}



