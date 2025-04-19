@class NSData;

@interface FARegisterPushTokenRequest : FAFamilyCircleRequest

@property (readonly, copy) NSData *pushToken;

- (void).cxx_destruct;
- (void)startRequestWithCompletionHandler:(id /* block */)a0;
- (id)initWithPushToken:(id)a0;

@end
