@class NSString, NSMutableDictionary, NSOperationQueue, CPDistributedMessagingCallout, NSLock;

@interface CPDistributedMessagingCenter : NSObject {
    NSString *_centerName;
    NSLock *_lock;
    unsigned int _sendPort;
    NSOperationQueue *_asyncQueue;
    struct __CFRunLoopSource { } *_serverSource;
    NSString *_requiredEntitlement;
    NSMutableDictionary *_callouts;
    unsigned int _parkedServerPort;
    CPDistributedMessagingCallout *_currentCallout;
    unsigned int _replyPort;
    BOOL _portPassing;
    BOOL _delayedReply;
    BOOL _requireLookupByPID;
    int _targetPID;
}

+ (id)_centerNamed:(id)a0 requireLookupByPID:(BOOL)a1;
+ (id)centerNamed:(id)a0;
+ (id)pidRestrictedCenterNamed:(id)a0;

- (void)dealloc;
- (id)name;
- (void)stopServer;
- (BOOL)doesServerExist;
- (void)_dispatchMessageNamed:(id)a0 userInfo:(id)a1 reply:(id *)a2 auditToken:(struct { unsigned int x0[8]; } *)a3;
- (id)_initAnonymousServer;
- (id)_initClientWithPort:(unsigned int)a0;
- (id)_initWithServerName:(id)a0;
- (id)_initWithServerName:(id)a0 requireLookupByPID:(BOOL)a1;
- (BOOL)_isTaskEntitled:(struct { unsigned int x0[8]; } *)a0;
- (id)_requiredEntitlement;
- (BOOL)_sendMessage:(id)a0 userInfo:(id)a1 receiveReply:(id *)a2 error:(id *)a3 toTarget:(id)a4 selector:(SEL)a5 context:(void *)a6;
- (BOOL)_sendMessage:(id)a0 userInfo:(id)a1 receiveReply:(id *)a2 error:(id *)a3 toTarget:(id)a4 selector:(SEL)a5 context:(void *)a6 nonBlocking:(BOOL)a7;
- (BOOL)_sendMessage:(id)a0 userInfoData:(id)a1 oolKey:(id)a2 oolData:(id)a3 makeServer:(BOOL)a4 receiveReply:(id *)a5 nonBlocking:(BOOL)a6 error:(id *)a7;
- (unsigned int)_sendPort;
- (void)_sendReplyMessage:(id)a0 portPassing:(BOOL)a1 onMachPort:(unsigned int)a2;
- (unsigned int)_serverPort;
- (void)_setSendPort:(unsigned int)a0;
- (void)_setupInvalidationSource;
- (id)delayReply;
- (void)registerForMessageName:(id)a0 target:(id)a1 selector:(SEL)a2;
- (void)runServerOnCurrentThread;
- (void)runServerOnCurrentThreadProtectedByEntitlement:(id)a0;
- (void)sendDelayedReply:(id)a0 dictionary:(id)a1;
- (id)sendMessageAndReceiveReplyName:(id)a0 userInfo:(id)a1;
- (id)sendMessageAndReceiveReplyName:(id)a0 userInfo:(id)a1 error:(id *)a2;
- (void)sendMessageAndReceiveReplyName:(id)a0 userInfo:(id)a1 toTarget:(id)a2 selector:(SEL)a3 context:(void *)a4;
- (BOOL)sendMessageName:(id)a0 userInfo:(id)a1;
- (BOOL)sendNonBlockingMessageName:(id)a0 userInfo:(id)a1;
- (void)setTargetPID:(int)a0;
- (void)unregisterForMessageName:(id)a0;

@end
