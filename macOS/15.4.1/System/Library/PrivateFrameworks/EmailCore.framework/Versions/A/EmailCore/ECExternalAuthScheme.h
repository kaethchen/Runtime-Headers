@interface ECExternalAuthScheme : ECAuthScheme

@property (class, readonly) ECExternalAuthScheme *externalAuthScheme;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)dealloc;
- (id)name;
- (id)humanReadableName;
- (BOOL)requiresPassword;
- (unsigned int)applescriptScheme;
- (BOOL)requiresUsername;
- (id)supportedSASLMechanisms;

@end
