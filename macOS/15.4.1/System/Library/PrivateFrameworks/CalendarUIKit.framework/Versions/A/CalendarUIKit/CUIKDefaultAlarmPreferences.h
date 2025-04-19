@class NSNumber;

@interface CUIKDefaultAlarmPreferences : NSObject

@property (class, readonly, nonatomic) NSNumber *defaultTimedAlarmOffset;
@property (class, readonly, nonatomic) NSNumber *defaultAllDayAlarmOffset;

+ (id)defaultAlarmOffsetForAlarmType:(int)a0 eventStore:(id)a1;
+ (id)defaultBirthdayAlarmOffsetWithEventStore:(id)a0;
+ (void)setDefaultAlarmOffset:(id)a0 forAlarmType:(int)a1 eventStore:(id)a2;

@end
