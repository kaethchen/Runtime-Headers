@interface AVB17221AECPAEMAuthenticationGetKeyListCommand : AVB17221AECPAEMMessage

@property (nonatomic) unsigned short keychainID;

+ (id)responseMessage;
+ (id)keyPathsForValuesAffectingKeychainID;

- (id)init;
- (unsigned short)keychainID;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (void)setKeychainID:(unsigned short)a0;

@end
