@class CTSubscriberAuthDataHolder;

@interface CTXPCSubscriberAuthenticateResponse : CTXPCResponseMessage

@property (readonly, nonatomic) CTSubscriberAuthDataHolder *authInfo;

+ (id)allowedClassesForArguments;

- (id)initWithAuthInfo:(id)a0;

@end
