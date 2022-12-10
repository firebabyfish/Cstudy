#include <stdio.h>
#include <stdlib.h>

// int main()
// {
//     int a[10] = { 0 };
//     int i = 0;
//     int j = 0;
//     int t = 0;
//     printf("请输入10名同学的成绩:\n");
//     for (i = 0; i < 10; i++)
//     {
//         scanf("%d", &a[i]);
//         if (a[i] < 0 || a[i] > 100)
//             goto k;
//     }
//     printf("经系统检测，你输入的成绩无误\n");
//     for (j = 0; j <= 8; j++)
//     {
//         for (i = 0; i < (9-j); i++)
//         {
//             if (a[i] > a[i+1])
//             {
//                 t = a[i];
//                 a[i] = a[i+1];
//                 a[i+1] = t;
//             }
//         }
//     }
//     for (i = 9; i >= 0; i--)
//         printf("%4d", a[i]);
//     printf("\n");
//  k:
//     printf("输入错误，请重新输入:\n");
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int a[10] = {69, 90, 54, 67, 87, 34, 68, 75, 12, 36}, i;
//     float t, x = 0;
//     for (i = 0; i < 10; i++)
//         x = x + a[i];
//     t= x / 10;
//     printf("平均分=%0.2f\n", t);
//     printf("以下是平均分以下的成绩，请是该成绩的同学来办公室喝茶\n");
//     for (i = 0; i < 10; i++)
//     {
//         if (a[i] < t)
//             printf("%-4d", a[i]);
//     }
//     printf("\n");
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int a[5][5] = {{56,45,32,12,5},{12,32,45,36,78},{34,67,56,47,12},{1,2,3,4,5},{6,7,8,9,10}},i,j;
//     float p = 0;
//     float z = 0;
//     float max = 0;
//     float min = 0;
//     for (i = 0; i < 5; i++)
//     {
//         for (j = 0; j < 5; j++)
//         {
//             z = z + a[i][j];
//             p = z / 5;
//             max = a[i][0];
//             if (a[i][j] > max)
//                 max = a[i][j];
//             min = a[i][0];
//             if (a[i][j] < min)
//                 min = a[i][j];
//         }
//         printf("第%d行:平均值为%.2f,最大的数为%.2f,最小的数为%.2f\n", i+1, p, max, min);
//     }
//     printf("\n");

//     system("pause");
//     return 0;
// }

//P187.7
// #define basic_salary 10
// #define low_tax 45
// #define mid_tax 75

// int main()
// {
//     double time = 0;
//     double tax = 0;
//     double salary = 0;
//     printf("请输入一周的工作小时数：");
//     scanf("%lf", &time);
//     if (time > 40)
//         time  = time + 0.5 * (time - 40);
//     salary = time * basic_salary;
//     if (salary <= 300)
//         tax = 0.15 * salary;
//     else if (salary > 300 && salary <= 450)
//         tax = low_tax + 0.2 * (salary - 300);
//     else 
//         tax = mid_tax + 0.25 * (salary - 450);
//     printf("工资总额：%lf\n税金：%lf\n净工资：%lf\n", salary, tax, salary - tax);

//     system("pause");
//     return 0;
// }

//P187.8
// #define level1_salary 8.75
// #define level2_salary 9.33
// #define level3_salary 10.00
// #define level4_salary 11.20
// #define low_taxrate  0.15
// #define mid_taxrate  0.20
// #define high_taxrate 0.25

// int main()
// {
//     int level = 0;
//     double wage = 0;
//     double time = 0;
//     double tax = 0;
//     double salary = 0;
//     printf("****************************************************************\n");
//     printf("Enter the number corrsponding to the desired pay rate or action:\n");
//     printf("1) $8.75/hr                    2) $9.33/hr                      \n");
//     printf("3) $10.00/hr                   4) $11.20/hr                     \n");
//     printf("5) quit                                                         \n");
//     printf("****************************************************************\n");
//     printf("请输入你的工资等级(1-4):");
//     scanf("%d", &level);
//     while (level != 5)
//     {
//         while (level < 1 || level > 5)
//         {
//             printf("输入错误，请重新输入(1-4):\n");
//             scanf("%d", &level);
//         }
//         if (level == 5)
//             break;
//         switch (level)
//         {
//             case 1:
//             wage = level1_salary;
//             break;
//             case 2:
//             wage = level2_salary;
//             break;
//             case 3:
//             wage = level3_salary;
//             break;
//             case 4:
//             wage = level4_salary;
//             break;
//         }
//         printf("请输入一周的工作小时数：");
//         scanf("%lf", &time);
//         if (time > 40)
//             time  = time + 0.5 * (time - 40);
//         salary = time * wage;
//         if (salary <= 300)
//             tax = 0.15 * salary;
//         else if (salary > 300 && salary <= 450)
//             tax = 300 * low_taxrate + 0.2 * (salary - 300);
//         else 
//             tax = 300 * low_taxrate + 150 * mid_taxrate + 0.25 * (salary - 450);
//         printf("工资总额：%lf\n税金：%lf\n净工资：%lf\n", salary, tax, salary - tax);
//         printf("****************************************************************\n");
//         printf("Enter the number corrsponding to the desired pay rate or action:\n");
//         printf("1) $8.75/hr                    2) $9.33/hr                      \n");
//         printf("3) $10.00/hr                   4) $11.20/hr                     \n");
//         printf("5) quit                                                         \n");
//         printf("****************************************************************\n");
//         printf("请输入你的工资等级(1-4):");
//         scanf("%d", &level);
//     }
//     printf("你已退出！\n");

