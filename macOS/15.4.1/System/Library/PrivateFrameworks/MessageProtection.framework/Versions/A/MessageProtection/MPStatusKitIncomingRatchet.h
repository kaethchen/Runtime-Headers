@class _TtC17MessageProtection17SKIncomingRatchet;

@interface MPStatusKitIncomingRatchet : NSObject

@property (retain, nonatomic) _TtC17MessageProtection17SKIncomingRatchet *ratchet;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)serializedData;
- (id)initWithIndex:(unsigned short)a0 chainKey:(id)a1 signingKey:(id)a2 error:(id *)a3;
- (unsigned long long)maxForwardRatchetDelta;
- (id)signingKeyIdentifier;
- (id)unsealStatusWithIndex:(unsigned short)a0 encryptedMessage:(id)a1 authenticating:(id)a2 signature:(id)a3 error:(id *)a4;

@end
