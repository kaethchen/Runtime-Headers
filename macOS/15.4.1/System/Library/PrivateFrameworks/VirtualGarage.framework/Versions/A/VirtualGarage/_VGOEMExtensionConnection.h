@class INCExtensionConnection, NSMutableArray;

@interface _VGOEMExtensionConnection : NSObject {
    INCExtensionConnection *_connection;
    id /* block */ _completion;
    NSMutableArray *_connectionTimeoutHandlers;
    NSMutableArray *_connectionErrorHandlers;
    NSMutableArray *_intentCompletionHandlers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _handlersLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _completionLock;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (void)_complete;
- (void)addConnectionErrorHandler:(id /* block */)a0;
- (void)addConnectionTimeoutHandler:(id /* block */)a0;
- (void)addIntentCompletionHandler:(id /* block */)a0;
- (void)resumeWithCompletion:(id /* block */)a0;

@end
