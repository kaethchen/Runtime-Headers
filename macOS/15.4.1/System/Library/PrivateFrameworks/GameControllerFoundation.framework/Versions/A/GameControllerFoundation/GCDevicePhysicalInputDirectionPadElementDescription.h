@class NSArray;

@interface GCDevicePhysicalInputDirectionPadElementDescription : GCDevicePhysicalInputElementDescription <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *xySources;
@property (copy, nonatomic) NSArray *xSources;
@property (copy, nonatomic) NSArray *ySources;
@property (copy, nonatomic) NSArray *upSources;
@property (copy, nonatomic) NSArray *leftSources;
@property (copy, nonatomic) NSArray *downSources;
@property (copy, nonatomic) NSArray *rightSources;
@property (nonatomic, getter=isAnalog) BOOL analog;
@property (nonatomic) unsigned long long eventUpValueField;
@property (nonatomic) unsigned long long eventDownValueField;
@property (nonatomic) unsigned long long eventLeftValueField;
@property (nonatomic) unsigned long long eventRightValueField;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
