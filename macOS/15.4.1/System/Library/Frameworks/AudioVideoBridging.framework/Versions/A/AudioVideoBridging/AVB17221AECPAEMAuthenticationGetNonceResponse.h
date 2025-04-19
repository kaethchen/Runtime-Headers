@interface AVB17221AECPAEMAuthenticationGetNonceResponse : AVB17221AECPAEMMessage

@property (nonatomic) unsigned long long controllerNonce;
@property (nonatomic) unsigned long long targetNonce;

+ (id)commandMessage;
+ (id)keyPathsForValuesAffectingControllerNonce;
+ (id)keyPathsForValuesAffectingTargetNonce;

- (id)init;
- (unsigned long long)controllerNonce;
- (void)setTargetNonce:(unsigned long long)a0;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (void)setControllerNonce:(unsigned long long)a0;
- (unsigned long long)targetNonce;

@end
