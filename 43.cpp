#include<stdio.h>
#include<stdlib.h>

typedef struct{
	int id;
	int time;
}person; 
int compare(const void*a,const void*b){
	person *p1=(person*)a;
	person *p2=(person*)b;
	if(p1->time!=p2->time){
		return p1->time-p2->time;
	}return p1->id-p2->id;
}
int main(){
	int n;
	scanf("%d",&n);
	person human[1001];
	for(int i=0;i<n;i++){
		scanf("%d",&human[i].time);
		human[i].id=i+1;
	}
	qsort(human,n,sizeof(person),compare);
	for(int i=0;i<n;i++){
		printf("%d",human[i].id);
		if(i<n-1){
			printf(" ");
		}
	}
	printf("\n"); 
	long long time_wait=0;
	for(int i=0;i<n;i++){
		time_wait+=(long long)human[i].time*(n-i-1);
	}
	double m=(double)time_wait/n; 
	printf("%.2f\n",m);
	return 0;
} 
