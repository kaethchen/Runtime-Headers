@class SSSession, NSObject;
@protocol OS_dispatch_semaphore;

@interface SenderThread : NSThread

@property NSObject<OS_dispatch_semaphore> *suspendSemaphore;
@property struct __CFRunLoop { } *runLoop;
@property (weak) SSSession *session;
@property BOOL suspended;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)resume;
- (void)suspend;
- (void)main;
- (void)shutDown;

@end
