@class NSSet;

@interface _GCDevicePhysicalInputButtonInputParameters : _GCDevicePhysicalInputViewParameters {
    BOOL _analog;
    float _pressedThreshold;
    NSSet *_sources;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
