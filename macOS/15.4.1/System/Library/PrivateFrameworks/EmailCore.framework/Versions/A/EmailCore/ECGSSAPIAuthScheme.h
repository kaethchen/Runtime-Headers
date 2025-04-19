@interface ECGSSAPIAuthScheme : ECAuthScheme

@property (class, readonly) ECGSSAPIAuthScheme *gssapiAuthScheme;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)dealloc;
- (id)name;
- (id)humanReadableName;
- (BOOL)requiresPassword;
- (unsigned int)applescriptScheme;
- (id)supportedSASLMechanisms;

@end
