@interface _NSFSStreamWrapper : NSObject {
    unsigned int _interestedFlags;
    struct __FSEventStream { } *_fsEventStreamRef;
    id /* block */ _callback;
}

- (void)dealloc;
- (void)invalidate;
- (void)flushAsync;
- (id)initWithRootUrl:(id)a0 eventTypes:(unsigned int)a1 handler:(id /* block */)a2;
- (void)processStream:(struct __FSEventStream { } *)a0 eventPaths:(id)a1 flags:(const unsigned int *)a2 ids:(const unsigned long long *)a3 count:(long long)a4;

@end
