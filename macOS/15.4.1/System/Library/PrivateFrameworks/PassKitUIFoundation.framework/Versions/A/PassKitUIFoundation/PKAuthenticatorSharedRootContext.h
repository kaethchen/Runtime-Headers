@class LAContext;

@interface PKAuthenticatorSharedRootContext : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    LAContext *_LAContext;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)externalizedContext;
- (void)resetWithCompletion:(id /* block */)a0;

@end
