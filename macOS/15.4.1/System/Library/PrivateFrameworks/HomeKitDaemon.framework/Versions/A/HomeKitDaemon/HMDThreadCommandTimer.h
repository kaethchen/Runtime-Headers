@class HMFTimer, NSString, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface HMDThreadCommandTimer : HMFObject <HMFTimerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain) HMFTimer *commandTimer;
@property (retain) NSNumber *delayInSecs;
@property (copy) id /* block */ commandBlock;
@property (copy) id /* block */ completionForBlock;
@property (retain) NSObject<OS_dispatch_queue> *commandQueue;
@property long long commandType;
@property unsigned long long commandCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)abort;
- (id)initWithTimer:(id)a0;
- (void)timerDidFire:(id)a0;
- (id)_commandTypeValueToString:(long long)a0;
- (long long)currentlyScheduledCommand;
- (id)initWithQueue:(id)a0 delayInSecs:(id)a1;
- (void)startWithBlock:(id /* block */)a0 completion:(id /* block */)a1 commandType:(long long)a2;

@end
