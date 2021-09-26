#include <stdio.h>
#include <stdlib.h>

int funtion(double x, double x1, double x2){
	double z1 = x - x1, z2 = x - x2;
	if((z1 > 0.0 && z2 > 0.0) || (z1 < 0.0 && z2 < 0.0)){
		return 0;
	}else{
		return 1;
	}
}
int main (){
	char c = '0';
	struct rectangle{
		double x1, y1, x2, y2;
	};
	struct rectangle r[20];
	
	int rcount = 0, icount = 0;
	scanf(" %c", &c);
	if(c == '*'){
	}else{
		while(c != '*'){
			scanf("%f%f%f%f", &r[rcount].x1, &r[rcount].y1, &r[rcount].x2, &r[rcount].y2);
			scanf(" %c", &c);
			rcount++;
		}
	
	}
	
	double ix[10000], iy[10000];
	ix[1] = 0, iy[1] = 0;
	int i, j, io = 0;
	double x, y;

	scanf("%lf%lf", &ix[icount], &iy[icount]);
	while(ix[icount] != 9999.9 || iy[icount] != 9999.9){
		
		x = ix[icount], y = iy[icount];
		io = 0;
		
		for(i = 0; i < rcount; i++){
			if(funtion(x, r[i].x1, r[i].x2) == 1 && funtion(y, r[i].y1, r[i].y2) == 1){
				printf("Point %d is contained in figure %d\n", icount+1, i+1);
				io = 1;
			}
		}
		if(io == 0){
			printf("Point %d is not contained in any figure\n", icount+1);
		}
		icount++;
//		printf("icount = %d\n", icount); 
		scanf("%lf%lf", &ix[icount], &iy[icount]);  // 不知為何 float 輸入 9999.9 時會變成 9999.9000391 
//		printf("ix = %f, iy = %f\n", ix[icount], iy[icount]);
	}
}

