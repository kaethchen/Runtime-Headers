@class NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface AMSUIWebFlowTimeout : NSObject

@property (copy) id /* block */ enqueuedBlock;
@property (copy) id /* block */ block;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSDate *startTime;
@property double timeout;
@property double timeRemaining;

+ (id)timeoutWithTimeout:(double)a0 queue:(id)a1 block:(id /* block */)a2;

- (void).cxx_destruct;
- (void)pause;
- (void)start;
- (void)reset;
- (id)initWithTimeout:(double)a0 queue:(id)a1 block:(id /* block */)a2;

@end
