@class NSData;

@interface ASTAuthInfoResult : ASTSealablePayload

@property (retain) NSData *attestation;
@property (retain) NSData *cert;
@property long long type;
@property long long error;

+ (id)authInfoResultWithAttestation:(id)a0;
+ (id)authInfoResultWithAttestation:(id)a0 certificate:(id)a1 type:(long long)a2 error:(long long)a3;
+ (id)sealedAuthInfoResultWithPayload:(id)a0 signature:(id)a1;

- (void).cxx_destruct;
- (id)generatePayload;

@end
