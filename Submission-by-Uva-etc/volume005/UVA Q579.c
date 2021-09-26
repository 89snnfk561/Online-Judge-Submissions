#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	double H, M;
	double angle;
	char c;
	scanf("%lf%c%lf", &H, &c, &M);
	while(H != 0 || M != 0){
		angle = fabs((H*30+M*0.5)-M*6);
		if(angle > 180){
			angle = 360 - angle;
		}
		printf("%0.3lf\n", angle);
		scanf("%lf%c%lf", &H, &c, &M);
	}
	return 0;
}
