@class NSArray;

@interface HMMutableRestrictedGuestSchedule : HMRestrictedGuestHomeAccessSchedule

@property (copy) NSArray *weekDayRules;
@property (copy) NSArray *yearDayRules;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
