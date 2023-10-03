#include <iostream>
#include <vector>

/*
  * an attempt to hold something in itself
  * would there be one instance of a
  * struct at a time?
*/

struct Rect
{
    int x{0};
    int y{0};
    int w{0};
    int h{0};
};

struct BossRect : Rect
{
    std::vector<BossRect> br{};
};

int main(int argc, char *argv[])
{
	BossRect boss{};
	boss.x=0; boss.y=99;boss.w=100;boss.h=200;
	
	boss.br.push_back(boss);
	
	boss.x=1;boss.y=100;boss.w=101;boss.h=201;
	
	std::cout << boss.x << ","
	                << boss.y << ","
	                << boss.w << ","
	                << boss.h;
	                
	std::cout << std::endl;
	
	std::cout << boss.br[0].x << ","
	                << boss.br[0].y << ","
	                << boss.br[0].w << ","
	                << boss.br[0].h;
}