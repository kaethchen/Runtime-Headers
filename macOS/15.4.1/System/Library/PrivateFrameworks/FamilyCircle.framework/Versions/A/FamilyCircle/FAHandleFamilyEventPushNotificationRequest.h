@class NSDictionary;

@interface FAHandleFamilyEventPushNotificationRequest : FAFamilyCircleRequest

@property (readonly) NSDictionary *payload;

- (void).cxx_destruct;
- (id)initWithPayload:(id)a0;
- (void)startRequestWithCompletionHandler:(id /* block */)a0;

@end
