@class _TtC16CryptoKitPrivate10KVACClient, NSData;

@interface KVACAwaitingActivation : NSObject

@property (readonly, nonatomic) _TtC16CryptoKitPrivate10KVACClient *client;
@property (readonly, retain, nonatomic) NSData *requestData;

- (void).cxx_destruct;
- (id)activateWithResponseData:(id)a0 error:(id *)a1;
- (id)initWithRequestContext:(id)a0 serverCommitments:(id)a1 presentationLimit:(unsigned long long)a2 error:(id *)a3;

@end
