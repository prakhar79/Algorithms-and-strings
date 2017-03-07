/*
Given two straight line segments (represented as a start point and an end point),
compute the point of intersection, if any.
*/

#include <iostream>
#include <climits>

using namespace std;

struct point{
	int x,y;
	point(int a,int b){
		x=a;y=b;
	};
};

struct line{
	point* p1;
	point* p2;
	float m,c;

	line(point* x1,point* x2){
		if(x1->x != x2->x)
			m = ((x1->y - x2->y)/(x1->x-x2->x));
		else
			m = INT_MAX;
		if(m == INT_MAX)
			c = INT_MAX;
		else
			c = x1->y - (x1->x*m);
	};
};

point* get_intersection_point(point* x1,point* x2,point* y1,point *y2){

	point *intersect_pt = new point(0,0);
	line *l1 = new line(x1,x2);
	line *l2 = new line(y1,y2);

	if(l1->m == l2->m && l1->c == l2->c){
		cout << "Both lines are same." << endl;
		return intersect_pt;
	}

	if(l1->m==l2->m && l1->c != l2->c ){
		cout << "Both line can not intersect." << endl;
		return intersect_pt;
	}

	intersect_pt->x = (l1->c-l2->c)/(l2->m-l1->m);
	intersect_pt->y = (l1->m*intersect_pt->x) + (l1->c);

	return intersect_pt;

}

int main(){

	point p1(1,1),p2(2,2);
	point p3(2,0),p4(0,2);
	point* ip;

	ip = get_intersection_point(&p1,&p2,&p3,&p4);

	cout << ip->x << ' ' << ip->y << endl;


	return 0;
}