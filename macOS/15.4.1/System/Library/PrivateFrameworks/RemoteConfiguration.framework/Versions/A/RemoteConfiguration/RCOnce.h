@class RCMutexLock;

@interface RCOnce : NSObject

@property (nonatomic) BOOL finished;
@property (retain, nonatomic) RCMutexLock *lock;

- (id)init;
- (void).cxx_destruct;
- (id)initWithOptions:(unsigned long long)a0;
- (BOOL)trigger;
- (void)executeOnce:(id /* block */)a0;
- (BOOL)hasBeenTriggered;

@end
