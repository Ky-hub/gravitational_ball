#include "stdafx.h"
#include "math.h"
#include "change2rightAngle.h"
#define PI 3.14159

void change2rightAngle(int c_x,int c_y,int distance,double angle,int *x,int *y){
	double a = PI/180;//ת��pi�����
	*x = c_x+distance*(sin(angle*a));
	*y = c_y-distance*(cos(angle*a));
}