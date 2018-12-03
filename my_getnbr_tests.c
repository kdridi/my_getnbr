#include "my_getnbr.h"

#include <criterion/criterion.h>

Test(my_getnbr, should_return_0_for_)
{
    int res = my_getnbr("");
    cr_assert_eq(res, 0);
}

Test(my_getnbr, should_return_1_for_1)
{
    int res = my_getnbr("1");
    cr_assert_eq(res, 1);
}

Test(my_getnbr, should_return_12_for_12)
{
    int res = my_getnbr("12");
    cr_assert_eq(res, 12);
}

Test(my_getnbr, should_return_123_for_123)
{
    int res = my_getnbr("123");
    cr_assert_eq(res, 123);
}

Test(my_getnbr, should_return_0_for_A)
{
    int res = my_getnbr("A");
    cr_assert_eq(res, 0);
}

Test(my_getnbr, should_return_1_for_1A)
{
    int res = my_getnbr("1A");
    cr_assert_eq(res, 1);
}

Test(my_getnbr, should_return_12_for_12A)
{
    int res = my_getnbr("12A");
    cr_assert_eq(res, 12);
}

Test(my_getnbr, should_return_123_for_123A)
{
    int res = my_getnbr("123A");
    cr_assert_eq(res, 123);
}

Test(my_getnbr, should_return_0_for_M)
{
    int res = my_getnbr("-");
    cr_assert_eq(res, 0);
}

Test(my_getnbr, should_return_1_for_M1)
{
    int res = my_getnbr("-1");
    cr_assert_eq(res, -1);
}

Test(my_getnbr, should_return_12_for_M12)
{
    int res = my_getnbr("-12");
    cr_assert_eq(res, -12);
}

Test(my_getnbr, should_return_123_for_M123)
{
    int res = my_getnbr("-123");
    cr_assert_eq(res, -123);
}

Test(my_getnbr, should_return_0_for_MA)
{
    int res = my_getnbr("-A");
    cr_assert_eq(res, 0);
}

Test(my_getnbr, should_return_1_for_M1A)
{
    int res = my_getnbr("-1A");
    cr_assert_eq(res, -1);
}

Test(my_getnbr, should_return_12_for_M12A)
{
    int res = my_getnbr("-12A");
    cr_assert_eq(res, -12);
}

Test(my_getnbr, should_return_123_for_M123A)
{
    int res = my_getnbr("-123A");
    cr_assert_eq(res, -123);
}

Test(my_getnbr, should_return_0_for_P)
{
    int res = my_getnbr("+");
    cr_assert_eq(res, 0);
}

Test(my_getnbr, should_return_1_for_P1)
{
    int res = my_getnbr("+1");
    cr_assert_eq(res, 1);
}

Test(my_getnbr, should_return_12_for_P12)
{
    int res = my_getnbr("+12");
    cr_assert_eq(res, 12);
}

Test(my_getnbr, should_return_123_for_P123)
{
    int res = my_getnbr("+123");
    cr_assert_eq(res, 123);
}

Test(my_getnbr, should_return_0_for_PA)
{
    int res = my_getnbr("+A");
    cr_assert_eq(res, 0);
}

Test(my_getnbr, should_return_1_for_P1A)
{
    int res = my_getnbr("+1A");
    cr_assert_eq(res, 1);
}

Test(my_getnbr, should_return_12_for_P12A)
{
    int res = my_getnbr("+12A");
    cr_assert_eq(res, 12);
}

Test(my_getnbr, should_return_123_for_P123A)
{
    int res = my_getnbr("+123A");
    cr_assert_eq(res, 123);
}

Test(my_getnbr, should_return_0_for_PM)
{
    int res = my_getnbr("+-");
    cr_assert_eq(res, 0);
}

Test(my_getnbr, should_return_1_for_PM1)
{
    int res = my_getnbr("+-1");
    cr_assert_eq(res, -1);
}

Test(my_getnbr, should_return_12_for_PM12)
{
    int res = my_getnbr("+-12");
    cr_assert_eq(res, -12);
}

Test(my_getnbr, should_return_123_for_PM123)
{
    int res = my_getnbr("+-123");
    cr_assert_eq(res, -123);
}

Test(my_getnbr, should_return_0_for_PMA)
{
    int res = my_getnbr("+-A");
    cr_assert_eq(res, 0);
}

