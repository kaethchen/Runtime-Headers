@class NSSet;

@interface _GCGearShifterElementParameters : _GCDevicePhysicalInputElementParameters {
    BOOL _patternShifter;
    NSSet *_sources;
    unsigned long long _eventShifterValueField;
    struct _NSRange { unsigned long long location; unsigned long long length; } _positionRange;
}

+ (Class)viewClass;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
