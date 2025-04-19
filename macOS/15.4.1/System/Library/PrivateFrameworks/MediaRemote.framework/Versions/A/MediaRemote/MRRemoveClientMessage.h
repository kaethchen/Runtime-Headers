@class MRClient;

@interface MRRemoveClientMessage : MRProtocolMessage

@property (readonly, nonatomic) MRClient *client;

- (unsigned long long)type;
- (id)initWithClient:(id)a0;

@end
