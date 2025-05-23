@class NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface BSXPCMessage : NSObject {
    id /* block */ _replyHandler;
    NSObject<OS_dispatch_queue> *_replyQueue;
    int _invalidated;
    int _replied;
}

@property (readonly, nonatomic) NSObject<OS_xpc_object> *payload;

+ (id)message:(long long)a0 withPacker:(id /* block */)a1;
+ (id)message:(long long)a0 withPacker:(id /* block */)a1 replyHandler:(id /* block */)a2 replyQueue:(id)a3;
+ (const char *)messageTypeKey;
+ (id)messageWithPacker:(id /* block */)a0;
+ (id)messageWithPacker:(id /* block */)a0 replyHandler:(id /* block */)a1 replyQueue:(id)a2;
+ (id)messageWithPayload:(id)a0;
+ (void)sendMessage:(long long)a0 toConnection:(id)a1 withMessagePacker:(id /* block */)a2;
+ (void)sendMessage:(long long)a0 toConnection:(id)a1 withMessagePacker:(id /* block */)a2 replyHandler:(id /* block */)a3 replyQueue:(id)a4;
+ (void)sendMessageWithPacker:(id /* block */)a0 toConnection:(id)a1;
+ (void)sendMessageWithPacker:(id /* block */)a0 toConnection:(id)a1 replyHandler:(id /* block */)a2 replyQueue:(id)a3;

- (id)description;
- (void).cxx_destruct;
- (void)forcefullyInvokeReplyHandler:(id)a0;
- (id)initWithMessage:(long long)a0 packer:(id /* block */)a1 replyHandler:(id /* block */)a2 replyQueue:(id)a3;
- (id)sendSynchronouslyToConnection:(id)a0 error:(id *)a1;
- (BOOL)sendToConnection:(id)a0;
- (BOOL)sendToConnection:(id)a0 replyQueue:(id)a1 replyHandler:(id /* block */)a2;

@end
