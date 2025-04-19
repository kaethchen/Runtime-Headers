@class NSSet;

@interface _GCDevicePhysicalInputAxis2DInputParameters : _GCDevicePhysicalInputViewParameters {
    BOOL _analog;
    BOOL _canWrap;
    NSSet *_sources;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
