@class NSObject, NSMutableArray, RBEventQueueEvent;
@protocol OS_dispatch_queue, RBTimeProvidingEvent, RBTimeProviding;

@interface RBEventQueue : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id<RBTimeProviding> _timeProvider;
    double _nextFireTime;
    id<RBTimeProvidingEvent> _pendingEvent;
    BOOL _isProcessingEvents;
    BOOL _inModifyBlock;
    BOOL _dirtyDuringModify;
}

@property (readonly, nonatomic) NSMutableArray *events;
@property (readonly, nonatomic) RBEventQueueEvent *nextEvent;
@property (readonly, nonatomic) unsigned long long count;

- (id)description;
- (void).cxx_destruct;
- (void)addEvent:(id)a0;
- (void)addEvents:(id)a0;
- (void)removeEvent:(id)a0;
- (void)batchModify:(id /* block */)a0;
- (id)initWithQueue:(id)a0 timeProvider:(id)a1;
- (void)removeEvents:(id)a0;

@end
