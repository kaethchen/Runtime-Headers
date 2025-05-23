@interface RCUnfairLock : NSObject <RCLocking>

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } unfairLock;
@property (nonatomic) unsigned int unfairLockOptions;

- (id)init;
- (void)lock;
- (void)unlock;
- (id)initWithOptions:(long long)a0;
- (void)performWithLockSync:(id /* block */)a0;

@end
