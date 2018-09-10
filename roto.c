#include <stdio.h>
int main(int argc, char *argv[]) {
	char linea[100005];
	int c=0;
	scanf("%[^\n]",&linea[c]) ;
	int izq = 100000,der = 100001,pos = 0,dir = 1,temp[100005],aux[100005];
	while(linea[pos] != '\0'){
		if(linea[pos] == '[' || linea[pos] == ']' ){
			dir = linea[pos] == '[' ? 0 : 1;
			pos++;
		} else {
			int t = 0;
			while (linea[pos] != '\0' && linea[pos] != '[' && linea[pos] != ']'){
				temp[t] = linea[pos];
				t++;
				pos++;
			}
			if(dir == 0){
				t--;
				while(t >= 0){
					aux[izq] = temp[t];
					izq--;
					t--;
				}
			} else {
				temp[t] = '\0';
				t = 0;
				while(temp[t] != '\0')
				{
					aux[der] = temp[t];
					der++;
					t++;
				}
			}
		}
	}
	for(int i = izq + 1 ; i < der ; i++){
		printf("%c", aux[i]);
	}
	printf("\n");
	return 0;
}
