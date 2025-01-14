#include <gtest/gtest.h>
#include <cmsp/item/item.h>

TEST(ItemTest, TestConstructor) {
		std::string testName{"testObj"};
		Item item(testName);
		EXPECT_EQ(item.getName(), testName);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
