@class NSXPCConnection;

@interface TVISAmbientServiceConnection : NSObject {
    struct { BOOL remoteForwardingScheduled; } _flags;
}

@property (readonly, retain, nonatomic) NSXPCConnection *connection;

+ (id)remoteInterface;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (void)invalidate;
- (void)resume;
- (id /* block */)_promise:(id /* block */)a0;
- (void)promiseRemoteForwarding:(id /* block */)a0;

@end
