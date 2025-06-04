#ifndef DARKMODESCREENPRESENTER_HPP
#define DARKMODESCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class darkModeScreenView;

class darkModeScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    darkModeScreenPresenter(darkModeScreenView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();
   /* void setSetVoltage(float voltage) {
        setVoltage = voltage;
    }
    float getSetVoltage() const {
        return setVoltage;
    }
    void setSetCurrent(float current) {
        setCurrent = current;
    }
    float getSetCurrent() const {
        return setCurrent;
    }*/
    virtual ~darkModeScreenPresenter() {}

private:
    darkModeScreenPresenter();

    darkModeScreenView& view;
   // float setVoltage ; 
   // float setCurrent ; 
};

#endif // DARKMODESCREENPRESENTER_HPP
