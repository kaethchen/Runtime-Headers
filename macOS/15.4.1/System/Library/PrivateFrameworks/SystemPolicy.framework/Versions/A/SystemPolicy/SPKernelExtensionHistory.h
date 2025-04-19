@class NSXPCConnection, NSXPCInterface;

@interface SPKernelExtensionHistory : NSObject {
    NSXPCInterface *_interface;
    NSXPCConnection *_connection;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)kernelExtensionHistory;

@end
