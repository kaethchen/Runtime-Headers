@class NSObject;
@protocol OS_xpc_object;

@interface AOSAgentConnection : NSObject

@property (nonatomic) NSObject<OS_xpc_object> *connection;
@property (nonatomic) BOOL isDisconnected;

+ (void)initialize;
+ (id)errorFromMessage:(id)a0;
+ (id)errorStringFromMessage:(id)a0;
+ (id)resultFromMessage:(id)a0;

- (void)dealloc;
- (id)init;
- (void)disconnect;
- (BOOL)connect;
- (BOOL)isConnected;
- (void)sendMessageWithPayload:(id)a0 replyHandler:(id /* block */)a1 isAsync:(BOOL)a2;

@end
