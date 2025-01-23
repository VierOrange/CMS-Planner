#include <gtest/gtest.h>
#include <cmsp/manufacturer/manufacturer.h>

class Manufacturer;

TEST(ItemTest, TestConstructor) {
		std::string n{"D"};
		Manufacturer manA("A");
		EXPECT_EQ(manA.getName(), "A");
		EXPECT_EQ(manA.getID(), 0);
		Manufacturer manB("B");
		EXPECT_EQ(manB.getID(), 1);
		manA.~Manufacturer();

		Manufacturer manC("C");
		EXPECT_EQ(manC.getName(), "C");
		EXPECT_EQ(manC.getID(), 0);
		manC.setName(n);
		EXPECT_EQ(manC.getName(), n);

		
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
