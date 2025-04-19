@class NSXPCConnection;

@interface PKDistributionHelperController : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _serviceConnectionLock;
    NSXPCConnection *_serviceConnection;
}

- (void)dealloc;
- (id)init;
- (void)invalidate;
- (BOOL)fileAtPathOnTrustedGraft:(id)a0 error:(id *)a1;

@end
