#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE "BotTest"
#include <boost/test/unit_test.hpp>
#include <chrono>
#include <thread>
#include <balls/BotModel.hpp>

struct BotModelFixture {
    BotModelFixture() {
        b = new BotModel(0, 0, 50);
        BOOST_TEST_MESSAGE( "setup BotModelFixture" );
    }
    ~BotModelFixture() {
        BOOST_TEST_MESSAGE( "teardown BotModelFixture" );
        delete b;
    }

    BotModel * b;
};


BOOST_FIXTURE_TEST_CASE(update_changes_position, BotModelFixture){
    int x = b->getX();
    int y = b->getY();
    b->update();
    BOOST_CHECK(x != b->getX() && y != b->getY() );
}