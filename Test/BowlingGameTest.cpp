#include "pch.h"
#include "../BowlingGame/BowlingGame.cpp"

TEST(BowlingGameTest, AllZeroPointGame) {
	BowlingGame game{};
	for (int i = 0; i < 20; i++)
	{
		game.roll(0);
	}
	EXPECT_EQ(0, game.score());
}

TEST(BowlingGameTest, AllOnePointGame) {
	BowlingGame game{};
	for (int i = 0; i < 20; i++)
	{
		game.roll(1);
	}
	EXPECT_EQ(20, game.score());
}

