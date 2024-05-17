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
		auto numOfPoints = points.size();
		if (numOfPoints == 3)
		{
			if (points.at(2) + points.at(1) == 10)
			{
				totalScore += point;
			}
		}
		totalScore += point;
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