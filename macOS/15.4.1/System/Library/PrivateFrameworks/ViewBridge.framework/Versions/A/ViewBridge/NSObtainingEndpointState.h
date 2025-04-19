@class NSMutableArray, NSObject;
@protocol OS_xpc_object;

@interface NSObtainingEndpointState : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    NSMutableArray *errors;
    NSObject<OS_xpc_object> *connection;
    NSObject<OS_xpc_object> *listenerName;
    NSObject<OS_xpc_object> *message;
}

- (void)dealloc;
- (void)addError:(long long)a0 description:(const char *)a1 forListenerNamed:(id)a2 fromServiceNamed:(id)a3;
- (void)whileHoldingLock:(id /* block */)a0;

@end
