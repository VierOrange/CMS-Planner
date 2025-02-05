#include <gtest/gtest.h>
#include <cmsp/product/product.h>

class Product;
TEST(ProductTest, TestConstructor) {
		Product productA("Bullet");
		EXPECT_EQ(productA.getName(), "Bullet");
		EXPECT_EQ(productA.getID(), 0);
		EXPECT_EQ(productA.getType(), "Product");

		productA.setRate(11,10);
		EXPECT_EQ(productA.getRate(11), 10);
		EXPECT_EQ(productA.getRate(1),0);

		productA.setRecipe(12,5);
		EXPECT_EQ(productA.getRecipe(12), 5);
		EXPECT_EQ(productA.getRecipe(1), 0);

		Product productB("B");
		EXPECT_EQ(productB.getID(), 1);
		productA.~Product();

		Product productC("C");
		EXPECT_EQ(productC.getName(), "C");
		EXPECT_EQ(productC.getID(), 0);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
