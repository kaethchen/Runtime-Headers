@class CTLazuliDeepLinkBase64String;

@interface CTXPCDecodeSuggestionsBase64Request : CTXPCSubscriptionContextRequest

@property (readonly, nonatomic) CTLazuliDeepLinkBase64String *base64String;

+ (id)allowedClassesForArguments;

- (int)requiredEntitlement;
- (id)initWithContext:(id)a0 base64String:(id)a1;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
