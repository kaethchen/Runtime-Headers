@class NSSet;

@interface _GCDevicePhysicalInputClickableDirectionPadElementParameters : _GCDevicePhysicalInputDirectionPadElementParameters {
    NSSet *_pressedSources;
    unsigned long long _eventPressedValueField;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
