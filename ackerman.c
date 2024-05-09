#include <stdio.h>
#include <time.h>
int ackerman(int a, int b);
int main(){
	int a = 1 , b = 1,ans;
	clock_t start = clock();
	ans = ackerman(3,11);
	printf("\n%d",ans);
	clock_t end = clock();
	double time = (double)(end - start) / CLOCKS_PER_SEC*1000;
  	printf("\n%.2f ms\n", time);
	return 0;
}
int ackerman(int a,int b){
	int sum = 0;
	if(a == 0){
	b++;
	// printf("1");
	return b;
	}
	else if(b == 0){
		// printf("2");
		return ackerman(a-1,1);
	}
	else{
	// printf("3");
	return ackerman(a-1,ackerman(a,b-1));
	}
	return b;
}