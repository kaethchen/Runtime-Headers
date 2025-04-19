@class NSString;

@interface SSUsernamePasswordCredentials : SSCredentials

@property (retain) NSString *username;
@property (retain) NSString *password;
@property (retain) NSString *label;
@property BOOL serverSupportsSRP;

+ (id)diffieHellmanCredentialsWithUsername:(id)a0 withPassword:(id)a1 label:(id)a2;
+ (id)rsaCredentialsWithUsername:(id)a0 withPassword:(id)a1 label:(id)a2 srp:(BOOL)a3;
+ (id)srpCredentialsWithUsername:(id)a0 withPassword:(id)a1;

- (void)dealloc;
- (id)initWithAuthenticationType:(id)a0 withUsername:(id)a1 withPassword:(id)a2;

@end
