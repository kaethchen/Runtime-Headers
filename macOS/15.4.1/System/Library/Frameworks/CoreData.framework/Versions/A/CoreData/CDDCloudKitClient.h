@class NSXPCConnection;

@interface CDDCloudKitClient : NSObject {
    BOOL _interrupted;
    BOOL _invalidated;
    NSXPCConnection *_connection;
}

- (void)dealloc;
- (id)initWithMachServiceName:(id)a0;
- (BOOL)_valid;
- (void)handleMessage:(id)a0 reply:(id /* block */)a1;

@end
