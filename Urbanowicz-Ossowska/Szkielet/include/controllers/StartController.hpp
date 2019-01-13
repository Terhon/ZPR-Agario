#ifndef STARTCONTROLLER_HPP
#define STARTCONTROLLER_HPP

#include <StateController.hpp>
#include <StartModel.hpp>
#include <StartView.hpp>

class StartController : public StateController {
    
    public:
        virtual void udpateModel() {
            model.update();
        };
        virtual void updateView() {
            view.draw();
        };

    private:
        StartModel model;
        StartView view;
};

#endif