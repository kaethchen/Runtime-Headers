@class NSXPCConnection, NSXPCInterface;

@interface EPExecutionPolicy : NSObject {
    NSXPCInterface *_interface;
    NSXPCConnection *_connection;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)addPolicyExceptionForURL:(id)a0 error:(id *)a1;

@end