Test(my_getnbr, should_return_1_for_PM1A)
{
    int res = my_getnbr("+-1A");
    cr_assert_eq(res, -1);
}

Test(my_getnbr, should_return_12_for_PM12A)
{
    int res = my_getnbr("+-12A");
    cr_assert_eq(res, -12);
}

Test(my_getnbr, should_return_123_for_PM123A)
{
    int res = my_getnbr("+-123A");
    cr_assert_eq(res, -123);
}

Test(my_getnbr, should_return_0_for_MM)
{
    int res = my_getnbr("--");
    cr_assert_eq(res, 0);
}

Test(my_getnbr, should_return_1_for_MM1)
{
    int res = my_getnbr("--1");
    cr_assert_eq(res, 1);
}

Test(my_getnbr, should_return_12_for_MM12)
{
    int res = my_getnbr("--12");
    cr_assert_eq(res, 12);
}

Test(my_getnbr, should_return_123_for_MM123)
{
    int res = my_getnbr("--123");
    cr_assert_eq(res, 123);
}

Test(my_getnbr, should_return_0_for_MMA)
{
    int res = my_getnbr("--A");
    cr_assert_eq(res, 0);
}

Test(my_getnbr, should_return_1_for_MM1A)
{
    int res = my_getnbr("--1A");
    cr_assert_eq(res, 1);
}

Test(my_getnbr, should_return_12_for_MM12A)
{
    int res = my_getnbr("--12A");
    cr_assert_eq(res, 12);
}

Test(my_getnbr, should_return_123_for_MM123A)
{
    int res = my_getnbr("--123A");
    cr_assert_eq(res, 123);
}

Test(my_getnbr, should_return_0_for_MP)
{
    int res = my_getnbr("-+");
    cr_assert_eq(res, 0);
}

Test(my_getnbr, should_return_1_for_MP1)
{
    int res = my_getnbr("-+1");
    cr_assert_eq(res, -1);
}

Test(my_getnbr, should_return_12_for_MP12)
{
    int res = my_getnbr("-+12");
    cr_assert_eq(res, -12);
}

Test(my_getnbr, should_return_123_for_MP123)
{
    int res = my_getnbr("-+123");
    cr_assert_eq(res, -123);
}

Test(my_getnbr, should_return_0_for_MPA)
{
    int res = my_getnbr("-+A");
    cr_assert_eq(res, 0);
}

Test(my_getnbr, should_return_1_for_MP1A)
{
    int res = my_getnbr("-+1A");
    cr_assert_eq(res, -1);
}

Test(my_getnbr, should_return_12_for_MP12A)
{
    int res = my_getnbr("-+12A");
    cr_assert_eq(res, -12);
}

Test(my_getnbr, should_return_123_for_MP123A)
{
    int res = my_getnbr("-+123A");
    cr_assert_eq(res, -123);
}

Test(my_getnbr, should_return_0_for_MPM)
{
    int res = my_getnbr("-+-");
    cr_assert_eq(res, 0);
}

Test(my_getnbr, should_return_1_for_MPM1)
{
    int res = my_getnbr("-+-1");
    cr_assert_eq(res, 1);
}

Test(my_getnbr, should_return_12_for_MPM12)
{
    int res = my_getnbr("-+-12");
    cr_assert_eq(res, 12);
}

Test(my_getnbr, should_return_123_for_MPM123)
{
    int res = my_getnbr("-+-123");
    cr_assert_eq(res, 123);
}

Test(my_getnbr, should_return_0_for_MPMA)
{
    int res = my_getnbr("-+-A");
    cr_assert_eq(res, 0);
}

Test(my_getnbr, should_return_1_for_MPM1A)
{
    int res = my_getnbr("-+-1A");
    cr_assert_eq(res, 1);
}

Test(my_getnbr, should_return_12_for_MPM12A)
{
    int res = my_getnbr("-+-12A");
    cr_assert_eq(res, 12);
}

Test(my_getnbr, should_return_123_for_MPM123A)
{
    int res = my_getnbr("-+-123A");
    cr_assert_eq(res, 123);
}

Test(my_getnbr, should_return_1_for_1M28)
{
    int res = my_getnbr("1-28");
    cr_assert_eq(res, 1);
}

