#include "pch.h"
#include "../BowlingGame/BowlingGame.cpp"

TEST(BowlingGameTest, ZeroPointGame) {
	BowlingGame game{};
	for (int i = 0; i < 20; i++)
	{
		game.roll(0);
	}
	EXPECT_EQ(0, game.score());
}