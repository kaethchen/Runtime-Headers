@class VBXPCConnectionTransport;

@interface VBXPCConnection : NSXPCConnection {
    VBXPCConnectionTransport *_transport;
}

@property (readonly) double replyPatience;

- (void).cxx_destruct;
- (id)initWithListenerEndpoint:(id)a0 andReplyPatience:(double)a1;
- (id)initWithUnderlyingConnection:(id)a0 andReplyPatience:(double)a1;
- (id)mutateIncomingMessage:(id)a0;
- (id)mutateOutgoingMessage:(id)a0 withReplyIdentifier:(unsigned int)a1;
- (id)mutateReply:(id)a0 withReplyIdentifier:(unsigned int)a1;

@end
