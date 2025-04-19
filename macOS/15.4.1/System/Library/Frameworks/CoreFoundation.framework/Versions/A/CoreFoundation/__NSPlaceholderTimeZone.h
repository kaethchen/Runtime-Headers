@interface __NSPlaceholderTimeZone : NSTimeZone

- (oneway void)release;
- (void)dealloc;
- (id)init;
- (id)name;
- (id)retain;
- (unsigned long long)retainCount;
- (id)abbreviationForDate:(id)a0;
- (id)data;
- (double)daylightSavingTimeOffsetForDate:(id)a0;
- (id)initWithName:(id)a0;
- (id)initWithName:(id)a0 data:(id)a1;
- (BOOL)isDaylightSavingTimeForDate:(id)a0;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)a0;
- (long long)secondsFromGMTForDate:(id)a0;

@end
