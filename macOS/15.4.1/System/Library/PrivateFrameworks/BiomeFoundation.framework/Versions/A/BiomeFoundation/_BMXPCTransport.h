@class NSMutableDictionary, NSDictionary, NSString, _BMXPCTransportContext, NSObject;
@protocol OS_xpc_object;

@interface _BMXPCTransport : NSObject <_NSXPCTransport> {
    NSObject<OS_xpc_object> *_connection;
    _BMXPCTransportContext *_weakContext;
}

@property (readonly) NSMutableDictionary *exportedUserInfo;
@property (readonly) NSDictionary *remoteUserInfo;
@property (copy) id /* block */ messageHandler;
@property (copy) id /* block */ errorHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)_handleEvent:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (struct { unsigned int x0[8]; })auditToken;
- (id)initWithConnection:(id)a0;
- (void)resume;
- (void)_setTargetUserIdentifier:(unsigned int)a0;
- (void)activate;
- (int)processIdentifier;
- (void)setTargetQueue:(id)a0;
- (void)suspend;
- (int)auditSessionIdentifier;
- (void)cancel;
- (unsigned int)effectiveGroupIdentifier;
- (unsigned int)effectiveUserIdentifier;
- (void)sendBarrierBlock:(id /* block */)a0;
- (void)sendMessage:(id)a0;
- (void)sendMessageWithReply:(id)a0 onQueue:(id)a1 replyHandler:(id /* block */)a2;
- (id)sendMessageWithReplySync:(id)a0;
- (void)sendNotification:(id)a0;
- (void)_willSendMessage:(id)a0;

@end
