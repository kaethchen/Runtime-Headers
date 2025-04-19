@class NSString;

@interface ASKLoadAvatarResourceOperation : ASKLoadResourceOperation

@property (readonly, copy, nonatomic) NSString *playerId;

+ (id)supportedScheme;

- (void).cxx_destruct;
- (void)main;
- (id)initWithPlayerId:(id)a0;
- (id)initWithURLRequest:(id)a0 URLSession:(id)a1 dataConsumer:(id)a2;
- (id)makePlayerFetchError;

@end
