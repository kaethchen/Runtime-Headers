@interface CESAudioAlarmEntityWrapper : CESAlarmEntityWrapper

+ (id)defaultWrapper;

- (id)entityName;
- (id)fullName;
- (BOOL)alarmMatchesClassType:(id)a0;

@end
