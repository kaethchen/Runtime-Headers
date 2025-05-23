@class NSThread, NSRunLoop;

@interface CLRunLoopSiloThread : NSObject

@property (readonly, nonatomic) struct _opaque_pthread_t { long long x0; struct __darwin_pthread_handler_rec *x1; char x2[8176]; } *threadId;
@property (readonly, nonatomic) NSRunLoop *underlyingRunLoop;
@property (readonly, nonatomic) NSThread *underlyingThread;
@property (readonly, nonatomic) BOOL shouldCancelThread;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCurrentThread;
- (id)initWithRunLoop:(struct __CFRunLoop { } *)a0;

@end
