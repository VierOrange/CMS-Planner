#include <gtest/gtest.h>
#include <cmsp/ore/ore.h>

class Ore;

TEST(OreTest, TestConstructor) {
		std::string n{"D"};
		Ore oreA("A");
		EXPECT_EQ(oreA.getName(), "A");
		EXPECT_EQ(oreA.getID(), 0);
		Ore oreB("B");
		EXPECT_EQ(oreB.getID(), 1);
		oreA.~Ore();

		Ore oreC("C");
		EXPECT_EQ(oreC.getName(), "C");
		EXPECT_EQ(oreC.getID(), 0);
		oreC.setName(n);
		EXPECT_EQ(oreC.getName(), n);

		
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
