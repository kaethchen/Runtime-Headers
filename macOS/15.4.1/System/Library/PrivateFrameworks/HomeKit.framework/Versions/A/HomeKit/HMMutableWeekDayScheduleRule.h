@class NSDateComponents;

@interface HMMutableWeekDayScheduleRule : HMWeekDayScheduleRule

@property (copy) NSDateComponents *startTime;
@property (copy) NSDateComponents *endTime;
@property unsigned long long daysOfTheWeek;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
