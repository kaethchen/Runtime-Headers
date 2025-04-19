@class NSData, _TtC16CryptoKitPrivate10ATHMServer;

@interface ATHMTestServer : NSObject

@property (readonly, nonatomic) _TtC16CryptoKitPrivate10ATHMServer *server;
@property (readonly, retain, nonatomic) NSData *keyCommitmentsData;

- (void).cxx_destruct;
- (id)initWithError:(id *)a0;
- (id)respondWithRequestData:(id)a0 b:(id)a1 error:(id *)a2;
- (id)readBitWithPresentationData:(id)a0 error:(id *)a1;

@end
