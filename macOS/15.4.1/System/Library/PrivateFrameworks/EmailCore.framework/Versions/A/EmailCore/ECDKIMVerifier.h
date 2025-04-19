@protocol ECDKIMPublicKeySource;

@interface ECDKIMVerifier : NSObject

@property (readonly, nonatomic) id<ECDKIMPublicKeySource> publicKeySource;

- (id)init;
- (void).cxx_destruct;
- (id)verificationContextForMessageData:(id)a0 error:(id *)a1;
- (BOOL)verifyMessageWithContext:(id)a0 options:(long long)a1 error:(out id *)a2;
- (id)_base64HashBodyData:(id)a0 usingSignature:(id)a1;
- (void)_canonicalizeBodyDataUsingRelaxedAlgorithm:(id)a0;
- (void)_canonicalizeBodyDataUsingSimpleAlgorithm:(id)a0;
- (id)_canonicalizeHeaders:(id)a0 usingRelaxedAlgorithmWithSignatureHeader:(id)a1;
- (id)_canonicalizeHeaders:(id)a0 usingSimpleAlgorithmWithSignatureHeader:(id)a1;
- (id)_relaxedCanonicalizationForHeaderName:(id)a0 headerBody:(id)a1;
- (id)_verifyMessage:(id)a0 withDKIMSignatureHeaders:(id)a1 publicKeySource:(id)a2 options:(long long)a3 error:(out id *)a4;
- (BOOL)_verifyMessageBodyData:(id)a0 withOptions:(long long)a1 usingSignature:(id)a2;
- (BOOL)_verifyMessageHeaders:(id)a0 usingSignature:(id)a1 publicKeySource:(id)a2 error:(out id *)a3;
- (id)initWithPublicKeySource:(id)a0;
- (id)verifiableMessageForMessageData:(id)a0 dkimSignatureHeaders:(out id *)a1 error:(out id *)a2;
- (id)verifyMessage:(id)a0 withDKIMSignatureHeaders:(id)a1 options:(long long)a2 error:(out id *)a3;
- (BOOL)verifyMessageData:(id)a0;
- (BOOL)verifyMessageData:(id)a0 options:(long long)a1;
- (BOOL)verifyMessageData:(id)a0 publicKeySource:(id)a1 options:(long long)a2;
- (BOOL)verifyMessageWithContext:(id)a0 publicKeySource:(id)a1 options:(long long)a2 error:(out id *)a3;

@end
