@class NSArray;

@interface EWSGetStreamingEventsType : EWSBaseRequestType

@property (copy, nonatomic) NSArray *SubscriptionIds;
@property (nonatomic) long long ConnectionTimeout;

+ (id)definition;

- (void).cxx_destruct;

@end
