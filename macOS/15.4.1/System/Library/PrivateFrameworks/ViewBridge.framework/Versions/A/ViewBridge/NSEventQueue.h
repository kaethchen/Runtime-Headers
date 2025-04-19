@class NSMutableArray;

@interface NSEventQueue : NSObject {
    NSMutableArray *_events;
    unsigned long long _capacity;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _retainReleaseLock;
}

+ (BOOL)event:(id)a0 isEqualTo:(id)a1;

- (oneway void)release;
- (void)dealloc;
- (id)init;
- (id)retain;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)__vbSuperRelease;
- (void)__vbWithLockPerform:(id /* block */)a0;
- (id)dequeueTimestamp:(double)a0;
- (void)enqueue:(id)a0;
- (void)logEventCount;
- (id)nextEventEqualToEvent:(id)a0 dequeue:(BOOL)a1;
- (struct os_unfair_lock_s { unsigned int x0; } *)retainReleaseLock;

@end
