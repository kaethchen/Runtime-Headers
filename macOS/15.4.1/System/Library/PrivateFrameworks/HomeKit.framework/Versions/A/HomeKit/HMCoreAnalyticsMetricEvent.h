@class NSString, NSError;

@interface HMCoreAnalyticsMetricEvent : HMFObject

@property (readonly, copy) NSString *name;
@property (retain) NSError *error;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)eventPayload;

@end
