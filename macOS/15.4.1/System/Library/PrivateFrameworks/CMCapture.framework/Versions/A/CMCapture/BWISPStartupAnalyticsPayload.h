@class NSString;

@interface BWISPStartupAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>

@property (nonatomic) int ispStartupTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)reset;
- (id)eventName;
- (id)eventDictionary;

@end
