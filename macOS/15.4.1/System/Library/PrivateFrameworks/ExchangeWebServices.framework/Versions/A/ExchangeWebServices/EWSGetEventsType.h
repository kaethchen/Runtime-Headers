@class NSString;

@interface EWSGetEventsType : EWSBaseRequestType

@property (copy, nonatomic) NSString *SubscriptionId;
@property (copy, nonatomic) NSString *Watermark;

+ (id)definition;

- (void).cxx_destruct;

@end
