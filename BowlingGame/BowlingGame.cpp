class BowlingGame
{
public:
	BowlingGame();
	~BowlingGame();
	void roll(int point)
	{
		totalScore = point;
	}
	int score(void)
	{
		return totalScore;
	}
private:
	int totalScore{};
};

BowlingGame::BowlingGame()
{
}

BowlingGame::~BowlingGame()
{
}