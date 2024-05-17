#include <vector>

using namespace std;

class BowlingGame
{
public:
	BowlingGame();
	~BowlingGame();
	void roll(int point)
	{
		points.push_back(point);
		if (point == 10)
		{
			points.push_back(0);
		}

	}
	int score(void)
	{
		int totalScore{};
		int previos_fist = 0;
		int previos_second = 0;
		bool isFirst = true;
		for (auto point : points)
		{
			totalScore += point;
			if (isFirst == true)
			{
				if (previos_fist + previos_second == 10)
				{
					totalScore += point;
				}
				previos_fist = point;
				isFirst = false;
			}
			else
			{
				if (previos_fist == 10)
				{
					totalScore += point;
				}
				previos_second = point;
				isFirst = true;
			}
		}
		return totalScore;
	}
private:
	vector<int> points{};
};

BowlingGame::BowlingGame()
{
}

BowlingGame::~BowlingGame()
{
}