@class NSDateComponents, NSDate;

@interface _HKWorkoutTrainingLoadCollectionQueryServerConfiguration : HKQueryServerConfiguration

@property (nonatomic) long long options;
@property (copy, nonatomic) NSDate *anchorDate;
@property (copy, nonatomic) NSDateComponents *intervalComponents;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
