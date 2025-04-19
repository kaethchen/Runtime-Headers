@class NSString;

@interface EWSUnsubscribeType : EWSBaseRequestType

@property (copy, nonatomic) NSString *SubscriptionId;

+ (id)definition;

- (void).cxx_destruct;

@end
