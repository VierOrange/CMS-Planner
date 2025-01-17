#include <gtest/gtest.h>
#include <cmsp/item/item.h>

TEST(ItemTest, TestConstructor) {
		std::string n{"D"};
		Item itemA("A");
		EXPECT_EQ(itemA.getName(), "A");
		EXPECT_EQ(itemA.getID(), 0);
		Item itemB("B");
		EXPECT_EQ(itemB.getID(), 1);
		itemA.~Item();

		Item itemC("C");
		EXPECT_EQ(itemC.getName(), "C");
		EXPECT_EQ(itemC.getID(), 0);
		itemC.setName(n);
		EXPECT_EQ(itemC.getName(), n);

		
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
