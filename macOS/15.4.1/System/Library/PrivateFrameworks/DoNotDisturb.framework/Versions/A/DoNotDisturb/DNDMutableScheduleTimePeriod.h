@class DNDScheduleTime;

@interface DNDMutableScheduleTimePeriod : DNDScheduleTimePeriod

@property (copy) DNDScheduleTime *startTime;
@property (copy) DNDScheduleTime *endTime;
@property unsigned long long weekdays;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setStartTime:(id)a0;
- (void)setEndTime:(id)a0;
- (void)setWeekdays:(unsigned long long)a0;

@end
