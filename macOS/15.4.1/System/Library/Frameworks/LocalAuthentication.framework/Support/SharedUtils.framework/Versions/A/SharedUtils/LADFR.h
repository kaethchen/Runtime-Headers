@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface LADFR : NSObject <LADFRXPC> {
    NSObject<OS_dispatch_queue> *_xpcQueue;
}

@property (retain) NSXPCConnection *agentConnection;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)_connectToUIAgent;
- (void)clearDFR:(id /* block */)a0;
- (id)initWithXpcQueue:(id)a0;
- (void)updateDFR:(long long)a0 options:(id)a1 delegate:(id)a2 reply:(id /* block */)a3;

@end
