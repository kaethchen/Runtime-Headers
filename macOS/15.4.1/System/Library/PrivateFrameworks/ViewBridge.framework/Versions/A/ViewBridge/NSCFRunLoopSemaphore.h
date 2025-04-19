@class NSString;

@interface NSCFRunLoopSemaphore : NSObject {
    unsigned char _waiting : 1;
    unsigned char _waited : 1;
    unsigned char _signaled : 1;
    unsigned char _stopped : 1;
    unsigned char _legacyWake : 1;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _retainReleaseLock;
}

@property (class, readonly) struct __CFString { } *mode;

@property (copy) NSString *legend;
@property (copy) NSString *loggingDomain;
@property (readonly) struct __CFString { } *mode;

+ (void)initialize;
+ (void)_observe:(struct __CFString { } *)a0 whilePerforming:(id /* block */)a1;
+ (struct __CFString { } *)currentRunLoopMode;
+ (id)invocations;

- (oneway void)release;
- (void)dealloc;
- (id)init;
- (id)retain;
- (void)signal;
- (void)wait;
- (BOOL)wait:(double)a0;
- (id)initWithMode:(struct __CFString { } *)a0;
- (void)invokeLoopInModeForDuration:(double)a0 withBlock:(id /* block */)a1;
- (void)__vbSuperRelease;
- (void)__vbWithLockPerform:(id /* block */)a0;
- (void)_log:(id)a0;
- (void)_log:(id)a0 force:(BOOL)a1;
- (struct os_unfair_lock_s { unsigned int x0; } *)retainReleaseLock;

@end
