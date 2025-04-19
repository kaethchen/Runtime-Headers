@interface MRIDSClientConnection : MRProtocolClientConnection

@property (nonatomic) unsigned int discoveryMode;

- (id)initWithConnection:(id)a0 replyQueue:(id)a1;

@end
