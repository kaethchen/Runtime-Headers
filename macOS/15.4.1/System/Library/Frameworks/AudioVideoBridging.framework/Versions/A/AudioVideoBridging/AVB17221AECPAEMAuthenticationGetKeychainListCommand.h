@interface AVB17221AECPAEMAuthenticationGetKeychainListCommand : AVB17221AECPAEMMessage

@property (nonatomic) unsigned short keychainID;
@property (nonatomic) unsigned short listIndex;

+ (id)responseMessage;
+ (id)keyPathsForValuesAffectingKeychainID;
+ (id)keyPathsForValuesAffectingListIndex;

- (id)init;
- (unsigned short)listIndex;
- (void)setListIndex:(unsigned short)a0;
- (unsigned short)keychainID;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (void)setKeychainID:(unsigned short)a0;

@end
