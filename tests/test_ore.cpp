#include <gtest/gtest.h>
#include <cmsp/ore/ore.h>

class Ore;

TEST(OreTest, TestConstructor) {
		Ore oreA("Copper Ore");
		EXPECT_EQ(oreA.getName(), "Copper Ore");
		EXPECT_EQ(oreA.getID(), 0);
		EXPECT_EQ(oreA.getType(),"Ore");

		oreA.setRate(10,10);
		EXPECT_EQ(oreA.getRate(10),10);
		EXPECT_EQ(oreA.getRate(1),0);

		Ore oreB("B");
		EXPECT_EQ(oreB.getID(), 1);
		oreA.~Ore();

		Ore oreC("C");
		EXPECT_EQ(oreC.getName(), "C");
		EXPECT_EQ(oreC.getID(), 0);

		
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
