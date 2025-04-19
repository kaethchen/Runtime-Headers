@class NSDictionary;

@interface AISDGameCenterSignInHelper : NSObject

@property (readonly, nonatomic) NSDictionary *authenticationResults;

- (void).cxx_destruct;
- (id)initWithAuthenticationResults:(id)a0;
- (void)signInWithCompletionHandler:(id /* block */)a0;

@end
