@class MTRPluginProtobufMessageDispatcher, NSString;

@interface MTRPluginProtobufOverModernTransport : NSObject <MTRPluginProtobufMessageTransport>

@property (retain) MTRPluginProtobufMessageDispatcher *messageDispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)start;
- (BOOL)stop;
- (void)removeDelegate:(id)a0;
- (void)setDelegate:(id)a0 delegateQueue:(id)a1;
- (void)_handleResponseWithPayload:(id)a0 error:(id)a1 forMessage:(id)a2;
- (BOOL)_installResponseHandlerForIncomingProtobufMessage:(id)a0 hmfMessage:(id)a1;
- (void)_sendMessageToPrimaryHomeHub:(id)a0;
- (void)_sendMessageToRemotePeer:(id)a0 peerDestination:(id)a1;
- (BOOL)deregisterForRequestMessageWithType:(id)a0 forSessionID:(id)a1;
- (BOOL)dispatchIncomingMessage:(id)a0;
- (BOOL)registerForRequestMessageWithType:(id)a0 requestHandler:(SEL)a1 forSessionID:(id)a2;
- (void)sendMessageToPrimaryHomeHub:(id)a0;
- (void)sendMessageToRemotePeer:(id)a0 peerDestination:(id)a1;
- (void)setDelegate:(id)a0 delegateQueue:(id)a1 forSessionID:(id)a2;

@end
