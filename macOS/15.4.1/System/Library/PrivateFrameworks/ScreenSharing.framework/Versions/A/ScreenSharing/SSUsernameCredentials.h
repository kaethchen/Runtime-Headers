@class NSString;

@interface SSUsernameCredentials : SSCredentials

@property (readonly) NSString *username;

+ (id)askToControlCredentialsWithUsername:(id)a0;
+ (id)askToObserveCredentialsWithUsername:(id)a0;

- (void)dealloc;
- (id)initWithAuthenticationType:(id)a0 withUsername:(id)a1;

@end
