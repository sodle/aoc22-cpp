//
// Created by Scott Odle on 9/10/23.
//

#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MAIN
#include <boost/test/unit_test.hpp>

#include "../lib.cpp"

BOOST_AUTO_TEST_SUITE(Day01Tests)

    BOOST_AUTO_TEST_CASE(ReadInput)
    {
        auto input = read_input();

        BOOST_REQUIRE_EQUAL(input.size(), 5);
        BOOST_REQUIRE_EQUAL(input[0].size(), 3);
        BOOST_REQUIRE_EQUAL(input[1].size(), 1);
        BOOST_REQUIRE_EQUAL(input[2].size(), 2);
        BOOST_REQUIRE_EQUAL(input[3].size(), 3);
        BOOST_REQUIRE_EQUAL(input[4].size(), 1);
    }

    BOOST_AUTO_TEST_CASE(Part1)
    {
        auto input = read_input();

        BOOST_REQUIRE_EQUAL(part1(input), 24000);
    }

    BOOST_AUTO_TEST_CASE(Part2)
    {
        auto input = read_input();

        BOOST_REQUIRE_EQUAL(part2(input), 45000);
    }

BOOST_AUTO_TEST_SUITE_END()