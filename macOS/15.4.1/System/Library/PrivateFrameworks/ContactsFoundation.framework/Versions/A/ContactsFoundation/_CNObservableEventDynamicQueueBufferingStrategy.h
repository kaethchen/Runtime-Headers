@class CNQueue;

@interface _CNObservableEventDynamicQueueBufferingStrategy : _CNObservableEventBufferingStrategy

@property (readonly, nonatomic) CNQueue *queue;

- (void).cxx_destruct;
- (void)addEvent:(id)a0;
- (id)allEvents;
- (id)initWithQueue:(id)a0;
- (BOOL)isSequenceTerminated;

@end
