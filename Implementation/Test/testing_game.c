#include"unity_internals.h"
#include"unity.h"

void test_quit(void){
    TEST_ASSERT_EQUAL("success",quit());
}

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_quit);
  

  /* Close the Unity Test Framework */
  return UNITY_END();
}