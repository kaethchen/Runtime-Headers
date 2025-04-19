@class NSTimer;
@protocol WBDatabaseLockAcquisitorDelegate;

@interface WBDatabaseLockAcquisitor : NSObject {
    NSTimer *_timer;
    Class _webBookmarkCollectionClass;
    BOOL _lockAcquired;
    long long _maxRetryCount;
    long long _retryCount;
}

@property (weak, nonatomic) id<WBDatabaseLockAcquisitorDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)releaseLock;
- (void)_stopTimer;
- (BOOL)_attemptToLockSyncAndNotifyDelegateOnFailure:(BOOL)a0;
- (void)_retryTimerFired:(id)a0;
- (void)_startTimerWithTimeout:(double)a0 retryInterval:(double)a1;
- (void)acquireLockWithTimeout:(double)a0;
- (void)acquireLockWithTimeout:(double)a0 retryInterval:(double)a1;
- (id)initWithWebBookmarkCollectionClass:(Class)a0;

@end