Test(my_getnbr, should_return_12_for_12M28)
{
    int res = my_getnbr("12-28");
    cr_assert_eq(res, 12);
}

Test(my_getnbr, should_return_123_for_123M28)
{
    int res = my_getnbr("123-28");
    cr_assert_eq(res, 123);
}

Test(my_getnbr, should_return_0_for_AM28)
{
    int res = my_getnbr("A-28");
    cr_assert_eq(res, 0);
}

Test(my_getnbr, should_return_1_for_1AM28)
{
    int res = my_getnbr("1A-28");
    cr_assert_eq(res, 1);
}

Test(my_getnbr, should_return_12_for_12AM28)
{
    int res = my_getnbr("12A-28");
    cr_assert_eq(res, 12);
}

Test(my_getnbr, should_return_123_for_123AM28)
{
    int res = my_getnbr("123A-28");
    cr_assert_eq(res, 123);
}

Test(my_getnbr, should_return_1_for_M1M28)
{
    int res = my_getnbr("-1-28");
    cr_assert_eq(res, -1);
}

Test(my_getnbr, should_return_12_for_M12M28)
{
    int res = my_getnbr("-12-28");
    cr_assert_eq(res, -12);
}

Test(my_getnbr, should_return_123_for_M123M28)
{
    int res = my_getnbr("-123-28");
    cr_assert_eq(res, -123);
}

Test(my_getnbr, should_return_0_for_MAM28)
{
    int res = my_getnbr("-A-28");
    cr_assert_eq(res, 0);
}

Test(my_getnbr, should_return_1_for_M1AM28)
{
    int res = my_getnbr("-1A-28");
    cr_assert_eq(res, -1);
}

Test(my_getnbr, should_return_12_for_M12AM28)
{
    int res = my_getnbr("-12A-28");
    cr_assert_eq(res, -12);
}

Test(my_getnbr, should_return_123_for_M123AM28)
{
    int res = my_getnbr("-123A-28");
    cr_assert_eq(res, -123);
}

Test(my_getnbr, should_return_0_for_PM28)
{
    int res = my_getnbr("+-28");
    cr_assert_eq(res, -28);
}

Test(my_getnbr, should_return_1_for_P1M28)
{
    int res = my_getnbr("+1-28");
    cr_assert_eq(res, 1);
}

Test(my_getnbr, should_return_12_for_P12M28)
{
    int res = my_getnbr("+12-28");
    cr_assert_eq(res, 12);
}

Test(my_getnbr, should_return_123_for_P123M28)
{
    int res = my_getnbr("+123-28");
    cr_assert_eq(res, 123);
}

Test(my_getnbr, should_return_0_for_PAM28)
{
    int res = my_getnbr("+A-28");
    cr_assert_eq(res, 0);
}

Test(my_getnbr, should_return_1_for_P1AM28)
{
    int res = my_getnbr("+1A-28");
    cr_assert_eq(res, 1);
}

Test(my_getnbr, should_return_12_for_P12AM28)
{
    int res = my_getnbr("+12A-28");
    cr_assert_eq(res, 12);
}

Test(my_getnbr, should_return_123_for_P123AM28)
{
    int res = my_getnbr("+123A-28");
    cr_assert_eq(res, 123);
}

Test(my_getnbr, should_return_0_for_PMM28)
{
    int res = my_getnbr("+--28");
    cr_assert_eq(res, 28);
}

Test(my_getnbr, should_return_1_for_PM1M28)
{
    int res = my_getnbr("+-1-28");
    cr_assert_eq(res, -1);
}

Test(my_getnbr, should_return_12_for_PM12M28)
{
    int res = my_getnbr("+-12-28");
    cr_assert_eq(res, -12);
}

Test(my_getnbr, should_return_123_for_PM123M28)
{
    int res = my_getnbr("+-123-28");
    cr_assert_eq(res, -123);
}

Test(my_getnbr, should_return_0_for_PMAM28)
{
    int res = my_getnbr("+-A-28");
    cr_assert_eq(res, 0);
}

Test(my_getnbr, should_return_1_for_PM1AM28)
{
    int res = my_getnbr("+-1A-28");
    cr_assert_eq(res, -1);
}

Test(my_getnbr, should_return_12_for_PM12AM28)
{
    int res = my_getnbr("+-12A-28");
    cr_assert_eq(res, -12);
}

