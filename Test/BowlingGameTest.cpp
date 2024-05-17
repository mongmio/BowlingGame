#include "pch.h"
#include "../BowlingGame/BowlingGame.cpp"

class BowlingGameTest : public testing::Test
{
protected:
	BowlingGame game{};
	void rollMultipleSamePoint(int point, int times)
	{
		for (int i = 0; i < times; i++)
		{
			game.roll(point);
		}
	}
};

TEST_F(BowlingGameTest, AllZeroPointGame) {
	rollMultipleSamePoint(0, 20);
	EXPECT_EQ(0, game.score());
}

TEST_F(BowlingGameTest, AllOnePointGame) {
	rollMultipleSamePoint(1, 20);
	EXPECT_EQ(20, game.score());
}

TEST_F(BowlingGameTest, RollFivePoint3Times) {
	rollMultipleSamePoint(5, 3);
	EXPECT_EQ(20, game.score());
}

TEST_F(BowlingGameTest, RollFivePoint5Times) {
	rollMultipleSamePoint(5, 5);
	EXPECT_EQ(35, game.score());
}

TEST_F(BowlingGameTest, RollFivePoint7Times) {
	rollMultipleSamePoint(5, 7);
	EXPECT_EQ(50, game.score());
}

TEST_F(BowlingGameTest, RollTenPoint2Times) {
	rollMultipleSamePoint(10, 2);
	EXPECT_EQ(30, game.score());
}

TEST_F(BowlingGameTest, RollTenPoint3Times) {
	rollMultipleSamePoint(10, 3);
	EXPECT_EQ(50, game.score());
}

TEST_F(BowlingGameTest, SpareAndStrike) {
	game.roll(7);
	game.roll(3);
	game.roll(10);
	game.roll(7);
	game.roll(3);
	game.roll(10);
	EXPECT_EQ(67, game.score());
}