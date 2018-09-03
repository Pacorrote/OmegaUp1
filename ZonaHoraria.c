#include <stdio.h>
int main(int argc, char *argv[]) {
	int a,b,c,d,h,m;
	scanf("%d" "%d" "%d" "%d",&a,&b,&c,&d);
	if(a>c){
		if(b==0){
			h=(24-a)+c;
			printf("%d\n",h);
			printf("0");
		}else{
			if(d>b){
				h=(24-a)+c;
				printf("%d\n",h);
				m=d-b;
				printf("%d",m);
			}
			else{
				h=((24-a)+c)-1;
				printf("%d\n",h);
				m=(60-b)+d;
				printf("%d",m);
			}
		}
		
	}else{
		if(d==0){
			h=c-a;
			printf("%d\n",h);
			printf("0");
		}
		else{
			if(d>b){
				h=c-a;
				printf("%d\n",h);
				m=d-b;
				printf("%d",m);
			}
			else{
				h=(c-a)-1;
				printf("%d\n",h);
				m=(60-b)+d;
				printf("%d",m);
			}
		}
		
	}
	return 0;
}
