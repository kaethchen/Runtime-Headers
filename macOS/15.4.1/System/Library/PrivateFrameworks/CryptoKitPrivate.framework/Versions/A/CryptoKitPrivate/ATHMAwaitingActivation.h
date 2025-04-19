@class NSData, _TtC16CryptoKitPrivate10ATHMClient;

@interface ATHMAwaitingActivation : NSObject

@property (readonly, nonatomic) _TtC16CryptoKitPrivate10ATHMClient *client;
@property (readonly, retain, nonatomic) NSData *requestData;

+ (BOOL)verifyKeyCommitmentsData:(id)a0;

- (void).cxx_destruct;
- (id)activateWithResponseData:(id)a0 error:(id *)a1;
- (id)initWithKeyCommitmentsData:(id)a0 error:(id *)a1;

@end
