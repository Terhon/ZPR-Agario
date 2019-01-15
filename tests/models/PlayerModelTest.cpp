#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE "ObstacleTest"
#include <boost/test/unit_test.hpp>

#include <balls/PlayerModel.hpp>
#include <balls/BotModel.hpp>

struct PlayerModelFixture {
    PlayerModelFixture() { 
        p = new PlayerModel(0, 0, 50);
        BOOST_TEST_MESSAGE( "setup PlayerModelFixture" ); 
    }
    ~PlayerModelFixture() { 
        BOOST_TEST_MESSAGE( "teardown PlayerModelFixture" ); 
        delete p;
    }

    PlayerModel * p;
};

BOOST_FIXTURE_TEST_CASE(collision_with_smaller_ball_removes_it, PlayerModelFixture){
    std::vector<BallModel*>* v;

    v->push_back(new PlayerModel(0, 0, 60));
    v->push_back(new PlayerModel(0, 0, 70));
    v->push_back(new PlayerModel(0, 0, 30));

    p->checkCollision(v);
    BOOST_CHECK(v->size() == 2);
}

BOOST_FIXTURE_TEST_CASE(grow_makes_player_bigger, PlayerModelFixture) {

    p->grow(10);
    BOOST_CHECK(p->getRadius() > 50);
}