Test(my_getnbr, should_return_123_for_PM123AM28)
{
    int res = my_getnbr("+-123A-28");
    cr_assert_eq(res, -123);
}

Test(my_getnbr, should_return_0_for_MMM28)
{
    int res = my_getnbr("---28");
    cr_assert_eq(res, -28);
}

Test(my_getnbr, should_return_1_for_MM1M28)
{
    int res = my_getnbr("--1-28");
    cr_assert_eq(res, 1);
}

Test(my_getnbr, should_return_12_for_MM12M28)
{
    int res = my_getnbr("--12-28");
    cr_assert_eq(res, 12);
}

Test(my_getnbr, should_return_123_for_MM123M28)
{
    int res = my_getnbr("--123-28");
    cr_assert_eq(res, 123);
}

Test(my_getnbr, should_return_0_for_MMAM28)
{
    int res = my_getnbr("--A-28");
    cr_assert_eq(res, 0);
}

Test(my_getnbr, should_return_1_for_MM1AM28)
{
    int res = my_getnbr("--1A-28");
    cr_assert_eq(res, 1);
}

Test(my_getnbr, should_return_12_for_MM12AM28)
{
    int res = my_getnbr("--12A-28");
    cr_assert_eq(res, 12);
}

Test(my_getnbr, should_return_123_for_MM123AM28)
{
    int res = my_getnbr("--123A-28");
    cr_assert_eq(res, 123);
}

Test(my_getnbr, should_return_0_for_MPM28)
{
    int res = my_getnbr("-+-28");
    cr_assert_eq(res, 28);
}

Test(my_getnbr, should_return_1_for_MP1M28)
{
    int res = my_getnbr("-+1-28");
    cr_assert_eq(res, -1);
}

Test(my_getnbr, should_return_12_for_MP12M28)
{
    int res = my_getnbr("-+12-28");
    cr_assert_eq(res, -12);
}

Test(my_getnbr, should_return_123_for_MP123M28)
{
    int res = my_getnbr("-+123-28");
    cr_assert_eq(res, -123);
}

Test(my_getnbr, should_return_0_for_MPAM28)
{
    int res = my_getnbr("-+A-28");
    cr_assert_eq(res, 0);
}

Test(my_getnbr, should_return_1_for_MP1AM28)
{
    int res = my_getnbr("-+1A-28");
    cr_assert_eq(res, -1);
}

Test(my_getnbr, should_return_12_for_MP12AM28)
{
    int res = my_getnbr("-+12A-28");
    cr_assert_eq(res, -12);
}

Test(my_getnbr, should_return_123_for_MP123AM28)
{
    int res = my_getnbr("-+123A-28");
    cr_assert_eq(res, -123);
}

Test(my_getnbr, should_return_0_for_MPMM28)
{
    int res = my_getnbr("-+--28");
    cr_assert_eq(res, -28);
}

Test(my_getnbr, should_return_1_for_MPM1M28)
{
    int res = my_getnbr("-+-1-28");
    cr_assert_eq(res, 1);
}

Test(my_getnbr, should_return_12_for_MPM12M28)
{
    int res = my_getnbr("-+-12-28");
    cr_assert_eq(res, 12);
}

Test(my_getnbr, should_return_123_for_MPM123M28)
{
    int res = my_getnbr("-+-123-28");
    cr_assert_eq(res, 123);
}

Test(my_getnbr, should_return_0_for_MPMAM28)
{
    int res = my_getnbr("-+-A-28");
    cr_assert_eq(res, 0);
}

Test(my_getnbr, should_return_1_for_MPM1AM28)
{
    int res = my_getnbr("-+-1A-28");
    cr_assert_eq(res, 1);
}

Test(my_getnbr, should_return_12_for_MPM12AM28)
{
    int res = my_getnbr("-+-12A-28");
    cr_assert_eq(res, 12);
}

Test(my_getnbr, should_return_123_for_MPM123AM28)
{
    int res = my_getnbr("-+-123A-28");
    cr_assert_eq(res, 123);
}

Test(my_getnbr, should_return_0_for_P42)
{
    int res = my_getnbr("+42");
    cr_assert_eq(res, 42);
}

Test(my_getnbr, should_return_1_for_1P42)
{
    int res = my_getnbr("1+42");
    cr_assert_eq(res, 1);
}

