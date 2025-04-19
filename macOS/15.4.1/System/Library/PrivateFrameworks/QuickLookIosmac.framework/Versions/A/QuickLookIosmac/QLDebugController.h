@class NSObject;
@protocol OS_dispatch_queue;

@interface QLDebugController : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedController;

- (void)dealloc;
- (id)init;
- (void)addRequest:(struct __QLRequest { } *)a0;
- (void)_sendUpdate:(id)a0 forRequest:(struct __QLRequest { } *)a1 async:(BOOL)a2;
- (void)clearAllRequests;
- (void)sendUpdate:(id)a0 forRequest:(struct __QLRequest { } *)a1;
- (void)setStatus:(int)a0 forRequest:(struct __QLRequest { } *)a1;

@end
