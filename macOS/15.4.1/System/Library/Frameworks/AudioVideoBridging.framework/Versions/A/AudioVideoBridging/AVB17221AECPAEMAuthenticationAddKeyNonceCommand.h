@class AVB17221AEMAuthenticationKey;

@interface AVB17221AECPAEMAuthenticationAddKeyNonceCommand : AVB17221AECPAEMMessage

@property (nonatomic) unsigned long long controllerNonce;
@property (nonatomic) unsigned long long targetNonce;
@property (nonatomic) unsigned long long keyID;
@property (copy, nonatomic) AVB17221AEMAuthenticationKey *key;

+ (id)responseMessage;
+ (id)keyPathsForValuesAffectingKeyID;
+ (id)keyPathsForValuesAffectingControllerNonce;
+ (id)keyPathsForValuesAffectingKey;
+ (id)keyPathsForValuesAffectingTargetNonce;

- (id)init;
- (id)key;
- (void)setKey:(id)a0;
- (unsigned long long)keyID;
- (void)setKeyID:(unsigned long long)a0;
- (unsigned long long)controllerNonce;
- (void)setTargetNonce:(unsigned long long)a0;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (void)setControllerNonce:(unsigned long long)a0;
- (unsigned long long)targetNonce;

@end
