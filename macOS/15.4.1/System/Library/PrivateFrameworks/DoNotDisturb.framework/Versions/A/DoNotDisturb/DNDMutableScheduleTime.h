@interface DNDMutableScheduleTime : DNDScheduleTime

@property unsigned long long hour;
@property unsigned long long minute;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setHour:(unsigned long long)a0;
- (void)setMinute:(unsigned long long)a0;

@end
