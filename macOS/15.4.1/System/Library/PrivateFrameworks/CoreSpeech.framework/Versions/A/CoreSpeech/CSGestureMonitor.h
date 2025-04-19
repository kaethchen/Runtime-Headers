@interface CSGestureMonitor : CSEventMonitor

@property (nonatomic) unsigned long long wakeGestureTimestamp;
@property (nonatomic) unsigned long long dismissalTimestamp;

+ (id)sharedInstance;

- (BOOL)isTriggerHandheld;

@end
