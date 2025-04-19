@interface EWSPullSubscriptionRequestType : EWSBaseSubscriptionRequestType

@property (nonatomic) long long Timeout;
@property (nonatomic) BOOL TimeoutIsSpecified;

+ (id)definition;

@end
