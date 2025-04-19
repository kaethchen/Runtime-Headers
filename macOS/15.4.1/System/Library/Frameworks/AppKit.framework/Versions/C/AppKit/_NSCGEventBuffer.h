@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _NSCGEventBuffer : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _threadLock;
    BOOL _enabled;
    BOOL _bufferOverflowHasOccurred;
    unsigned long long _eventMask;
    long long _maxEventCount;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_source> *_dispatchSource;
    id /* block */ _dispatchBlock;
    struct __CFArray { } *_eventBuffer;
}

@property (getter=isEnabled) BOOL enabled;
@property unsigned long long eventMask;
@property long long maxEventCount;

- (void)dealloc;
- (id)init;
- (id)drainEvents:(BOOL *)a0;
- (void)setDispatchQueue:(id)a0 block:(id /* block */)a1;

@end
