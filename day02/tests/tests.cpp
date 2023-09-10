//
// Created by Scott Odle on 9/10/23.
//

#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MAIN
#include <boost/test/unit_test.hpp>

#include "../lib.cpp"

BOOST_AUTO_TEST_SUITE(Day02Tests)

    BOOST_AUTO_TEST_CASE(ReadInput)
    {
        auto input = read_input();

        BOOST_REQUIRE_EQUAL(input.size(), 3);
        BOOST_REQUIRE(input[0] == pair('A', 'Y'));
        BOOST_REQUIRE(input[1] == pair('B', 'X'));
        BOOST_REQUIRE(input[2] == pair('C', 'Z'));
    }

    BOOST_AUTO_TEST_CASE(Part1)
    {
        auto input = read_input();

        BOOST_REQUIRE_EQUAL(part1(input), 15);
    }

    BOOST_AUTO_TEST_CASE(Part2)
    {
        auto input = read_input();

        BOOST_REQUIRE_EQUAL(part2(input), 12);
    }

BOOST_AUTO_TEST_SUITE_END()