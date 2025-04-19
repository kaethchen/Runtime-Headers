@class CSFTimerContext, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface CSFTimer : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (copy, nonatomic) id /* block */ eventHandler;
@property (readonly, nonatomic) CSFTimerContext *context;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) BOOL isCancelled;

- (void).cxx_destruct;
- (void)cancel;
- (void)resume:(id /* block */)a0;
- (BOOL)_armTimer;
- (void)_disarmTimer;
- (id)initWithContext:(id)a0 queue:(id)a1 eventHandler:(id /* block */)a2;

@end
