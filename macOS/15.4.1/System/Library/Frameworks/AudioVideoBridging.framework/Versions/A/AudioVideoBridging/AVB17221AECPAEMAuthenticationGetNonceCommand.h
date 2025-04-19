@interface AVB17221AECPAEMAuthenticationGetNonceCommand : AVB17221AECPAEMMessage

@property (nonatomic) unsigned long long controllerNonce;

+ (id)responseMessage;
+ (id)keyPathsForValuesAffectingControllerNonce;

- (id)init;
- (unsigned long long)controllerNonce;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (void)setControllerNonce:(unsigned long long)a0;

@end
