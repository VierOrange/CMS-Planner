#include <gtest/gtest.h>
#include <cmsp/product/product.h>

class Product;
TEST(ProductTest, TestConstructor) {
		std::string n{"D"};
		Product productA("A");
		EXPECT_EQ(productA.getName(), "A");
		EXPECT_EQ(productA.getID(), 0);
		Product productB("B");
		EXPECT_EQ(productB.getID(), 1);
		productA.~Product();

		Product productC("C");
		EXPECT_EQ(productC.getName(), "C");
		EXPECT_EQ(productC.getID(), 0);
		productC.setName(n);
		EXPECT_EQ(productC.getName(), n);

		
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
