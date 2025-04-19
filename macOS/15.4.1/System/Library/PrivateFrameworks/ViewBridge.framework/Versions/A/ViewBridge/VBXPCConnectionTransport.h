@class NSString, VBXPCConnection, NSObject;
@protocol OS_xpc_object;

@interface VBXPCConnectionTransport : NSObject <_NSXPCTransport> {
    VBXPCConnection *_connection;
    struct set<unsigned int, std::less<unsigned int>, std::allocator<unsigned int>> { struct __tree<unsigned int, std::less<unsigned int>, std::allocator<unsigned int>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<unsigned int, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::less<unsigned int>> { unsigned long long __value_; } __pair3_; } __tree_; } _repliesPending;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _repliesPendingLock;
}

@property (retain) NSObject<OS_xpc_object> *underlyingConnection;
@property (copy) id /* block */ messageHandlerBlock;
@property (copy) id /* block */ errorHandlerBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (struct { unsigned int x0[8]; })auditToken;
- (id)initWithConnection:(id)a0;
- (void)resume;
- (id).cxx_construct;
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

@end
