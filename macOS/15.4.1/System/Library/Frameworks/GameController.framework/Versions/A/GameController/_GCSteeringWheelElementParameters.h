@class NSSet;

@interface _GCSteeringWheelElementParameters : _GCDevicePhysicalInputElementParameters {
    float _maximumDegreesOfRotation;
    NSSet *_sources;
    unsigned long long _eventRotationValueField;
}

+ (Class)viewClass;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
