#ifndef CENTER_OF_MASS_PROPERTY_H
#define CENTER_OF_MASS_PROPERTY_H

#include "pc_property.h"
#include "propertyEnum.h"
#include <geometry_msgs/Point.h>


class CenterOfMassProperty: public PCProperty
{
	public:
		geometry_msgs::Point centerOfMassPoint;

		CenterOfMassProperty(geometry_msgs::Point center_of_mass_point)
		{
			uniquePropertyType = CENTER_OF_MASS;
			uniquePropertyId = getNextPropertyId();
			centerOfMassPoint = center_of_mass_point;
		};	

}; 

#endif