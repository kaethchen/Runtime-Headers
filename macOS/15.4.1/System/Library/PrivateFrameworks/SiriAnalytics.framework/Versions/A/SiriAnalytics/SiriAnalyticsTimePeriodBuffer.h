@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SiriAnalyticsTimePeriodBuffer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_bufferTimer;
    double _bufferInterval;
    double _leeway;
    NSMutableSet *_bufferedMessages;
    id /* block */ _onMessagesProduced;
}

- (void).cxx_destruct;
- (void)_startProducing;
- (void)_stopProducing;
- (void)_timerElapsed;
- (void)enqueueMessages:(id)a0;
- (id)initWithInterval:(double)a0 queue:(id)a1;
- (void)onMessagesProduced:(id /* block */)a0;

@end
