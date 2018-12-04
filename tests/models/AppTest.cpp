#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE "AppTest"
#include <boost/test/unit_test.hpp>

#include <App.hpp>

BOOST_AUTO_TEST_CASE(why)
{
  App app;
  app.getWindow();
}