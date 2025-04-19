@class NSArray;

@interface ClocksSingleIntentResponse : INIntentResponse

@property long long code;
@property (copy, nonatomic) NSArray *clocks;

- (id)initWithCode:(long long)a0 userActivity:(id)a1;

@end
