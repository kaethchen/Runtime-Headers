@class DNDScheduleTimePeriod;

@interface DNDMutableScheduleSettings : DNDScheduleSettings

@property unsigned long long scheduleEnabledSetting;
@property (copy) DNDScheduleTimePeriod *timePeriod;
@property unsigned long long bedtimeBehaviorEnabledSetting;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setTimePeriod:(id)a0;
- (void)setBedtimeBehaviorEnabledSetting:(unsigned long long)a0;
- (void)setScheduleEnabledSetting:(unsigned long long)a0;

@end
