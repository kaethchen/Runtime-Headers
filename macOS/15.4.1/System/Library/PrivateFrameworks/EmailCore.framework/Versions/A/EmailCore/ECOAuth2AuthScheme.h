@interface ECOAuth2AuthScheme : ECAuthScheme

@property (class, readonly) ECOAuth2AuthScheme *oauth2AuthScheme;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)dealloc;
- (id)name;
- (id)humanReadableName;
- (BOOL)requiresPassword;
- (unsigned int)applescriptScheme;
- (BOOL)requiresUsername;
- (id)supportedSASLMechanisms;

@end
