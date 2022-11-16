/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} 
		virtual ~TicTacToeBoardTest(){} 
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(PracticeTest, oneTog){
	TicTacToeBoard T;
    ASSERT_EQ(T.toggleTurn(),'O');	
}
TEST(PracticeTest, twoTog){
	TicTacToeBoard T;
	T.toggleTurn();
    ASSERT_EQ(T.toggleTurn(),'X');	
}
TEST(PracticeTest, testoneplace){
	TicTacToeBoard T;
    ASSERT_EQ(T.placePiece(0,0),'X');	
}


