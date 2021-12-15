#include <unity.h>

void test_basic_pass(void)
{
	TEST_ASSERT_EQUAL(5, 5);
}

void test_basic_fail(void)
{
	TEST_ASSERT_EQUAL(6, 9);
}
