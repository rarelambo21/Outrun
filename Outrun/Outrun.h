#pragma once
class Outrun
{
public:
	Outrun();
	virtual ~Outrun();

	void drawQuad(RenderWindow &w, Color c, int x1, int y1, int w1, int x2, int y2, int w2);

	struct Line {
		float x, y, z; //3d center of line
		float X, Y, W; //screen coord
		float curve, spriteX, clip, scale;
		Sprite sprite;

		Line(){
			spriteX = curve = x = y = z = 0;
		}

		void project(int camX, int camY, int camZ);
		void drawSprite(RenderWindow& app);

	};

	int playgame();

private:
	int width;
	int height;
	int roadW;
	int segL;
	float camD;
};

