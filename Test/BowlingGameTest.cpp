#include "pch.h"
#include "../BowlingGame/BowlingGame.cpp"

class BowlingGameTest : public testing::Test
{
protected:
	BowlingGame game{};
	void allSamePointRoll(int point)
	{
		for (int i = 0; i < 20; i++)
		{
			game.roll(point);
		}
	}
};

TEST_F(BowlingGameTest, AllZeroPointGame) {
	allSamePointRoll(0);
	EXPECT_EQ(0, game.score());
}

TEST_F(BowlingGameTest, AllOnePointGame) {
	allSamePointRoll(1);
	EXPECT_EQ(20, game.score());
}

