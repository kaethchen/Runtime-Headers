@class NSString, NSXPCInterface, NSXPCConnection;

@interface TransparencyXPCConnection : NSObject

@property (retain) NSXPCConnection *connection;
@property (retain) NSString *machName;
@property (retain) NSXPCInterface *interface;

+ (id)cachedConnection:(id)a0 interface:(Class)a1;
+ (id)idsInstance;
+ (void)invokeAccountsSupportWithBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;
+ (void)invokeIDSSupportWithBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;
+ (void)invokeIDSXPCWithBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;
+ (void)invokeXPCAsynchronousCallWithBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;
+ (void)invokeXPCSynchronousCallWithBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;
+ (void)invokeXPCWithBlock:(id /* block */)a0 synchronous:(BOOL)a1 errorHandler:(id /* block */)a2;
+ (id)mainInstance;
+ (BOOL)retryable:(id)a0 counter:(int)a1;
+ (void)setupTestConnection:(id)a0 forMachName:(id)a1;
+ (id)swTransparencyConnection;
+ (id)swTransparencyInstance;
+ (id)transparencyAccountsInstance;
+ (id)transparencySupportInstance;

- (void)dealloc;
- (void).cxx_destruct;
- (id)createConnection;
- (id)initWithMachName:(id)a0 interface:(id)a1;
- (void)setTestEndpoint:(id)a0;

@end
