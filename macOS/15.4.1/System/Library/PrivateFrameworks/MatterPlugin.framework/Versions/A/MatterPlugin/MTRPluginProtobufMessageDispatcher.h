@class MTRPluginProtobufMessageReceiver, NSMutableSet;

@interface MTRPluginProtobufMessageDispatcher : NSObject

@property (retain) MTRPluginProtobufMessageReceiver *controlChannelReceiver;
@property (retain) NSMutableSet *messageReceivers;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)removeDelegate:(id)a0;
- (void)setDelegate:(id)a0 delegateQueue:(id)a1;
- (id)_findMessageReceiverMatchingDelegate:(id)a0;
- (id)_findMessageReceiverMatchingSessionID:(id)a0;
- (BOOL)deregisterForRequestMessageWithType:(id)a0 forSessionID:(id)a1;
- (BOOL)handleNewSessionSetupForMessage:(id)a0 transport:(id)a1 errorBlock:(id /* block */)a2;
- (BOOL)invokeMessageHandlersForMessage:(id)a0 transport:(id)a1 errorBlock:(id /* block */)a2;
- (void)invokeMessageHandlersForReceiver:(id)a0 message:(id)a1 transport:(id)a2 errorBlock:(id /* block */)a3;
- (BOOL)registerForRequestMessageWithType:(id)a0 requestHandler:(SEL)a1 forSessionID:(id)a2;
- (void)setDelegate:(id)a0 delegateQueue:(id)a1 forSessionID:(id)a2;

@end
