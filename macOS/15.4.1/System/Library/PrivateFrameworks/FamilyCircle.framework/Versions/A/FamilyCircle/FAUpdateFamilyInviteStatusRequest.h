@class NSString, NSDictionary;

@interface FAUpdateFamilyInviteStatusRequest : FAFamilyCircleRequest

@property (readonly, copy) NSString *inviteCode;
@property (readonly) long long inviteStatus;
@property (readonly, copy) NSDictionary *additionalRequestParameters;
@property (readonly) long long responseFormat;

- (void).cxx_destruct;
- (void)startRequestWithCompletionHandler:(id /* block */)a0;
- (id)initWithInviteCode:(id)a0 inviteStatus:(long long)a1 responseFormat:(long long)a2 additionalRequestParameters:(id)a3;

@end
