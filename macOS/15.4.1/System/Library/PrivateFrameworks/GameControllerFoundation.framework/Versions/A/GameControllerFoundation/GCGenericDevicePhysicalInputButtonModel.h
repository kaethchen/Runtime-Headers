@interface GCGenericDevicePhysicalInputButtonModel : GCGenericDevicePhysicalInputElementModel

@property (readonly) double pressedThreshold;
@property (readonly) double touchedThreshold;
@property (readonly) long long sourcePressedValueExtendedEventFieldIndex;
@property (readonly) long long sourceTouchedValueExtendedEventFieldIndex;

+ (id)description;
+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
