@class NSTimer, CATOperation;

@interface DMTTimeoutOperation : CATOperation

@property (readonly, nonatomic) CATOperation *observedOperation;
@property (readonly, nonatomic) double timeoutInterval;
@property (readonly, nonatomic) BOOL cancelsOnTimeout;
@property (retain, nonatomic) NSTimer *timeoutTimer;

- (void).cxx_destruct;
- (void)cancel;
- (BOOL)isAsynchronous;
- (void)main;
- (void)timerDidFire:(id)a0;
- (void)beginWaitingForOperation;
- (void)createTimer;
- (id)initWithOperation:(id)a0 timeout:(double)a1 cancelsOnTimeout:(BOOL)a2;
- (void)innerOperationDidFinish:(id)a0;

@end
