@interface AVB17221AECPAEMEnableStreamEncryptionMessage : AVB17221AECPAEMDescriptorMessage

@property (nonatomic) unsigned long long keyID;

+ (id)keyPathsForValuesAffectingKeyID;

- (unsigned long long)keyID;
- (void)setKeyID:(unsigned long long)a0;
- (unsigned long long)minimumMutableCommandSpecificLength;

@end
