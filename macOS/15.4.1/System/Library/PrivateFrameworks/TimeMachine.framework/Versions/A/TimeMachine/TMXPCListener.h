@class NSString, NSObject;
@protocol OS_xpc_object;

@interface TMXPCListener : NSObject

@property (readonly) NSString *serviceName;
@property (readonly) BOOL isLegacyConnection;
@property (readonly) NSObject<OS_xpc_object> *connection;
@property (copy) id /* block */ messageHandler;
@property (copy) id /* block */ errorHandler;
@property (copy) NSString *messageLoggingKey;

- (void)dealloc;
- (void).cxx_destruct;
- (void)startListening;
- (void)stopListening;
- (void)_handleConnectionError:(id)a0;
- (void)_handleConnection:(id)a0;
- (void)_handleXPCMessage:(id)a0;
- (id)_initForServiceNamed:(id)a0 legacyConnection:(BOOL)a1;
- (id)_newConnectionListenerWithName:(id)a0 legacyConnection:(BOOL)a1;
- (id)initForLegacyServiceNamed:(id)a0;
- (id)initForServiceNamed:(id)a0;
- (void)sendReply:(id)a0 forMessage:(id)a1;

@end
