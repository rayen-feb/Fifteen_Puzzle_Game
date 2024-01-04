#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;

int main()
{
    RenderWindow app(VideoMode(256,256), "15-Puzzle!");
	app.setFramerateLimit(60);

	Texture t;
    t.loadFromFile("images/15.png");
