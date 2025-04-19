@interface AMSDeallocGuard : NSObject

@property (readonly, copy) id /* block */ block;
@property (readonly) BOOL invalidated;
@property (readonly) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } invalidationLock;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithDeallocGuardBlock:(id /* block */)a0;

@end
