@class NSString;

@interface NSConcurrentEventMonitor : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } eventLock;
    struct __CFArray { } *eventQueue;
}

@property BOOL isValid;
@property unsigned long long eventMask;
@property (copy) NSString *identifier;
@property (copy) id /* block */ callback;

- (void)dealloc;
- (id)init;
- (void)drainEventQueue;
- (BOOL)enqueueEvent:(struct __CGEvent { } *)a0;

@end
