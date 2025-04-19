@class SSEventSession, NSObject;
@protocol OS_dispatch_semaphore;

@interface SSEventSessionSenderThread : NSThread

@property NSObject<OS_dispatch_semaphore> *suspendSemaphore;
@property struct __CFRunLoop { } *runLoop;
@property (weak) SSEventSession *session;
@property BOOL suspended;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)resume;
- (void)suspend;
- (void)main;
- (void)shutDown;

@end
