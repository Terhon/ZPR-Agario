#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE main
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE(whatisthis) {
    BOOST_CHECK(1 + 1 == 2);
}
