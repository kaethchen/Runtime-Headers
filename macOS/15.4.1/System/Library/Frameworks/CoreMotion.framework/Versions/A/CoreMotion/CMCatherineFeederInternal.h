@class NSObject;
@protocol OS_dispatch_queue;

@interface CMCatherineFeederInternal : NSObject {
    NSObject<OS_dispatch_queue> *fInternalQueue;
    void *fLocationdConnection;
}

- (void)dealloc;
- (id)init;
- (void)_teardown;
- (void)_feedCatherine:(double)a0 confidence:(double)a1 timestamp:(double)a2;
- (void)_startDaemonConnection;

@end
