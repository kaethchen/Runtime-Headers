@class NSDateComponents, NSDate;

@interface _HKActivityStatisticsQueryServerConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSDateComponents *moveIntervalComponents;
@property (copy, nonatomic) NSDateComponents *exerciseIntervalComponents;
@property (nonatomic) double updateInterval;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
