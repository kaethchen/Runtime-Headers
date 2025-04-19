@class AVB17221AEMAuthenticationKey;

@interface AVB17221AECPAEMAuthenticationKeyMessage : AVB17221AECPAEMAuthenticationKeyIDMessage

@property (copy, nonatomic) AVB17221AEMAuthenticationKey *key;

+ (id)keyPathsForValuesAffectingKey;

- (id)key;
- (void)setKey:(id)a0;
- (unsigned long long)minimumMutableCommandSpecificLength;

@end
