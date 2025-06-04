#ifndef DARKMODESCREENVIEW_HPP
#define DARKMODESCREENVIEW_HPP

#include <gui_generated/darkmodescreen_screen/darkModeScreenViewBase.hpp>
#include <gui/darkmodescreen_screen/darkModeScreenPresenter.hpp>

class darkModeScreenView : public darkModeScreenViewBase
{
public:
    darkModeScreenView();
    virtual ~darkModeScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void increaseSetVoltage();
    virtual void decreaseSetVoltage();
    virtual void increaseSetCurrent();
    virtual void decreaseSetCurrent();
    virtual void increaseSetOVP();
    virtual void decreaseSetOVP();
    virtual void increaseSetOCP();
    virtual void decreaseSetOCP();
    virtual void vSetted( );

protected:
    volatile float setVoltage = 0.00;
    volatile float setCurrent = 0.00;
    volatile float settedVoltage = 0.00;
    volatile float setOCP = 0.00;
    volatile float setOVP = 0.00;
};

#endif // DARKMODESCREENVIEW_HPP
