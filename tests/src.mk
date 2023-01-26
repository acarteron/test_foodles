COMPONENT_NAME=still

SRC_FILES = \
  $(wildcard $(PROJECT_SRC_DIR)/*.cpp) \

TEST_SRC_FILES = \
  $(UNITTEST_SRC_DIR)/test_count.cpp

include $(CPPUTEST_MAKFILE_INFRA)
