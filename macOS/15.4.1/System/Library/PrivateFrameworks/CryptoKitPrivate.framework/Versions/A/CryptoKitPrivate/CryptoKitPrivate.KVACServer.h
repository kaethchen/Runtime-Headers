@interface CryptoKitPrivate.KVACServer : NSObject {
    void /* unknown type, empty encoding */ server;
}

- (id)init;
- (void).cxx_destruct;
- (id)getServerCommitments;
- (id)respondWithRequestData:(id)a0 error:(id *)a1;
- (BOOL)verifyWithPresentationData:(id)a0 requestContext:(id)a1 presentationContext:(id)a2 presentationLimit:(long long)a3;

@end
