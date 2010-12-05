#include <SDL.h>
#include <SDL_image.h>
#include <SDL_thread.h>

#include <ctime>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <sstream>
#include <stack>
using namespace std;

#include <SDL/Circle/circle.hpp>
#include <SDL/Common/common.hpp>
#include <SDL/Pixel/pixel.hpp>
#include <SDL/Line/line.hpp>
using namespace sdl;

#include <Polygon/General/general.hpp>
#include <Polygon/Convex/convex.hpp>
using namespace polygon;

#include <Render/Polygon/polygon.hpp>
using namespace render;

#define SCREEN_WIDTH 480
#define SCREEN_HEIGHT 360
#define SCREEN_BITS_PER_PIXEL 32
#define MAX_FPS 30

#define ERROR_DELAY 5000

int main(int argc, char *argv[]) {

	if (argc < 1) {
		return 1;
	}

	Ui16 count_points = 10;
	Ui16 creation_visualization_delay = 50;
	Ui16 point_radius = 3;
	Ui16 segment_width = 2;
	Ui16 check_visualization_delay = 500;

	if (argc != 5) {
		cout << "usage:" << endl;
		cout << "\tpath/to/binary" << endl;
		cout << "\tcount_points                   (default 20)" << endl;
		cout << "\tcreation_visualization_delay   (default 50)" << endl;
		cout << "\tpoint_radius                   (default 3)" << endl;
		cout << "\tsegment_width                  (default 2)" << endl;
		cout << "\tcheck_visualization_delay      (default 500)" << endl;
	} else {
		count_points = (Ui16) atoi(argv[1]);
		creation_visualization_delay = (Ui16) atoi(argv[2]);
		point_radius = (Ui16) atoi(argv[3]);
		segment_width = (Ui16) atoi(argv[4]);
	}

	//первый аргумент всегда представляет собой абсолютный путь к нашему бинарнику.
	string currentBinary(argv[0]);
	string currentDir = currentBinary.substr(0, currentBinary.find_last_of("/") + 1);

	//<инициализация sdl>

	render::Polygon polygonRender(SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_BITS_PER_PIXEL);
	polygonRender.setBackground((currentDir + string("bg.png")).c_str());
	polygonRender.setIcon((currentDir + string("icon.png")).c_str(), "Convex Polygon Render", "Convex Polygon Render");

	//</инициализация sdl>

	//<используемые переменные>

	bool go = true;
	SDL_Event mainEvent;
	SDL_Event* mainEventPointer = &mainEvent;

	Ui32 refreshTime = 1000 / MAX_FPS;

	//цвета
	Ui32 black = polygonRender.getRGBColor(0, 0, 0);
	Ui32 green = polygonRender.getRGBColor(0, 255, 0);
	Ui32 red = polygonRender.getRGBColor(255, 0, 0);

	Ui16 i;

	//создаем вектор точек
	vector<Point> random_points;
	srand(time(NULL));
	i = 0;
	for (i = 0; i < count_points; i++) {
		Point newPoint;
		newPoint.first = 5 + rand() % (SCREEN_WIDTH - 10);
		newPoint.second = 5 + rand() % (SCREEN_HEIGHT - 10);
		random_points.push_back(newPoint);
	}

	/*
	vector<Point> random_points;
	random_points.push_back(Point(68, 46));
	random_points.push_back(Point(48, 44));
	random_points.push_back(Point(52, 35));
	random_points.push_back(Point(48, 53));
	random_points.push_back(Point(59, 46));
	 * */

	//добавим полигон
	polygon::General *poly = new polygon::General(random_points);

	PolygonOptions *polyOpt = new PolygonOptions();
	polyOpt->pointColor = green;
	polyOpt->pointRadius = point_radius;
	polyOpt->segmentColor = black;
	polyOpt->segmentWidth = segment_width;
	polyOpt->drawLines = true;

	polygonRender.add(poly, polyOpt);

	//добавим текущую точку
	Point *redPoint = new Point();

	PointOptions *redPointOpt = new PointOptions();
	redPointOpt->pointColor = red;
	redPointOpt->pointRadius = point_radius;

	polygonRender.add(redPoint, redPointOpt);

	/*
	redPoint->first = 50;
	redPoint->second = 50;
	redPointOpt->pointColor = black;
	polygonRender.reDraw();
	SDL_Delay(check_visualization_delay);
	if (poly->have(*redPoint)) {
		redPointOpt->pointColor = green;
	} else {
		redPointOpt->pointColor = red;
	}
	polygonRender.reDraw();
	SDL_Delay(check_visualization_delay);
	 * */

	//</используемые переменные>

	//<цикл рендеринга>
	//включаем работу алгоритма в стандартный цикл sdl
	//во время работы алгоритма приложение будет отзываться на любые системные события

	i = 0;
	redPointOpt->pointRadius = point_radius;
	go = true;
	while (go) {
		if (SDL_PollEvent(mainEventPointer)) {
			if (mainEventPointer->type == SDL_QUIT) {
				go = false;
			} else if (mainEventPointer->type == SDL_KEYDOWN) {
				switch (mainEventPointer->key.keysym.sym) {
					case SDLK_ESCAPE:
						go = false;
						break;
				}
			} else {
			}
		} else {
			redPoint->first = 5 + rand() % (SCREEN_WIDTH - 10);
			redPoint->second = 5 + rand() % (SCREEN_HEIGHT - 10);
			redPointOpt->pointColor = black;
			polygonRender.reDraw();
			SDL_Delay(check_visualization_delay);
			if (poly->have(*redPoint)) {
				redPointOpt->pointColor = green;
			} else {
				redPointOpt->pointColor = red;
			}
			polygonRender.reDraw();
			SDL_Delay(check_visualization_delay);
			i++;

			if (i > count_points) {
				go = false;
			}
		}
	}
	//</цикл рендеринга>

	//<цикл рендеринга>
	go = true;
	while (go) {
		if (SDL_PollEvent(mainEventPointer)) {
			if (mainEventPointer->type == SDL_QUIT) {
				go = false;
			} else if (mainEventPointer->type == SDL_KEYDOWN) {
				switch (mainEventPointer->key.keysym.sym) {
					case SDLK_ESCAPE:
						go = false;
						break;
				}
			}
		} else {
			SDL_Delay(refreshTime);
		}
	}
	//</цикл рендеринга>

	delete poly;
	delete polyOpt;
	delete redPoint;
	delete redPointOpt;

	return 0;
}