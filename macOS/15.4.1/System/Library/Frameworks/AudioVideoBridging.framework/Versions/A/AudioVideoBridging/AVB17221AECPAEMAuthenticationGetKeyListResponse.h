@interface AVB17221AECPAEMAuthenticationGetKeyListResponse : AVB17221AECPAEMMessage

@property (nonatomic) unsigned short keychainID;
@property (nonatomic) unsigned short numberOfKeys;

+ (id)commandMessage;
+ (id)keyPathsForValuesAffectingKeychainID;
+ (id)keyPathsForValuesAffectingNumberOfKeys;

- (id)init;
- (unsigned short)numberOfKeys;
- (unsigned short)keychainID;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (void)setKeychainID:(unsigned short)a0;
- (void)setNumberOfKeys:(unsigned short)a0;

@end
