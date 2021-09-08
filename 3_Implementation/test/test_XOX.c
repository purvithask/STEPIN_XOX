#include "unity.h"
#include "XOX.h"

#define PROJECT_NAME    "XOX"


void setUp(){
    

}

void tearDown(){

}
char sq_position[10];
void board(void){
    sq_position[10]= "XXX......" || "OOO......";
    
    TEST_ASSERT_EQUAL(1,checkwin(sq_position));
}

void board1(void){
    sq_position[10]= "...XXX..." || "...OOO...";
    
    TEST_ASSERT_EQUAL(1,checkwin(sq_position));
}

void board2(void){
   sq_position[10]= "......XXX" || "......OOO";
    
    TEST_ASSERT_EQUAL(1,checkwin(sq_position));
}

void board3(void){
    sq_position[10]= "X..X..X.." || "O..O..O..";
    
    TEST_ASSERT_EQUAL(1,checkwin(sq_position));
}

void board4(void){
   sq_position[10]= ".X..X..X." || ".O..O..O.";
    
    TEST_ASSERT_EQUAL(1,checkwin(sq_position));
    
}

void board5(void){
   sq_position[10]= "..X..X..X" || "..O..O..O";
    
    TEST_ASSERT_EQUAL(1,checkwin(sq_position));
}

void board6(void){
   sq_position[10]= "X...X...X" || "O...O...O";
    
    TEST_ASSERT_EQUAL(1,checkwin(sq_position));
}

void board7(void){
   sq_position[10]= "..X.X.X.." || "..O.O.O..";
    
    TEST_ASSERT_EQUAL(1,checkwin(sq_position));
}

void test_Checkdraw()
{
    char sq_position[10]={'0','O','X','O','o','X','O','X','O','X'};
    TEST_ASSERT_EQUAL(0,checkwin(sq_position));
}

int main()
{
///Initiate the Unity Test Framework
UNITY_BEGIN();
RUN_TEST(board);
RUN_TEST(board1);
RUN_TEST(board2);
RUN_TEST(board3);
RUN_TEST(board4);
RUN_TEST(board5);
RUN_TEST(board6);
RUN_TEST(board7);
RUN_TEST(test_Checkdraw);
/// Close the Unity Test Framework
UNITY_END();
return 0;
}
