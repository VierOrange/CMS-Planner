#include <gtest/gtest.h>
#include <cmsp/manufacturer/manufacturer.h>

class Manufacturer;

TEST(ItemTest, TestConstructor) {
		Manufacturer manA("Furnace");
		EXPECT_EQ(manA.getName(), "Furnace");
		EXPECT_EQ(manA.getID(), 0);
		EXPECT_EQ(manA.getType(), "Manufacturer");

		Manufacturer manB("B");
		EXPECT_EQ(manB.getID(), 1);
		manA.~Manufacturer();

		Manufacturer manC("C");
		EXPECT_EQ(manC.getName(), "C");
		EXPECT_EQ(manC.getID(), 0);

		
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