//     system("pause");
//     return 0;
// }

//P187.9
// int main()
// {
//     int num = 0;
//     int i = 0;
//     int j = 0;
//     int flag = 0;
//     printf("请输入一个数:");
//     scanf("%d", &num);
//     for (i = 2; i <= num; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             if (i % j == 0)
//                 flag++;
//         }
//         if (flag <= 2)
//             printf("%d ", i);
//         flag = 0;
//     }
//     printf("\n");

//     system("pause");
//     return 0;
// }

//P187.10
// #define bachelor_tax    17850
// #define householder_tax 23900
// #define married_tax     29750
// #define divorced_tax    14875

// int main()
// {
//     char ch = 0;
//     double tax = 0;
//     double tax_flag = 0;
//     double income = 0;
//     printf("****************************************************************\n");
//     printf("***********Enter the letter to select your user type************\n");
//     printf("*A) bachelor                    B) householder                 *\n");
//     printf("*C) married                     D) divorced                    *\n");
//     printf("*Q) quit                                                       *\n");
//     printf("****************************************************************\n");
//     printf("请输入你的用户类型(A,B,C,D):");
//     while ((ch = getchar()) != 'Q')
//     {
//         while ((ch < 'A' || ch > 'D') && ch != 'Q')
//         {
//             printf("请重新输入:");
//             scanf("%c%d", &ch);
//         }
//         if (ch == 'Q')
//             break;
//         switch (ch)
//         {
//             case 'A':
//             tax_flag = bachelor_tax;
//             break;
//             case 'B':
//             tax_flag = householder_tax;
//             break;
//             case 'C':
//             tax_flag = married_tax;
//             break;
//             case 'D':
//             tax_flag = divorced_tax;
//             break;
//         }
//         printf("请输入你的收入:");
//         scanf("%lf", &income);
//         if (income > tax_flag)
//             tax = tax_flag * 0.15 + (income - tax_flag) * 0.28;
//         else
//             tax = income * 0.15;
//         printf("税金:%lf\n", tax);
//         printf("请输入你的用户类型(A,B,C,D):");
//         scanf("%c", &ch);
//     }
//     printf("已退出！\n");

//     system("pause");
//     return 0;
// }

//P187.11
// #define globe_artichoke_price 1.25
// #define beet_price            0.65
// #define carrot_price          0.89

// int main()
// {
//     double price = 0;
//     double weight = 0;
//     double a_weight = 0;
//     double b_weight = 0;
//     double c_weight = 0;
//     double consume = 0;
//     double discount = 0;
//     double a_consume = 0;
//     double b_consume = 0;
//     double c_consume = 0;
//     double transport_costs = 0;
//     double all_weight = 0;
//     double all_consume = 0;
//     double all_discount = 0;
//     double all_transport_costs = 0;
//     char type = 0;
//     printf("**************************************************************************\n");
//     printf("Enter the letter to Choose the name of the vegetable you want to calculate\n");
//     printf("*a) globe_artichoke                  b) beet                             *\n");
//     printf("*c) carrot                           q) quit                             *\n");
//     printf("**************************************************************************\n");
//     printf("请选择你所需要的蔬菜(a,b,c,q)");
//     while ((type = getchar()) != 'q')
//     {
//         while ((type < 'a' || type > 'c') && type != 'q')
//         {
//             printf("输入错误！请重新选择:");
//             scanf("%c%d", &type);
//         }
//         if (type == 'q')
//         {
//             break;
//         }
//         printf("请输入你需要的磅数");
//         scanf("%lf", &weight);
//         /***运输费用的计算***/
//         if (weight <= 5)
//         {
//             transport_costs = 3.50;
//         }
//         else if (weight > 5  && weight < 20)
//         {
//             transport_costs = 10;
//         }
//         else 
//         {
//             transport_costs = 8 + 0.1 * weight;
//         }
//         /***蔬菜消费的计算***/
//         consume = price * weight;
//         if (consume >= 100)
//         {
//             discount = 0.05 * consume;
//             consume -= discount;
//         }

//         switch (type)
//         {
//             case 'a':
//             price = globe_artichoke_price;
//             a_weight += weight;
//             a_consume += consume;
//             break;
//             case 'b':
//             price = beet_price;
//             b_weight += weight;
//             b_consume += consume;
//             break;
//             case 'c':
//             price = carrot_price;
//             c_weight += weight;
//             c_consume += consume;
//             break;
//         }
//         all_discount += discount;
//         all_weight += weight;
//         all_consume += consume;
//         all_transport_costs += transport_costs;
//     }
//     printf("每磅费用:%lf",all_consume / all_weight);
//     printf("订购磅数:%lf", all_weight);
//     printf("朝鲜蓟费用:%lf", a_weight);
//     printf("甜菜费用:%lf", b_weight);
//     printf("胡萝卜费用:%lf", c_weight);
//     printf("订单总费用:%lf", all_consume);
//     printf("折扣:%lf", all_discount);
//     printf("运输费用:%lf", transport_costs);
//     printf("总费用:%lf", all_consume + all_discount + all_transport_costs);

//     system("pause");
//     return 0;
// }