@interface SUOSULoginCredentialPolicy : NSObject

@property (class) unsigned long long lastVendedPolicyMode;

+ (unsigned long long)currentLoginCredentialPolicy;
+ (void)setExternalizedLocalAuthenticationContextData:(id)a0;

@end
