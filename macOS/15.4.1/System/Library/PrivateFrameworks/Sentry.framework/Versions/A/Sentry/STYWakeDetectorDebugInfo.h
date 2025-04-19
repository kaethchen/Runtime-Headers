@interface STYWakeDetectorDebugInfo : NSObject

@property (nonatomic) struct { unsigned long long eventTimestamps[9]; unsigned long long previousEventTimestamps[9]; } state;
@property (nonatomic) unsigned long long lastWakeTime;
@property (nonatomic) unsigned long long physicalWakeAdjustment;
@property (nonatomic) unsigned long long lastHIDWakeEvent;

- (void)logDebugInfoInSignpost;

@end
