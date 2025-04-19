@class MRClient;

@interface MRSetNowPlayingClientMessage : MRProtocolMessage

@property (readonly, nonatomic) MRClient *client;

- (unsigned long long)type;
- (id)initWithClient:(id)a0;

@end
