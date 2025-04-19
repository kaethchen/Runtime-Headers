@class _TtC16CryptoKitPrivate10KVACServer;

@interface KVACTestServer : NSObject

@property (readonly, nonatomic) _TtC16CryptoKitPrivate10KVACServer *server;

- (id)init;
- (void).cxx_destruct;
- (id)getServerCommitments;
- (id)respondWithRequestData:(id)a0 error:(id *)a1;
- (BOOL)verifyWithPresentationData:(id)a0 requestContext:(id)a1 presentationContext:(id)a2 presentationLimit:(unsigned long long)a3;

@end
