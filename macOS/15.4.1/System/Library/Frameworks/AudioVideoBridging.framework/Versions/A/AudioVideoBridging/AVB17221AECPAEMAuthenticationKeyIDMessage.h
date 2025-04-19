@interface AVB17221AECPAEMAuthenticationKeyIDMessage : AVB17221AECPAEMMessage

@property (nonatomic) unsigned long long keyID;

+ (id)keyPathsForValuesAffectingKeyID;

- (unsigned long long)keyID;
- (void)setKeyID:(unsigned long long)a0;
- (unsigned long long)minimumMutableCommandSpecificLength;

@end
