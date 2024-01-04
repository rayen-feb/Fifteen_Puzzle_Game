#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;

int main()
{
    RenderWindow app(VideoMode(256,256), "15-Puzzle!");
	app.setFramerateLimit(60);

	Texture t;
    t.loadFromFile("images/15.png");
	int w = 64;
	int grid[6][6] = {0};
	Sprite sprite[20];

    int n=0;
	for (int i=0;i<4;i++)
     for (int j=0;j<4;j++)
      {
        n++;
        sprite[n].setTexture(t);
        sprite[n].setTextureRect( IntRect(i*w,j*w,w,w) );
        grid[i+1][j+1]=n;
      }
