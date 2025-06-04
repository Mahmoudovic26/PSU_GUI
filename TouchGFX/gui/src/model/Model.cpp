#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

Model::Model() : modelListener(0)
{

}

void Model::tick()
{
	/*  if (osMessageQueueGetCount(ADCQueueHandle) > 0)
	  {
	 	osMessageQueueGet(ADCQueueHandle, &ADC_VAL, 0, 0);
	  }
	  modelListener->setADC(ADC_VAL);*/
}
