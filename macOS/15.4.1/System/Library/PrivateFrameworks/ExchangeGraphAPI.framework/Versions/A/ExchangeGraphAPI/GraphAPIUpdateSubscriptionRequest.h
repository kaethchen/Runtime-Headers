@class NSString;

@interface GraphAPIUpdateSubscriptionRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *subscriptionId;
@property (copy, nonatomic) NSString *changeType;
@property (copy, nonatomic) NSString *notificationUrl;
@property (copy, nonatomic) NSString *subscriptionResource;
@property (copy, nonatomic) NSString *expirationDateTime;

- (void).cxx_destruct;
- (id)resource;
- (id)body;
- (id)httpMethod;

@end
