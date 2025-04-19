@class NSString;

@interface SSKerberosCredentials : SSCredentials

@property (readonly) NSString *clientPrincipal;
@property (readonly) NSString *servicePrincipal;
@property (readonly) NSString *username;

+ (id)kerberosCredentialsWithClientPrincipal:(id)a0 withServicePrincipal:(id)a1;

- (void)dealloc;
- (id)description;
- (id)initWithAuthenticationType:(id)a0 withClientPrincipal:(id)a1 withServicePrincipal:(id)a2;

@end
