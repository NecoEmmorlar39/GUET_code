#include <stdio.h>

int main()
{
    int amount, count = 0;

    // 输入需要换零的钱数
    scanf("%d", &amount);
    // 检查输入的有效性
    if (amount <= 0 || amount > 100 || amount % 10 != 0)
    {
        return 1;
    }

    // 枚举所有可能的组合
    for (int five = 1; five * 5 <= amount - 3; five++)
    { // 至少有1张5元
        for (int two = 1; two * 2 <= amount - 5 * five - 1; two++)
        {                                            // 至少有1张2元
            int one = (amount - 5 * five - 2 * two); // 计算1元的数量
            if (one >= 1)
            { // 至少有1张1元
                printf("5元: %d, 2元: %d, 1元: %d\n", five, two, one);
                count++;
            }
        }
    }
    /*在代码片段 five * 5 <= amount - 3 中，five 是一个变量，表示5元钞票的数量。这段条件语句的作用是确保在分配了至少一张5元钞票之后，剩下的金额还足够分配至少一张2元和一张1元的钞票。*/
    /*在代码片段 two * 2 <= amount - 5 * five - 1 中，two 是一个变量，表示2元钞票的数量。这段条件语句的作用是确保在分配了至少一张5元钞票和之后的2元钞票之后，剩下的金额还足够分配至少一张1元的钞票。*/
    if (count == 0)
    {
        printf("没有符合条件的组合。\n");
    }
    else
    {
        printf("共有%d种组合方式。\n", count);
    }

    return 0;
}