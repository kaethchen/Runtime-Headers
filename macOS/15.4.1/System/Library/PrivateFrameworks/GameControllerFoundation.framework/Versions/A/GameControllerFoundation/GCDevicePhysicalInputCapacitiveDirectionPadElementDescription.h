@class NSArray;

@interface GCDevicePhysicalInputCapacitiveDirectionPadElementDescription : GCDevicePhysicalInputClickableDirectionPadElementDescription <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *touchedSources;
@property (nonatomic) unsigned long long eventTouchedValueField;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
