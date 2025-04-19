@class POUserLoginConfiguration, NSString;

@interface ASAuthorizationProviderExtensionUserLoginConfiguration : NSObject

@property (readonly, nonatomic) POUserLoginConfiguration *userLoginConfiguration;
@property (copy, nonatomic) NSString *loginUserName;

- (void).cxx_destruct;
- (id)initWithUserLoginConfiguration:(id)a0;
- (id)initWithLoginUserName:(id)a0;
- (BOOL)setCustomAssertionRequestBodyClaims:(id)a0 returningError:(id *)a1;
- (BOOL)setCustomAssertionRequestHeaderClaims:(id)a0 returningError:(id *)a1;
- (BOOL)setCustomLoginRequestBodyClaims:(id)a0 returningError:(id *)a1;
- (BOOL)setCustomLoginRequestHeaderClaims:(id)a0 returningError:(id *)a1;

@end
