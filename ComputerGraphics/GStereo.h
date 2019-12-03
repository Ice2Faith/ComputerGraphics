#ifndef _GSTEREO_H_
#define _GSTEREO_H_
#include"GData.h"
class GStereo
{
public:
	//正四面体
    static GD3DataGroup* CreateTetrahedron(double a=100);
	//正六面体
    static GD3DataGroup* CreateHexahedron(double a=100);
	//正八面体
    static GD3DataGroup* CreateOctahedron(double a=100);
	//正十二面体
	static GD3DataGroup* CreateDodecahedron(double a=100);
	//正二十面体
    static GD3DataGroup* CreateIcosahedron(double a=100);
	//球体
    static GD3DataGroup* CreateBall(double r=300,int aAngleCount=300,int bAngleCount=300);
	//圆柱体
    static GD3DataGroup* CreateCylinder(double r=150,double h=200,int rCount=20,int hCount=300,int rAngleCount=300);
	//圆锥体
    static GD3DataGroup* CreateCone(double h=400,double r=200,int hCount=200,int rCount=200,int rAngleCount=300);
	//环体
    static GD3DataGroup* CreateTorus(double r1=200,double r2=50,int aAngleCount=200,int bAngleCount=100);
};
#endif // _GSTEREO_H_
