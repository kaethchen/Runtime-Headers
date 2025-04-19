@class NSObject, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface CMIOExtensionProviderServer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_listener;
    NSObject<OS_xpc_object> *_endpoint;
    NSString *_serviceName;
}

@property (class, readonly) CMIOExtensionProviderServer *sharedServer;

@property (readonly, nonatomic) BOOL internalDaemon;

- (void)dealloc;
- (id)init;
- (void)start;
- (void)stop;
- (void)addConnection:(id)a0;

@end
