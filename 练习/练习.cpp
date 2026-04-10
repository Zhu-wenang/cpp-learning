//第一章：开始



/*
// 提示用户输入两个数，然后输出它们的和
#include <iostream>

int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2
        << " is " << v1 + v2 << std::endl;
    return 0;
}
 */


/*
// 在标准输出上打印 Hello World
#include <iostream>

int main()
{
    std::cout << "Hello, World" << std::endl;
    return 0;
}
 */


/*
// 提示用户输入两个数，然后输出它们的积
#include <iostream>

int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The product of " << v1 << " and " << v2
        << " is " << v1 * v2 << std::endl;
    return 0;
}
 */


/*
#include <iostream>

int main()
{
    int sum = 0, val = 50;
    while (val <= 100) {
        sum += val;
        val++;
    }
    std::cout << "The sum of 50 to 100 inclusive is "
        << sum << std::endl;
    return 0;
}
*/


/*
#include <iostream>

int main()
{
    int a, b, c ;
    std::cout << "请输入两个整数：";
    std::cin >> a >> b;
    c = a;
    while (a <= c and c <= b) {
        std::cout << c << std::endl;
        c++;
    }
    return 0;
}
*/


/*
// 提示用户输入两个整数， 然后打印出这两个整数之间的所有整数
#include <iostream>

int main()
{
    int a, b;
    std::cout << "请输入两个整数: " << std::endl;
    std::cin >> a >> b;
    if (a >= b)
        while (a >= b) {
            std::cout << a << " ";
            a--;
        }
    else
        while (a <= b) {
            std::cout << a << " ";
            a++;
        }
    return 0;
}
*/



/*
从cin读取一组数，输出其和
#include <iostream>

int main()
{
    int value = 0;
    int sum = 0;
    while (std::cin >> value)
        sum += value;
    std::cout << sum;
    return 0;
}
*/



/*
统计在输入中，每个值连续出现了多少次
#include <iostream>

int main()
{
    int currVal = 0, val = 0;
    if (std::cin >> currVal)
    {
        int cnt = 1;
        while (std::cin >> val)
        {
            if (val == currVal)
                ++cnt;
            else
            {
                std::cout << currVal << "出现的次数是" << cnt << std::endl;
                currVal = val;
                cnt = 1;
            }
        }
        std::cout << currVal << "出现的次数是" << cnt << std::endl;
    }
    return 0;
}
*/



/*
#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item book;
    std::cin >> book;
    std::cout << book << std::endl;
    return 0;
}
*/



/*
#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item trans1, trans2;
    int num = 1;
    std::cout << "请输入若干销售记录："
              << std::endl;
    if (std::cin >> trans1)
    {
        while (std::cin >> trans2)
        {
            if (trans1.isbn() == trans2.isbn())
                num++;
            else
            {
                std::cout << trans1.isbn() << "共有"
                    << num << "条销售记录" << std::endl;
                trans1 = trans2;
                num = 1;
            }
        }
        std::cout << trans1.isbn() << "共有"
            << num << "条销售记录" << std::endl;
    }
    else
    {
        std::cout << "没有数据" << std::endl;
        return -1;
    }
    return 0;
}
*/



/*
//书店程序
#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item total;
    if (std::cin >> total)
    {
        Sales_item trans;
        while (std::cin >> trans)
        {
            if (total.isbn() == trans.isbn())
                total += trans;
            else
            {
                std::cout << total << std::endl;
                total = trans;
            }
        }
        std::cout << total << std::endl;
    }
    else
    {
        std::cerr << "No date?!" << std::endl;
        return -1;
    }
    return 0;
}
*/



//第二章：变量和基本类型



/*

*/
