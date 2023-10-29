/**
 * @file    insertion_sort.test.cpp
 * @author  Oleg E. Vorobiov <isnullxbh(at)gmail.com>
 * @date    27.10.2023
 */

#include <gtest/gtest.h>

#include <algorithm>
#include <list>
#include <string>
#include <vector>

#include <dsa/sorting/insertion_sort.hpp>

TEST(InsertionSortTests, UsingPointerToDataAndSize)
{
    {
        int arr[] = { 3, 7, 1, 2, 5 };
        dsa::insertion_sort(arr, std::size(arr), dsa::less());
        EXPECT_TRUE(std::is_sorted(std::cbegin(arr), std::cend(arr)));
    }

    {
        int arr[] = { 3, 7, 1, 2, 5 };
        dsa::insertion_sort(arr, std::size(arr), dsa::greater());
        EXPECT_TRUE(std::is_sorted(std::cbegin(arr), std::cend(arr), dsa::greater()));
    }
}

TEST(InsertionSortTests, UsingIterators)
{
    {
        int arr[] = { 3, 7, 1, 2, 5 };
        dsa::insertion_sort(std::begin(arr), std::end(arr), dsa::less());
        EXPECT_TRUE(std::is_sorted(std::cbegin(arr), std::cend(arr)));
    }

    {
        int arr[] = { 3, 7, 1, 2, 5 };
        dsa::insertion_sort(std::begin(arr), std::end(arr), dsa::greater());
        EXPECT_TRUE(std::is_sorted(std::cbegin(arr), std::cend(arr), dsa::greater()));
    }
}

TEST(InsertionSortTests, UsingReferenceToContainer)
{
    {
        int arr[] = { 3, 7, 1, 2, 5 };
        dsa::insertion_sort(arr, dsa::less());
        EXPECT_TRUE(std::is_sorted(std::cbegin(arr), std::cend(arr)));
    }

    {
        int arr[] = { 3, 7, 1, 2, 5 };
        dsa::insertion_sort(arr, dsa::greater());
        EXPECT_TRUE(std::is_sorted(std::cbegin(arr), std::cend(arr), dsa::greater()));
    }
}

TEST(InsertionSortTests, SortString)
{
    {
        std::string str { "zxabc" };
        dsa::insertion_sort(str, dsa::less());
        EXPECT_TRUE(std::is_sorted(std::cbegin(str), std::cend(str)));
    }

    {
        std::string str { "zxabc" };
        dsa::insertion_sort(str, dsa::greater());
        EXPECT_TRUE(std::is_sorted(std::cbegin(str), std::cend(str), dsa::greater()));
    }
}

TEST(InsertionSortTests, SortVector)
{
    {
        std::vector<std::string> vec { "abc", "a", "bca" };
        dsa::insertion_sort(vec, dsa::less());
        EXPECT_TRUE(std::is_sorted(std::cbegin(vec), std::cend(vec)));
    }

    {
        std::vector<std::string> vec { "abc", "a", "bca" };
        dsa::insertion_sort(vec, dsa::greater());
        EXPECT_TRUE(std::is_sorted(std::cbegin(vec), std::cend(vec), dsa::greater()));
    }
}

TEST(InsertionSortTests, SortList)
{
    {
        std::list<std::string> list { "abc", "a", "bca" };
        dsa::insertion_sort(list, dsa::less());
        EXPECT_TRUE(std::is_sorted(std::cbegin(list), std::cend(list)));
    }

    {
        std::list<std::string> list { "abc", "a", "bca" };
        dsa::insertion_sort(list, dsa::greater());
        EXPECT_TRUE(std::is_sorted(std::cbegin(list), std::cend(list), dsa::greater()));
    }
}

namespace
{
    struct User
    {
        std::string name;
        std::string surname;
    };

    auto operator<(const User& lhs, const User& rhs) -> bool
    {
        return lhs.surname < rhs.surname;
    }
}

TEST(InsertionSortTests, UsingCustomComparator)
{
    std::vector<User> users
    {
        { "Sergey", "Krilov" },
        { "Anton",  "Peplov" },
        { "Sergey", "Krabov" },
    };

    dsa::insertion_sort(users, ::operator<);
    EXPECT_TRUE(std::is_sorted(users.cbegin(), users.cend(), ::operator<));
}
