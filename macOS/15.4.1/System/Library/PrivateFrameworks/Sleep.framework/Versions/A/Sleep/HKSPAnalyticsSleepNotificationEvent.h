@class NSString, NSDictionary, NSArray;

@interface HKSPAnalyticsSleepNotificationEvent : NSObject <HKSPAnalyticsEvent>

@property (retain, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSDictionary *eventPayload;
@property (readonly, nonatomic) NSArray *keysRequiringIHAGating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 action:(unsigned long long)a1;

@end
