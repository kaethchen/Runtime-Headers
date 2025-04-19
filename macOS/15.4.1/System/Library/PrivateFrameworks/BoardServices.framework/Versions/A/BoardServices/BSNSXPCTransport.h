@class NSObject, NSString, BSXPCServiceConnection, NSArray, _BSNSXPCInvalidCallbackTracking, BSCompoundAssertion, RBSAssertion;
@protocol OS_dispatch_queue;

@interface BSNSXPCTransport : NSObject <BSNSXPCConnectionConfiguring, BSServiceConnectionExternalMessageSessionControlling, _NSXPCTransport> {
    BSXPCServiceConnection *_connection;
    NSString *_explanation;
    NSArray *_perMessageAttributes;
    BSCompoundAssertion *_refCounter;
    RBSAssertion *_refCountedAssertion;
    id /* block */ _assertionProvider;
    NSObject<OS_dispatch_queue> *_targetQueue;
    _BSNSXPCInvalidCallbackTracking *_configured_invalidCallbackTracking;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned char _messageOptions;
    BOOL _activateOnResume;
    BOOL _faultOnSuspend;
    BOOL _lock_faultedOnSuspend;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (struct { unsigned int x0[8]; })auditToken;
- (void)resume;
- (void)activate;
- (int)processIdentifier;
- (void)setErrorHandler:(id /* block */)a0;
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
- (void)setMessageHandler:(id /* block */)a0;
- (id)newExternalMessageSessionWithReason:(id)a0;
- (void)setActivateOnResume;
- (void)setFaultOnSuspend;
- (void)setPerMessageAssertionAttributes:(id)a0;
- (void)setRefCountedAssertionAttributes:(id)a0;

@end
