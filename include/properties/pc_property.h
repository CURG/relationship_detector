#ifndef PC_PROPERTY_H
#define PC_PROPERTY_H

class PCProperty
{
  public:
    static int property_id_generator;

    int uniquePropertyType;

    int uniquePropertyId;

    int recognizedObjectId;

    int getNextPropertyId();

    virtual ~PCProperty(){};

};

#endif