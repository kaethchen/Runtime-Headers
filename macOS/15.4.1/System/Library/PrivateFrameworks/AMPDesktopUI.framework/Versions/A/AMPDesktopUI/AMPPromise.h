@class NSError, NSMutableArray, NSLock;

@interface AMPPromise : NSObject {
    unsigned char _state;
    NSMutableArray *_observers;
    id _value;
    NSError *_error;
    NSLock *_lock;
}

+ (id)run:(id /* block */)a0;
+ (id)onScheduler:(id)a0 run:(id /* block */)a1;
+ (id)rejected:(id)a0;
+ (id)resolved:(id)a0;

- (void).cxx_destruct;
- (id)initWithState:(unsigned char)a0;
- (void)resolve:(id)a0;
- (void)reject:(id)a0;
- (id)thenOn:(id)a0 perform:(id /* block */)a1;
- (id)chainOnScheduler:(id)a0 chainedResolve:(id /* block */)a1 chainedReject:(id /* block */)a2;
- (id)initPending;
- (id)initRejectedWithError:(id)a0;
- (id)initResolvedWithValue:(id)a0;
- (id)initWithScheduler:(id)a0 executorBlock:(id /* block */)a1;
- (void)observeOnScheduler:(id)a0 resolveBlock:(id /* block */)a1 rejectBlock:(id /* block */)a2;
- (id)thenOn:(id)a0 perform:(id /* block */)a1 orCatchError:(id /* block */)a2;
- (id)thenPerform:(id /* block */)a0;
- (id)thenPerform:(id /* block */)a0 orCatchError:(id /* block */)a1;

@end
