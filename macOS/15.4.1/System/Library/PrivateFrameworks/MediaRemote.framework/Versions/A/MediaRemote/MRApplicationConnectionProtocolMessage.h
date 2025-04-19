@class MRApplicationConnectionMessage, MRApplicationConnectionContext;

@interface MRApplicationConnectionProtocolMessage : MRProtocolMessage

@property (readonly, nonatomic) MRApplicationConnectionMessage *message;
@property (readonly, nonatomic) MRApplicationConnectionContext *context;

- (unsigned long long)type;
- (id)initWithMessage:(id)a0 connectionContext:(id)a1;

@end
