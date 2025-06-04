#include <gui/darkmodescreen_screen/darkModeScreenView.hpp>

darkModeScreenView::darkModeScreenView()
{

}

void darkModeScreenView::setupScreen()
{
    darkModeScreenViewBase::setupScreen();
}

void darkModeScreenView::tearDownScreen()
{
    darkModeScreenViewBase::tearDownScreen();
}
void darkModeScreenView::increaseSetVoltage(){
    setVoltage += 0.1f;
    int volt_int = (int)setVoltage;
    int volt_frac = (int)((setVoltage - volt_int) * 100); // 2 decimal places
    if (volt_frac < 0) volt_frac = -volt_frac;
    Unicode::snprintf(vSetValueBuffer, VSETVALUE_SIZE, "%d.%02d", volt_int, volt_frac);
    vSetValue.invalidate();
}
void darkModeScreenView::decreaseSetVoltage(){
    setVoltage -= 0.1f;
    int volt_int = (int)setVoltage;
    int volt_frac = (int)((setVoltage - volt_int) * 100);
    if (volt_frac < 0) volt_frac = -volt_frac;
    Unicode::snprintf(vSetValueBuffer, VSETVALUE_SIZE, "%d.%02d", volt_int, volt_frac);
    vSetValue.invalidate();
}
void darkModeScreenView::increaseSetCurrent(){
    setCurrent += 0.02f;
    int curr_int = (int)setCurrent;
    int curr_frac = (int)((setCurrent - curr_int) * 100);
    if (curr_frac < 0) curr_frac = -curr_frac;
    Unicode::snprintf(iSetValueBuffer, ISETVALUE_SIZE, "%d.%02d", curr_int, curr_frac);
    iSetValue.invalidate();
}
void darkModeScreenView::decreaseSetCurrent(){
    setCurrent -= 0.02f;
    int curr_int = (int)setCurrent;
    int curr_frac = (int)((setCurrent - curr_int) * 100);
    if (curr_frac < 0) curr_frac = -curr_frac;
    Unicode::snprintf(iSetValueBuffer, ISETVALUE_SIZE, "%d.%02d", curr_int, curr_frac);
    iSetValue.invalidate();
}

void darkModeScreenView::increaseSetOVP(){
    setOVP += 0.5f;
    int ovp_int = (int)setOVP;
    int ovp_frac = (int)((setOVP - ovp_int) * 100); // 2 decimal places
    if (ovp_frac < 0) ovp_frac = -ovp_frac;
    Unicode::snprintf(ovpValueBuffer, OVPVALUE_SIZE, "%d.%02d", ovp_int, ovp_frac);
    ovpValue.invalidate();
}
void darkModeScreenView::decreaseSetOVP(){
    setOVP -= 0.5f;
    int ovp_int = (int)setOVP;
    int ovp_frac = (int)((setOVP - ovp_int) * 100); // 2 decimal places
    if (ovp_frac < 0) ovp_frac = -ovp_frac;
    Unicode::snprintf(ovpValueBuffer, OVPVALUE_SIZE, "%d.%02d", ovp_int, ovp_frac);
    ovpValue.invalidate();
}

void darkModeScreenView::increaseSetOCP(){
    setOCP += 0.1f;
    int ocp_int = (int)setOCP;
    int ocp_frac = (int)((setOCP - ocp_int) * 100); // 2 decimal places
    if (ocp_frac < 0) ocp_frac = -ocp_frac;
    Unicode::snprintf(ocpValueBuffer, OCPVALUE_SIZE, "%d.%02d", ocp_int, ocp_frac);
    ocpValue.invalidate();
}
void darkModeScreenView::decreaseSetOCP(){
    setOCP -= 0.1f;
    int ocp_int = (int)setOCP;
    int ocp_frac = (int)((setOCP - ocp_int) * 100); // 2 decimal places
    if (ocp_frac < 0) ocp_frac = -ocp_frac;
    Unicode::snprintf(ocpValueBuffer, OCPVALUE_SIZE, "%d.%02d", ocp_int, ocp_frac);
    ocpValue.invalidate();
}
/*
void darkModeScreenView::setADC(int val){
	Unicode::snprintf(outVoltageBuffer, OUTVOLTAGE_SIZE, "%d", val);
		outVoltage.invalidate();


}



*/









