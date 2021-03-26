#pragma once
class Outrun
{
public:
	Outrun();
	virtual ~Outrun();

	int playgame();

private:
	int width;
	int height;
	int roadW;
	int segL;
	float camD;
};

