#pragma once
#include "GoiDV.h"
class Basic:public GoiDV
{
private:
	int solopDK;
	bool dvPT;
public:
	Basic();
	void Nhap();
	void Xuat();
	int phi1Thang();
};

