@class FMNSXPCConnection, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface FMNSXPCCachedConnection : NSObject <FMNSXPCConnecting>

@property (retain, nonatomic) FMNSXPCConnection *connection;
@property (copy, nonatomic) id /* block */ failureBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (copy, nonatomic) id /* block */ didInvalidate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidate;
- (id)remoteObjectProxy;
- (void)_invalidate;
- (void)addFailureBlock:(id /* block */)a0;
- (id)initWithFMNSXPCConnection:(id)a0;

@end
