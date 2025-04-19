@class NSString, PFStateCaptureHandler, PFCoalescerContext, NSObject, NSDate;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface PFCoalescer : NSObject <PFStateCaptureProvider> {
    long long _resetSequenceNumber;
    long long _lastUpdateResetSequenceNumber;
    PFStateCaptureHandler *_stateCaptureHandler;
    NSDate *_lastTransactionStartDate;
    NSDate *_lastTransactionEndDate;
}

@property (retain) NSString *label;
@property (weak) id target;
@property BOOL usesTarget;
@property (retain) id buffer;
@property (retain) NSObject<OS_dispatch_queue> *sourceQueue;
@property (retain) NSObject<OS_dispatch_queue> *targetQueue;
@property (retain) NSObject<OS_dispatch_queue> *isolationQueue;
@property (retain) NSObject<OS_dispatch_source> *source;
@property (copy) id /* block */ snapshotAndDrainHandler;
@property (copy) id /* block */ action;
@property (retain) PFCoalescerContext *context;
@property BOOL initialDelayTimerIsArmed;
@property long long state;
@property (retain) NSObject<OS_os_transaction> *transaction;
@property double initialDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)arrayCoalescerWithLabel:(id)a0 queue:(id)a1 action:(id /* block */)a2;
+ (id)arrayCoalescerWithLabel:(id)a0 target:(id)a1 queue:(id)a2 action:(id /* block */)a3;
+ (id)coalescerWithLabel:(id)a0 queue:(id)a1 action:(id /* block */)a2;
+ (id)coalescerWithLabel:(id)a0 target:(id)a1 buffer:(id)a2 queue:(id)a3 bufferDrainer:(id /* block */)a4 action:(id /* block */)a5;
+ (id)coalescerWithLabel:(id)a0 target:(id)a1 queue:(id)a2 action:(id /* block */)a3;
+ (id)dictionaryCoalescerWithLabel:(id)a0 queue:(id)a1 action:(id /* block */)a2;
+ (id)dictionaryCoalescerWithLabel:(id)a0 target:(id)a1 queue:(id)a2 action:(id /* block */)a3;
+ (id /* block */)mutableCollectionBufferDrainer;
+ (id)mutableContainerCoalescerWithLabel:(id)a0 container:(id)a1 queue:(id)a2 action:(id /* block */)a3;
+ (id)mutableContainerCoalescerWithLabel:(id)a0 target:(id)a1 container:(id)a2 queue:(id)a3 action:(id /* block */)a4;
+ (id)setCoalescerWithLabel:(id)a0 queue:(id)a1 action:(id /* block */)a2;
+ (id)setCoalescerWithLabel:(id)a0 target:(id)a1 queue:(id)a2 action:(id /* block */)a3;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)update:(id /* block */)a0;
- (void)update;
- (void)_resetWhileLocked;
- (id)initWithLabel:(id)a0 target:(id)a1 buffer:(id)a2 queue:(id)a3 bufferDrainer:(id /* block */)a4 action:(id /* block */)a5;
- (void)performEventActionWithTarget:(id)a0;
- (void)resetAndShutDown;
- (id)stateCaptureDictionary;

@end
