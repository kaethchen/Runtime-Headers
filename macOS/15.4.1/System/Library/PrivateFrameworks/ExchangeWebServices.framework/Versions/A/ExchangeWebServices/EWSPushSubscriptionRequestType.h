@class NSString;

@interface EWSPushSubscriptionRequestType : EWSBaseSubscriptionRequestType

@property (nonatomic) long long StatusFrequency;
@property (nonatomic) BOOL StatusFrequencyIsSpecified;
@property (copy, nonatomic) NSString *URL;

+ (id)definition;

- (void).cxx_destruct;

@end
