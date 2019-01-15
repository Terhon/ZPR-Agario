#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE "ObstacleTest"
#include <boost/test/unit_test.hpp>

#include <balls/ObstacleModel.hpp>
#include <balls/BotModel.hpp>

struct ObstacleModelFixture {
    ObstacleModelFixture() { 
        o = new ObstacleModel(0, 0, 50);
        BOOST_TEST_MESSAGE( "setup ObstacleModelFixture" ); 
    }
    ~ObstacleModelFixture() { 
        BOOST_TEST_MESSAGE( "teardown ObstacleModelFixture" ); 
        delete o;
    }

    ObstacleModel * o;
};

BOOST_FIXTURE_TEST_CASE(collision_doesnt_delete_smaller_balls, ObstacleModelFixture){
    std::vector<BallModel*>* v = new std::vector<BallModel*>;
    BallModel * b1 = new BotModel(0, 0, 20);

    v->push_back(new BotModel(0, 0, 10));
    v->push_back(b1);
    v->push_back(new BotModel(0, 0, 30));

    o->checkCollision(v);
    BOOST_CHECK(v->size() == 3);
}

