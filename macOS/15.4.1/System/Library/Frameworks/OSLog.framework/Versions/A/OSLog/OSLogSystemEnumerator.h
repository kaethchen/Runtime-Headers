@class NSObject, OSLogEventStream, OSLogEntry;
@protocol OS_dispatch_semaphore;

@interface OSLogSystemEnumerator : OSLogEnumerator {
    OSLogEventStream *_stream;
    OSLogEntry *_next;
    BOOL _done;
    NSObject<OS_dispatch_semaphore> *_pushDone;
    NSObject<OS_dispatch_semaphore> *_handlerDone;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)nextObject;
- (void)_handleInvalidation;
- (void)_handleEventProxy:(id)a0;
- (id)initWithEventStream:(id)a0 options:(unsigned long long)a1 position:(id)a2;

@end
