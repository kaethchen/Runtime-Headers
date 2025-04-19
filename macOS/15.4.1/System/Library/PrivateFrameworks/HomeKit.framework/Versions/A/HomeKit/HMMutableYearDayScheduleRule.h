@class NSString, NSDateInterval, NSArray, NSDate;

@interface HMMutableYearDayScheduleRule : HMYearDayScheduleRule <HMFObject>

@property (copy) NSDate *startDate;
@property (copy) NSDate *endDate;
@property (copy) NSDateInterval *dateInterval;
@property (copy) NSDate *validFrom;
@property (copy) NSDate *validUntil;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)setValidUntil:(id)a0;
- (void)setValidFrom:(id)a0;

@end
