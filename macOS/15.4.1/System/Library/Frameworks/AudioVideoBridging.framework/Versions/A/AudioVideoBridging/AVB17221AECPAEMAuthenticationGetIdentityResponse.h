@class NSData;

@interface AVB17221AECPAEMAuthenticationGetIdentityResponse : AVB17221AECPAEMMessage

@property (nonatomic) unsigned long long keyID;
@property (copy, nonatomic) NSData *signatureC;
@property (copy, nonatomic) NSData *signatureD;

+ (id)keyPathsForValuesAffectingKeyID;
+ (id)commandMessage;
+ (id)keyPathsForValuesAffectingSignatureC;
+ (id)keyPathsForValuesAffectingSignatureD;

- (id)init;
- (unsigned long long)keyID;
- (void)setKeyID:(unsigned long long)a0;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (void)setSignatureC:(id)a0;
- (void)setSignatureD:(id)a0;
- (id)signatureC;
- (id)signatureD;

@end
