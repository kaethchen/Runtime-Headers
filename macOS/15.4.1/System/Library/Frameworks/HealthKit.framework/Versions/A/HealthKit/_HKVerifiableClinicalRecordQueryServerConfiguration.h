@class NSArray;

@interface _HKVerifiableClinicalRecordQueryServerConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) NSArray *recordTypes;
@property (copy, nonatomic) NSArray *sourceTypes;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
