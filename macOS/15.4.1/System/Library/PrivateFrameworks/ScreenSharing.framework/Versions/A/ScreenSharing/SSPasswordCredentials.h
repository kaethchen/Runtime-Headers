@class NSString;

@interface SSPasswordCredentials : SSCredentials

@property (retain) NSString *password;

+ (id)vncAuthenticationCredentialsWithPassword:(id)a0;

- (void)dealloc;
- (id)initWithAuthenticationType:(id)a0 withPassword:(id)a1;

@end
