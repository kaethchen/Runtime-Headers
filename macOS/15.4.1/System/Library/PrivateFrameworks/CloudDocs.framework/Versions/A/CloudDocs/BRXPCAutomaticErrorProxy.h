@class NSFileProviderService, NSXPCConnection;

@interface BRXPCAutomaticErrorProxy : FPXPCAutomaticErrorProxy <BRXPCAutomaticErrorProxy> {
    NSXPCConnection *_connection;
    NSFileProviderService *_service;
}

@property unsigned long long timeoutState;

+ (void)decrementConnectionRefCount:(id)a0;
+ (void)incrementConnectionRefCount:(id)a0;
+ (BOOL)sanitizeErrors;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithConnection:(id)a0 service:(id)a1 interface:(id)a2;

@end