Test(my_getnbr, should_return_12_for_12P42)
{
    int res = my_getnbr("12+42");
    cr_assert_eq(res, 12);
}

Test(my_getnbr, should_return_123_for_123P42)
{
    int res = my_getnbr("123+42");
    cr_assert_eq(res, 123);
}

Test(my_getnbr, should_return_0_for_AP42)
{
    int res = my_getnbr("A+42");
    cr_assert_eq(res, 0);
}

Test(my_getnbr, should_return_1_for_1AP42)
{
    int res = my_getnbr("1A+42");
    cr_assert_eq(res, 1);
}

Test(my_getnbr, should_return_12_for_12AP42)
{
    int res = my_getnbr("12A+42");
    cr_assert_eq(res, 12);
}

Test(my_getnbr, should_return_123_for_123AP42)
{
    int res = my_getnbr("123A+42");
    cr_assert_eq(res, 123);
}

Test(my_getnbr, should_return_0_for_MP42)
{
    int res = my_getnbr("-+42");
    cr_assert_eq(res, -42);
}

Test(my_getnbr, should_return_1_for_M1P42)
{
    int res = my_getnbr("-1+42");
    cr_assert_eq(res, -1);
}

Test(my_getnbr, should_return_12_for_M12P42)
{
    int res = my_getnbr("-12+42");
    cr_assert_eq(res, -12);
}

Test(my_getnbr, should_return_123_for_M123P42)
{
    int res = my_getnbr("-123+42");
    cr_assert_eq(res, -123);
}

Test(my_getnbr, should_return_0_for_MAP42)
{
    int res = my_getnbr("-A+42");
    cr_assert_eq(res, 0);
}

Test(my_getnbr, should_return_1_for_M1AP42)
{
    int res = my_getnbr("-1A+42");
    cr_assert_eq(res, -1);
}

Test(my_getnbr, should_return_12_for_M12AP42)
{
    int res = my_getnbr("-12A+42");
    cr_assert_eq(res, -12);
}

Test(my_getnbr, should_return_123_for_M123AP42)
{
    int res = my_getnbr("-123A+42");
    cr_assert_eq(res, -123);
}

Test(my_getnbr, should_return_0_for_PP42)
{
    int res = my_getnbr("++42");
    cr_assert_eq(res, 42);
}

Test(my_getnbr, should_return_1_for_P1P42)
{
    int res = my_getnbr("+1+42");
    cr_assert_eq(res, 1);
}

Test(my_getnbr, should_return_12_for_P12P42)
{
    int res = my_getnbr("+12+42");
    cr_assert_eq(res, 12);
}

Test(my_getnbr, should_return_123_for_P123P42)
{
    int res = my_getnbr("+123+42");
    cr_assert_eq(res, 123);
}

Test(my_getnbr, should_return_0_for_PAP42)
{
    int res = my_getnbr("+A+42");
    cr_assert_eq(res, 0);
}

Test(my_getnbr, should_return_1_for_P1AP42)
{
    int res = my_getnbr("+1A+42");
    cr_assert_eq(res, 1);
}

Test(my_getnbr, should_return_12_for_P12AP42)
{
    int res = my_getnbr("+12A+42");
    cr_assert_eq(res, 12);
}

Test(my_getnbr, should_return_123_for_P123AP42)
{
    int res = my_getnbr("+123A+42");
    cr_assert_eq(res, 123);
}

Test(my_getnbr, should_return_0_for_PMP42)
{
    int res = my_getnbr("+-+42");
    cr_assert_eq(res, -42);
}

Test(my_getnbr, should_return_1_for_PM1P42)
{
    int res = my_getnbr("+-1+42");
    cr_assert_eq(res, -1);
}

Test(my_getnbr, should_return_12_for_PM12P42)
{
    int res = my_getnbr("+-12+42");
    cr_assert_eq(res, -12);
}

Test(my_getnbr, should_return_123_for_PM123P42)
{
    int res = my_getnbr("+-123+42");
    cr_assert_eq(res, -123);
}

Test(my_getnbr, should_return_0_for_PMAP42)
{
    int res = my_getnbr("+-A+42");
    cr_assert_eq(res, 0);
}

