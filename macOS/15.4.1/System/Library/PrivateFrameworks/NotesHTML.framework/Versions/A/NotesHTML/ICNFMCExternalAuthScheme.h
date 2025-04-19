@interface ICNFMCExternalAuthScheme : ICNFMCAuthScheme

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)externalAuthScheme;

- (void)dealloc;
- (id)name;
- (id)humanReadableName;
- (BOOL)requiresPassword;
- (unsigned int)applescriptScheme;
- (BOOL)requiresUsername;
- (id)supportedSaslMechanisms;

@end
