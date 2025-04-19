@interface AVB17221AECPAEMAuthenticationKeychainKeyIDMessage : AVB17221AECPAEMMessage

@property (nonatomic) unsigned short keychainID;
@property (nonatomic) unsigned long long keyID;

+ (id)keyPathsForValuesAffectingKeyID;
+ (id)keyPathsForValuesAffectingKeychainID;

- (unsigned long long)keyID;
- (void)setKeyID:(unsigned long long)a0;
- (unsigned short)keychainID;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (void)setKeychainID:(unsigned short)a0;

@end
