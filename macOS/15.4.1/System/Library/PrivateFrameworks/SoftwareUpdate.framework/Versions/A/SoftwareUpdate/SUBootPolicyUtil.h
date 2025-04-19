@interface SUBootPolicyUtil : NSObject

@property (class) SUBootPolicyUtil *sharedInstance;

- (id)bootPolicyCount;
- (unsigned char)_byteForNVRAMKey:(id)a0 namespace:(id)a1;
- (id)bootPolicyDigestTagExists:(unsigned int)a0;
- (id)bootPolicyIntegerTagExists:(unsigned int)a0;
- (id)bootPolicySecurityMode;
- (id)bootPolicyValueForBooleanTag:(unsigned int)a0;
- (unsigned char)secureBootPolicy;
- (BOOL)startupManagerAllowsAppleExternalDrive;
- (BOOL)startupManagerAllowsAppleNetwork;
- (BOOL)startupManagerAllowsWindows;
- (unsigned char)startupManagerPolicy;
- (BOOL)supportsBootPolicy;

@end
