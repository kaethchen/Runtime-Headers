@class EWSExchangeServiceBindingTask;
@protocol EWSStreamingSubscriptionDelegate;

@interface EWSStreamingSubscription : EWSSubscription

@property (retain) EWSExchangeServiceBindingTask *streamTask;
@property (weak) id<EWSStreamingSubscriptionDelegate> streamingDelegate;
@property BOOL shouldStream;

- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (void)start;
- (void)stop;
- (void)unsubscribe;
- (void)exchangeServiceBindingTask:(id)a0 didFailWithError:(id)a1;
- (void)exchangeServiceBindingTask:(id)a0 didReceiveResponse:(id)a1;
- (void)exchangeServiceBindingTaskCompleted:(id)a0;
- (id)newSubscriptionRequest;
- (id)nextTask;

@end
