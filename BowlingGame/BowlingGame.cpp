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
		totalScore += point;
		auto numOfPoints = points.size();
		if (numOfPoints < 2) return;

		if (points.at(numOfPoints - 1) == 10)
		{
			totalScore += point;
		}
		if (numOfPoints % 2 == 1)
		{
			if (points.at(numOfPoints - 1) + points.at(numOfPoints - 2) == 10)
			{
				totalScore += point;
			}
		}

	}
	int score(void)
	{
		return totalScore;
	}
private:
	vector<int> points{};
	int totalScore{};
};

BowlingGame::BowlingGame()
{
}

BowlingGame::~BowlingGame()
{
}