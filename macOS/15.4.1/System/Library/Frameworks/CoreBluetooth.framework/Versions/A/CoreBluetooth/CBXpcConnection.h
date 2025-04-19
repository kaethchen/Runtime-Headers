@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, CBXpcConnectionDelegate, OS_xpc_object;

@interface CBXpcConnection : NSObject {
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSMutableDictionary *_options;
    int _sessionType;
    NSObject<OS_dispatch_queue> *_xpcQueue;
    NSObject<OS_xpc_object> *_xpcConnection;
    BOOL _uiAppIsBackgrounded;
    BOOL _xpcConnectionConnected;
    id /* block */ _whbReplyHandler;
    NSMutableDictionary *_whbRemoteToLocalUuidMap;
}

@property (weak, nonatomic) id<CBXpcConnectionDelegate> delegate;

- (void).cxx_destruct;
- (void)setTargetQueue:(id)a0;
- (void)disconnect;
- (void)connect;
- (id)_allocXpcMsg:(unsigned short)a0 args:(id)a1;
- (void)_applicationDidEnterBackgroundNotification;
- (void)_applicationWillEnterForegroundNotification;
- (void)_checkIn;
- (void)_checkOut;
- (void)_handleConnectionEvent:(id)a0;
- (void)_handleFinalized;
- (void)_handleInvalid;
- (void)_handleMsg:(id)a0;
- (void)_handleReset;
- (id)_nameForMessage:(unsigned short)a0;
- (void)_sendBarrier;
- (void)didReceiveForwardedDelegateCallbackMessage:(id)a0;
- (void)didReceiveForwardedMessage:(id)a0;
- (void)forwardWhbMsg:(unsigned short)a0 args:(id)a1 cnx:(id)a2;
- (id)getEventQueue;
- (id)getWhbLocalIdForRemoteId:(id)a0;
- (id)initWithDelegate:(id)a0 queue:(id)a1 options:(id)a2 sessionType:(int)a3;
- (void)removeWhbRemoteId:(id)a0;
- (void)sendMsg:(unsigned short)a0 args:(id)a1;
- (void)sendMsgWithReply:(unsigned short)a0 args:(id)a1 replyBlock:(id /* block */)a2;
- (id)sendSyncMsg:(unsigned short)a0 args:(id)a1;
- (void)setWhbLocalId:(id)a0 forRemoteId:(id)a1;
- (void)setWhbReplyHandler:(id /* block */)a0;

@end
