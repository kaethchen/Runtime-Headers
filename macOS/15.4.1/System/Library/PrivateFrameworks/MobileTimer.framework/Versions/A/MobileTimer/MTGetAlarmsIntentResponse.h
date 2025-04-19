@class NSArray;

@interface MTGetAlarmsIntentResponse : INIntentResponse

@property long long code;
@property (copy, nonatomic) NSArray *alarms;

+ (id)successIntentResponseWithAlarms:(id)a0;

- (id)initWithCode:(long long)a0 userActivity:(id)a1;

@end
