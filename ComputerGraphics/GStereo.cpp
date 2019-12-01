#include"StdAfx.h"
#include"Gstereo.h"
GD3DataGroup* GStereo::CreateTetrahedron(double a)
{
	//������
	GD3DataGroup* data=new GD3DataGroup();
	long pointc=4,tranglec=4;
	data->allocMemory(pointc,tranglec);
	data->pointAt(0).x = a, data->pointAt(0).x = a, data->pointAt(0).z = a;
	data->pointAt(1).x = a, data->pointAt(1).x = -a, data->pointAt(1).z = -a;
	data->pointAt(2).x = -a, data->pointAt(2).x = -a, data->pointAt(2).z = a;
	data->pointAt(3).x = -a, data->pointAt(3).x = a, data->pointAt(3).z = -a;

	data->trangleAt(0).p1 = 1, data->trangleAt(0).p2 = 2, data->trangleAt(0).p3 = 3;
	data->trangleAt(1).p1= 0, data->trangleAt(1).p2= 3, data->trangleAt(1).p3 = 2;
	data->trangleAt(2).p1= 0, data->trangleAt(2).p2 = 1, data->trangleAt(2).p3 = 3;
	data->trangleAt(3).p1 = 0, data->trangleAt(3).p2 = 2, data->trangleAt(3).p3 = 1;
	return data;
}
GD3DataGroup* GStereo::CreateHexahedron(double a)
{
	//������
	GD3DataGroup* data=new GD3DataGroup();
	long pointc=8,tranglec=12;
	data->allocMemory(pointc,tranglec);

	data->pointAt(0).x = a, data->pointAt(0).y = -a, data->pointAt(0).z = -a;
	data->pointAt(1).x = a, data->pointAt(1).y = a, data->pointAt(1).z = -a;
	data->pointAt(2).x = -a, data->pointAt(2).y = a, data->pointAt(2).z = -a;
	data->pointAt(3).x = -a, data->pointAt(3).y = -a, data->pointAt(3).z = -a;
	data->pointAt(4).x = a, data->pointAt(4).y = -a, data->pointAt(4).z = a;
	data->pointAt(5).x = a, data->pointAt(5).y = a, data->pointAt(5).z = a;
	data->pointAt(6).x = -a, data->pointAt(6).y = a, data->pointAt(6).z = a;
	data->pointAt(7).x = -a, data->pointAt(7).y = -a, data->pointAt(7).z = a;


	data->trangleAt(0).p1 = 0, data->trangleAt(0).p2 = 1, data->trangleAt(0).p3 = 2;
	data->trangleAt(1).p1 = 0, data->trangleAt(1).p2 = 2, data->trangleAt(1).p3 = 3;

	data->trangleAt(2).p1 = 0, data->trangleAt(2).p2 = 1, data->trangleAt(2).p3 = 5;
	data->trangleAt(3).p1 = 0, data->trangleAt(3).p2 = 5, data->trangleAt(3).p3 = 4;

	data->trangleAt(4).p1 = 0, data->trangleAt(4).p2 = 3, data->trangleAt(4).p3 = 7;
    data->trangleAt(5).p1 = 0, data->trangleAt(5).p2 = 7, data->trangleAt(5).p3 = 4;


	data->trangleAt(6).p1 = 6, data->trangleAt(6).p2 = 5, data->trangleAt(6).p3 = 1;
	data->trangleAt(7).p1 = 6, data->trangleAt(7).p2 = 1, data->trangleAt(7).p3 = 2;

	data->trangleAt(8).p1 = 6, data->trangleAt(8).p2 = 7, data->trangleAt(8).p3 = 4;
    data->trangleAt(9).p1 = 6, data->trangleAt(9).p2 = 4, data->trangleAt(9).p3 = 5;

	data->trangleAt(10).p1 = 6, data->trangleAt(10).p2 = 2, data->trangleAt(10).p3 = 3;
	data->trangleAt(11).p1 = 6, data->trangleAt(11).p2 = 3, data->trangleAt(11).p3 = 7;
    return data;
}
GD3DataGroup* GStereo::CreateOctahedron(double r)
{
	//������
	GD3DataGroup* data=new GD3DataGroup();
	long pointc= 6,tranglec=8;
	data->allocMemory(pointc,tranglec);

	data->pointAt(0).x = 0, data->pointAt(0).y = r, data->pointAt(0).z = 0;
	data->pointAt(1).x = 0, data->pointAt(1).y = -r, data->pointAt(1).z = 0;
	data->pointAt(2).x = r, data->pointAt(2).y = 0, data->pointAt(2).z = 0;
	data->pointAt(3).x = 0, data->pointAt(3).y = 0, data->pointAt(3).z = -r;
	data->pointAt(4).x = -r, data->pointAt(4).y = 0, data->pointAt(4).z = 0;
	data->pointAt(5).x = 0, data->pointAt(5).y = 0, data->pointAt(5).z = r;

	data->trangleAt(0).p1 = 0, data->trangleAt(0).p2 = 4, data->trangleAt(0).p3 = 5;
	data->trangleAt(1).p1 = 0, data->trangleAt(1).p2 = 5, data->trangleAt(1).p3 = 2;
	data->trangleAt(2).p1 = 0, data->trangleAt(2).p2 = 2, data->trangleAt(2).p3 = 3;
	data->trangleAt(3).p1 = 0, data->trangleAt(3).p2 = 3, data->trangleAt(3).p3 = 4;
	data->trangleAt(4).p1 = 1, data->trangleAt(4).p2 = 5, data->trangleAt(4).p3 = 4;
	data->trangleAt(5).p1 = 1, data->trangleAt(5).p2 = 2, data->trangleAt(5).p3 = 5;
	data->trangleAt(6).p1 = 4, data->trangleAt(6).p2 = 3, data->trangleAt(6).p3 = 2;
	data->trangleAt(7).p1 = 1, data->trangleAt(7).p2 = 4, data->trangleAt(7).p3 = 3;
	return data;
}
GD3DataGroup* GStereo::CreateDodecahedron(double a)
{
	//ʮ������
	GD3DataGroup* data = new GD3DataGroup();
	long pointc = 20, tranglec = 36;
	data->allocMemory(pointc, tranglec);
	int i = 0;
	double b = a*0.61828;
	data->pointAt(0).x = a, data->pointAt(0).y = a, data->pointAt(0).z = a;
	data->pointAt(1).x = a + b, data->pointAt(1).y = 0, data->pointAt(1).z = b;
	data->pointAt(2).x = a, data->pointAt(2).y = -a, data->pointAt(2).z = a;
	data->pointAt(3).x = 0, data->pointAt(3).y = -b, data->pointAt(3).z = a + b;
	data->pointAt(4).x = 0, data->pointAt(4).y = b, data->pointAt(4).z = a + b;
	data->pointAt(5).x = a + b, data->pointAt(5).y = 0, data->pointAt(5).z = -b;
	data->pointAt(6).x = a, data->pointAt(6).y = a, data->pointAt(6).z = -a;
	data->pointAt(7).x = b, data->pointAt(7).y = a + b, data->pointAt(7).z = 0;
	data->pointAt(8).x = -b, data->pointAt(8).y = a + b, data->pointAt(8).z = 0;
	data->pointAt(9).x = -a, data->pointAt(9).y = a, data->pointAt(9).z = -a;
	data->pointAt(10).x = 0, data->pointAt(10).y = b, data->pointAt(10).z = -a - b;
	data->pointAt(11).x = a, data->pointAt(11).y = -a, data->pointAt(11).z = -a;
	data->pointAt(12).x = b, data->pointAt(12).y = -a - b, data->pointAt(12).z = 0;
	data->pointAt(13).x = -b, data->pointAt(13).y = -a - b, data->pointAt(13).z = 0;
	data->pointAt(14).x = -a - b, data->pointAt(14).y = 0, data->pointAt(14).z = b;
	data->pointAt(15).x = -a, data->pointAt(15).y = a, data->pointAt(15).z = a;
	data->pointAt(16).x = -a, data->pointAt(16).y = -a, data->pointAt(16).z = -a;
	data->pointAt(17).x = 0, data->pointAt(17).y = -b, data->pointAt(17).z = -a - b;
	data->pointAt(18).x = -a, data->pointAt(18).y = -a, data->pointAt(18).z = a;
	data->pointAt(19).x = -a - b, data->pointAt(19).y = 0, data->pointAt(19).z = -b;

	data->trangleAt(0).p1 = 0, data->trangleAt(0).p2 = 7, data->trangleAt(0).p3 = 8;
	data->trangleAt(1).p1 = 0, data->trangleAt(1).p2 = 8, data->trangleAt(1).p3 = 15;
	data->trangleAt(2).p1 = 0, data->trangleAt(2).p2 = 15, data->trangleAt(2).p3 = 4;
	data->trangleAt(3).p1 = 6, data->trangleAt(3).p2 = 10, data->trangleAt(3).p3 = 9;
	data->trangleAt(4).p1 = 6, data->trangleAt(4).p2 = 9, data->trangleAt(4).p3 = 8;
	data->trangleAt(5).p1 = 6, data->trangleAt(5).p2 = 8, data->trangleAt(5).p3 = 7;
	data->trangleAt(6).p1 = 1, data->trangleAt(6).p2 = 5, data->trangleAt(6).p3 = 6;
	data->trangleAt(7).p1 = 1, data->trangleAt(7).p2 = 6, data->trangleAt(7).p3 = 7;
	data->trangleAt(8).p1 = 1, data->trangleAt(8).p2 = 7, data->trangleAt(8).p3 = 0;
	data->trangleAt(9).p1 = 1, data->trangleAt(9).p2 = 2, data->trangleAt(9).p3 = 12;
	data->trangleAt(10).p1 = 1, data->trangleAt(10).p2 = 12, data->trangleAt(10).p3 = 11;
	data->trangleAt(11).p1 = 1, data->trangleAt(11).p2 = 11, data->trangleAt(11).p3 = 5;
	data->trangleAt(12).p1 = 11, data->trangleAt(12).p2 = 12, data->trangleAt(12).p3 = 13;
	data->trangleAt(13).p1 = 11, data->trangleAt(13).p2 = 13, data->trangleAt(13).p3 = 16;
	data->trangleAt(14).p1 = 11, data->trangleAt(14).p2 = 16, data->trangleAt(14).p3 = 17;
	data->trangleAt(15).p1 = 2, data->trangleAt(15).p2 = 3, data->trangleAt(15).p3 = 18;
	data->trangleAt(16).p1 = 2, data->trangleAt(16).p2 = 18, data->trangleAt(16).p3 = 13;
	data->trangleAt(17).p1 = 2, data->trangleAt(17).p2 = 13, data->trangleAt(17).p3 = 12;
	data->trangleAt(18).p1 = 0, data->trangleAt(18).p2 = 4, data->trangleAt(18).p3 = 3;
	data->trangleAt(19).p1 = 0, data->trangleAt(19).p2 = 3, data->trangleAt(19).p3 = 2;
	data->trangleAt(20).p1 = 0, data->trangleAt(20).p2 = 2, data->trangleAt(20).p3 = 1;
	data->trangleAt(21).p1 = 3, data->trangleAt(21).p2 = 4, data->trangleAt(21).p3 = 15;
	data->trangleAt(22).p1 = 3, data->trangleAt(22).p2 = 15, data->trangleAt(22).p3 = 14;
	data->trangleAt(23).p1 = 3, data->trangleAt(23).p2 = 14, data->trangleAt(23).p3 = 18;
	data->trangleAt(24).p1 = 5, data->trangleAt(24).p2 = 11, data->trangleAt(24).p3 = 17;
	data->trangleAt(25).p1 = 5, data->trangleAt(25).p2 = 17, data->trangleAt(25).p3 = 10;
	data->trangleAt(26).p1 = 5, data->trangleAt(26).p2 = 10, data->trangleAt(26).p3 = 6;
	data->trangleAt(27).p1 = 9, data->trangleAt(27).p2 = 10, data->trangleAt(27).p3 = 17;
	data->trangleAt(28).p1 = 9, data->trangleAt(28).p2 = 17, data->trangleAt(28).p3 = 16;
	data->trangleAt(29).p1 = 9, data->trangleAt(29).p2 = 16, data->trangleAt(29).p3 = 19;
	data->trangleAt(30).p1 = 8, data->trangleAt(30).p2 = 9, data->trangleAt(30).p3 = 19;
	data->trangleAt(31).p1 = 8, data->trangleAt(31).p2 = 19, data->trangleAt(31).p3 = 14;
	data->trangleAt(32).p1 = 8, data->trangleAt(32).p2 = 14, data->trangleAt(32).p3 = 15;
	data->trangleAt(33).p1 = 13, data->trangleAt(33).p2 = 18, data->trangleAt(33).p3 = 14;
	data->trangleAt(34).p1 = 13, data->trangleAt(34).p2 = 14, data->trangleAt(34).p3 = 19;
	data->trangleAt(35).p1 = 13, data->trangleAt(35).p2 = 19, data->trangleAt(35).p3 = 16;
	return data;
}
GD3DataGroup* GStereo::CreateIcosahedron(double a)
{
	//��ʮ����
	GD3DataGroup* data=new GD3DataGroup();
	long pointc= 12,tranglec=20;
	data->allocMemory(pointc,tranglec);

	double b = a*0.61828;
    data->pointAt(0).x = 0, data->pointAt(0).y = a, data->pointAt(0).z = b;
	data->pointAt(1).x = 0, data->pointAt(1).y = b, data->pointAt(1).z = -b;
	data->pointAt(2).x = a, data->pointAt(2).y = b, data->pointAt(2).z = 0;
	data->pointAt(3).x = a, data->pointAt(3).y = -b, data->pointAt(3).z = 0;
	data->pointAt(4).x = 0, data->pointAt(4).y = -a, data->pointAt(4).z = -b;
	data->pointAt(5).x = 0, data->pointAt(5).y = -a, data->pointAt(5).z = b;
	data->pointAt(6).x = b, data->pointAt(6).y = 0, data->pointAt(6).z = a;
	data->pointAt(7).x = -b, data->pointAt(7).y = 0, data->pointAt(7).z = a;
	data->pointAt(8).x = b, data->pointAt(8).y = 0, data->pointAt(8).z = -a;
	data->pointAt(9).x = -b, data->pointAt(9).y = 0, data->pointAt(9).z = -a;
	data->pointAt(10).x = -a, data->pointAt(10).y = b, data->pointAt(10).z = 0;
	data->pointAt(11).x = -a, data->pointAt(11).y = -b, data->pointAt(11).z = 0;

	data->trangleAt(0).p1 = 0, data->trangleAt(0).p2 = 6, data->trangleAt(0).p3 = 2;
	data->trangleAt(1).p1 = 2, data->trangleAt(1).p2 = 6, data->trangleAt(1).p3 = 3;
	data->trangleAt(2).p1 = 3, data->trangleAt(2).p2 = 6, data->trangleAt(2).p3 = 5;
	data->trangleAt(3).p1 = 5, data->trangleAt(3).p2 = 6, data->trangleAt(3).p3 = 7;
	data->trangleAt(4).p1 = 0, data->trangleAt(4).p2 = 7, data->trangleAt(4).p3 = 6;
	data->trangleAt(5).p1 = 2, data->trangleAt(5).p2 = 3, data->trangleAt(5).p3 = 8;
	data->trangleAt(6).p1 = 1, data->trangleAt(6).p2 = 2, data->trangleAt(6).p3 = 8;
	data->trangleAt(7).p1 = 0, data->trangleAt(7).p2 = 2, data->trangleAt(7).p3 = 1;

	data->trangleAt(8).p1 = 0, data->trangleAt(8).p2 = 1, data->trangleAt(8).p3 = 10;
	data->trangleAt(9).p1 = 1, data->trangleAt(9).p2 = 9, data->trangleAt(9).p3 = 10;
	data->trangleAt(10).p1 = 1, data->trangleAt(10).p2 = 8, data->trangleAt(10).p3 = 9;
	data->trangleAt(11).p1 = 3, data->trangleAt(11).p2 = 4, data->trangleAt(11).p3 = 8;
	data->trangleAt(12).p1 = 3, data->trangleAt(12).p2 = 5, data->trangleAt(12).p3 = 4;
	data->trangleAt(13).p1 = 4, data->trangleAt(13).p2 = 5, data->trangleAt(13).p3 = 11;
	data->trangleAt(14).p1 = 7, data->trangleAt(14).p2 = 10, data->trangleAt(14).p3 = 11;
	data->trangleAt(15).p1 = 0, data->trangleAt(15).p2 = 10, data->trangleAt(15).p3 = 7;

	data->trangleAt(16).p1 = 4, data->trangleAt(16).p2 = 11, data->trangleAt(16).p3 = 9;
	data->trangleAt(17).p1 = 4, data->trangleAt(17).p2 = 9, data->trangleAt(17).p3 = 8;
	data->trangleAt(18).p1 = 5, data->trangleAt(18).p2 = 7, data->trangleAt(18).p3 = 11;
	data->trangleAt(19).p1 = 9, data->trangleAt(19).p2 = 11, data->trangleAt(19).p3 = 10;
	return data;
}
GD3DataGroup* GStereo::CreateBall(double r,int aAngleCount,int bAngleCount)
{
	//���� ��������
	GD3DataGroup* data=new GD3DataGroup();
	long pointc= aAngleCount*bAngleCount,tranglec=0;
	data->allocMemory(pointc,tranglec);

	double PI = GTools::MATH_PI;
	int i = 0;
	for (i = 0; i < bAngleCount; i++)
	{
		for (int j = 0; j < aAngleCount; j++)
		{
			data->pointAt(i*aAngleCount + j).x = r*sin(2 * PI / aAngleCount* j)*sin(PI / bAngleCount* i);
			data->pointAt(i*aAngleCount + j).z = r*cos(2 * PI / aAngleCount*j);
			data->pointAt(i*aAngleCount + j).y = r*sin(2 * PI / aAngleCount* j)*cos(PI / bAngleCount* i);
		}
	}
	return data;
}
GD3DataGroup* GStereo::CreateCylinder(double r,double h,int rCount,int hCount,int rAngleCount)
{
	//Բ���� ��������
	GD3DataGroup* data=new GD3DataGroup();
	long pointc= hCount*rAngleCount+rCount*rAngleCount*2,tranglec=0;
	data->allocMemory(pointc,tranglec);
	double PI = GTools::MATH_PI;
	int i = 0;
	//��������
	for (i = 0; i < hCount; i++)
	{
		for (int j = 0; j < rAngleCount; j++)
		{
			data->pointAt(i*rAngleCount + j).x = r*cos(2 * PI / rAngleCount* j);
			data->pointAt(i*rAngleCount + j).y = r*sin(2 * PI / rAngleCount*j);
			data->pointAt(i*rAngleCount + j).z = h / hCount*i;
		}
	}
	//�µ���
	for (i = 0; i < rCount; i++)
	{
		for (int j = 0; j < rAngleCount; j++)
		{
			data->pointAt(hCount*rAngleCount + i*rAngleCount + j).x = (r / rCount*i)*cos(2 * PI / rAngleCount* j);
			data->pointAt(hCount*rAngleCount + i*rAngleCount + j).y = (r / rCount*i)*sin(2 * PI / rAngleCount*j);
			data->pointAt(hCount*rAngleCount + i*rAngleCount + j).z = 0;
		}
	}
	//�ϵ���
	for (i = 0; i < rCount; i++)
	{
		for (int j = 0; j < rAngleCount; j++)
		{
			data->pointAt(hCount*rAngleCount + rCount*rAngleCount + i*rAngleCount + j).x = (r / rCount*i)*cos(2 * PI / rAngleCount* j);
			data->pointAt(hCount*rAngleCount + rCount*rAngleCount + i*rAngleCount + j).y = (r / rCount*i)*sin(2 * PI / rAngleCount*j);
			data->pointAt(hCount*rAngleCount + rCount*rAngleCount + i*rAngleCount + j).z = h;
		}
	}
    return data;
}
GD3DataGroup* GStereo::CreateCone(double h,double r,int hCount,int rCount,int rAngleCount)
{
	//Բ׶�� ��������
	GD3DataGroup* data=new GD3DataGroup();
	long pointc= rAngleCount*hCount + rAngleCount*rCount,tranglec=0;
	data->allocMemory(pointc,tranglec);
	double PI = GTools::MATH_PI;
	int i = 0;
	//��������
	for (i = 0; i < hCount; i++)
	{
		for (int j = 0; j < rAngleCount; j++)
		{
			data->pointAt(i*rAngleCount + j).x = (1.0 - h / hCount*i / h)*r*cos(2 * PI / rAngleCount* j);
			data->pointAt(i*rAngleCount + j).y = (1.0 - h / hCount*i / h)*r*sin(2 * PI / rAngleCount* j);
			data->pointAt(i*rAngleCount + j).z = h / hCount*i;
		}
	}
	//�µ���
	for (i = 0; i < rCount; i++)
	{
		for (int j = 0; j < rAngleCount; j++)
		{
			data->pointAt(hCount*rAngleCount + i*rAngleCount + j).x= (r / rCount*i)*cos(2 * PI / rAngleCount* j);
			data->pointAt(hCount*rAngleCount + i*rAngleCount + j).y = (r / rCount*i)*sin(2 * PI / rAngleCount*j);
			data->pointAt(hCount*rAngleCount + i*rAngleCount + j).z = 0;
		}
	}
	return data;
}
GD3DataGroup* GStereo::CreateTorus(double r1,double r2,int aAngleCount,int bAngleCount)
{
	//Բ��
	GD3DataGroup* data=new GD3DataGroup();
	long pointc= aAngleCount*bAngleCount,tranglec=0;
	data->allocMemory(pointc,tranglec);
	double PI = GTools::MATH_PI;
	int i = 0;
	for (i = 0; i < aAngleCount; i++)
	{
		for (int j = 0; j < bAngleCount; j++)
		{
			data->pointAt(i*bAngleCount + j).x = (r1 + r2*sin(2 * PI / bAngleCount*j))*sin(2 * PI / aAngleCount*i);
			data->pointAt(i*bAngleCount + j).y= (r1 + r2*sin(2 * PI / bAngleCount*j))*cos(2 * PI / aAngleCount*i);
			data->pointAt(i*bAngleCount + j).z = r2*cos(2 * PI / bAngleCount*j);
		}
	}
	return data;
}