Test(my_getnbr, should_return_1_for_PM1AP42)
{
    int res = my_getnbr("+-1A+42");
    cr_assert_eq(res, -1);
}

Test(my_getnbr, should_return_12_for_PM12AP42)
{
    int res = my_getnbr("+-12A+42");
    cr_assert_eq(res, -12);
}

Test(my_getnbr, should_return_123_for_PM123AP42)
{
    int res = my_getnbr("+-123A+42");
    cr_assert_eq(res, -123);
}

Test(my_getnbr, should_return_0_for_MMP42)
{
    int res = my_getnbr("--+42");
    cr_assert_eq(res, 42);
}

Test(my_getnbr, should_return_1_for_MM1P42)
{
    int res = my_getnbr("--1+42");
    cr_assert_eq(res, 1);
}

Test(my_getnbr, should_return_12_for_MM12P42)
{
    int res = my_getnbr("--12+42");
    cr_assert_eq(res, 12);
}

Test(my_getnbr, should_return_123_for_MM123P42)
{
    int res = my_getnbr("--123+42");
    cr_assert_eq(res, 123);
}

Test(my_getnbr, should_return_0_for_MMAP42)
{
    int res = my_getnbr("--A+42");
    cr_assert_eq(res, 0);
}

Test(my_getnbr, should_return_1_for_MM1AP42)
{
    int res = my_getnbr("--1A+42");
    cr_assert_eq(res, 1);
}

Test(my_getnbr, should_return_12_for_MM12AP42)
{
    int res = my_getnbr("--12A+42");
    cr_assert_eq(res, 12);
}

Test(my_getnbr, should_return_123_for_MM123AP42)
{
    int res = my_getnbr("--123A+42");
    cr_assert_eq(res, 123);
}

Test(my_getnbr, should_return_0_for_MPP42)
{
    int res = my_getnbr("-++42");
    cr_assert_eq(res, -42);
}

Test(my_getnbr, should_return_1_for_MP1P42)
{
    int res = my_getnbr("-+1+42");
    cr_assert_eq(res, -1);
}

Test(my_getnbr, should_return_12_for_MP12P42)
{
    int res = my_getnbr("-+12+42");
    cr_assert_eq(res, -12);
}

Test(my_getnbr, should_return_123_for_MP123P42)
{
    int res = my_getnbr("-+123+42");
    cr_assert_eq(res, -123);
}

Test(my_getnbr, should_return_0_for_MPAP42)
{
    int res = my_getnbr("-+A+42");
    cr_assert_eq(res, 0);
}

Test(my_getnbr, should_return_1_for_MP1AP42)
{
    int res = my_getnbr("-+1A+42");
    cr_assert_eq(res, -1);
}

Test(my_getnbr, should_return_12_for_MP12AP42)
{
    int res = my_getnbr("-+12A+42");
    cr_assert_eq(res, -12);
}

Test(my_getnbr, should_return_123_for_MP123AP42)
{
    int res = my_getnbr("-+123A+42");
    cr_assert_eq(res, -123);
}

Test(my_getnbr, should_return_0_for_MPMP42)
{
    int res = my_getnbr("-+-+42");
    cr_assert_eq(res, 42);
}

Test(my_getnbr, should_return_1_for_MPM1P42)
{
    int res = my_getnbr("-+-1+42");
    cr_assert_eq(res, 1);
}

Test(my_getnbr, should_return_12_for_MPM12P42)
{
    int res = my_getnbr("-+-12+42");
    cr_assert_eq(res, 12);
}

Test(my_getnbr, should_return_123_for_MPM123P42)
{
    int res = my_getnbr("-+-123+42");
    cr_assert_eq(res, 123);
}

Test(my_getnbr, should_return_0_for_MPMAP42)
{
    int res = my_getnbr("-+-A+42");
    cr_assert_eq(res, 0);
}

Test(my_getnbr, should_return_1_for_MPM1AP42)
{
    int res = my_getnbr("-+-1A+42");
    cr_assert_eq(res, 1);
}

Test(my_getnbr, should_return_12_for_MPM12AP42)
{
    int res = my_getnbr("-+-12A+42");
    cr_assert_eq(res, 12);
}

Test(my_getnbr, should_return_123_for_MPM123AP42)
{
    int res = my_getnbr("-+-123A+42");
    cr_assert_eq(res, 123);
}