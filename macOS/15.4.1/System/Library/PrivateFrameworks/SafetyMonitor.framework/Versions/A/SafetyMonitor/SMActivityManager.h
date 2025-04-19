@interface SMActivityManager : NSObject

+ (void)endActivities;
+ (BOOL)hasActivity;
+ (void)startActivityWithState:(id)a0 localState:(id)a1;
+ (void)updateActivityWithState:(id)a0 localState:(id)a1 shouldNotify:(BOOL)a2;

@end
