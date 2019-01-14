#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE "ObstacleTest"
#include <boost/test/unit_test.hpp>

#include <balls/ObstacleModel.hpp>

struct ObstacleModelFixture {
    ObstacleModelFixture() { 
        o = new ObstacleModel();
        BOOST_TEST_MESSAGE( "setup ObstacleModelFixture" ); 
    }
    ~ObstacleModelFixture() { 
        BOOST_TEST_MESSAGE( "teardown ObstacleModelFixture" ); 
        delete o;
    }

    ObstacleModel * o;
};

