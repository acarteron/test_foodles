#include "sentence.hh"

#include <CppUTest/TestHarness.h>

TEST_GROUP(TestFoodles)
{
   
};

TEST(TestFoodles, CompTest1)
{ 
  std::pair<std::string, unsigned int> a,b;
  a = std::make_pair("test0", 1);
  b = std::make_pair("test1", 2);
  bool x = cmp(a, b);
  CHECK_EQUAL(false, x);
}

TEST(TestFoodles, CompTest2)
{ 
  std::pair<std::string, unsigned int> a,b;
  a = std::make_pair("test0", 1);
  b = std::make_pair("test1", 2);
  bool x = cmp(b, a);
  CHECK_EQUAL(true, x);
}

TEST(TestFoodles, CompTest3)
{ 
  std::pair<std::string, unsigned int> a,b;
  a = std::make_pair("a", 2);
  b = std::make_pair("b", 2);
  bool x = cmp(b, a);
  CHECK_EQUAL(false, x);
}

TEST(TestFoodles, CompTest4)
{ 
  std::pair<std::string, unsigned int> a,b;
  a = std::make_pair("a", 2);
  b = std::make_pair("b", 2);
  bool x = cmp(a, b);
  CHECK_EQUAL(true, x);
}