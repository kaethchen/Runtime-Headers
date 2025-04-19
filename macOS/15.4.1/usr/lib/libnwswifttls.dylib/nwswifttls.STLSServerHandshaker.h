@interface nwswifttls.STLSServerHandshaker : NSObject <nwswifttls.STLSHandshaker> {
    void /* unknown type, empty encoding */ stateMachine;
    void /* unknown type, empty encoding */ partialHandshakeResult;
    void /* unknown type, empty encoding */ readEncryptionLevel;
    void /* unknown type, empty encoding */ writeEncryptionLevel;
    void /* unknown type, empty encoding */ latestError;
    void /* unknown type, empty encoding */ clientAppSecret;
}

- (id)init;
- (void).cxx_destruct;
- (id)continueHandshake:(id)a0;
- (long long)getEncryptionLevelWithWrite:(BOOL)a0;
- (id)getEncryptionSecretWithWrite:(BOOL)a0;
- (int)getErrorCode;
- (long long)getNegotiatedCiphersuite;
- (id)getPeerQUICTransportParameters;
- (id)init:(id)a0 serverKey:(struct __SecKey { } *)a1 quicTransportParameters:(id)a2 alpn:(id)a3;
- (long long)isImplemented;

@end
