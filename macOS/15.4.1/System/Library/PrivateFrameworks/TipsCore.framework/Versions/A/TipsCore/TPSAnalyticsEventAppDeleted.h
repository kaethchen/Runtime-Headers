@interface TPSAnalyticsEventAppDeleted : TPSAnalyticsEvent

+ (BOOL)supportsSecureCoding;
+ (id)event;

- (id)eventName;
- (id)appLaunches;
- (id)desiredOutcomeTotal;
- (id)mutableAnalyticsEventRepresentation;
- (id)notificationsPosted;
- (double)timeSinceLastNotification;
- (id)tipViewTotal;

@end
