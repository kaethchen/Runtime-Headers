@class NSSet;

@interface _GCDevicePhysicalInputButtonElementParameters : _GCDevicePhysicalInputElementParameters {
    BOOL _analog;
    float _pressedThreshold;
    NSSet *_sources;
    unsigned long long _eventPressedValueField;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
