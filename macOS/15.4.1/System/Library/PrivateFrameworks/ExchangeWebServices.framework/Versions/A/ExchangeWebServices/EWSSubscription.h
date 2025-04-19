@class NSString, EWSExchangeServiceBindingTask, NSArray, EWSExchangeServiceBinding;
@protocol EWSSubscriptionDelegate;

@interface EWSSubscription : NSObject <EWSExchangeServiceBindingTaskDelegate> {
    id _currentTaskLock;
    EWSExchangeServiceBindingTask *_currentTask;
    BOOL _isValid;
}

@property (weak, nonatomic) EWSExchangeServiceBinding *binding;
@property (retain, nonatomic) EWSExchangeServiceBindingTask *subscribeTask;
@property (retain, nonatomic) EWSExchangeServiceBindingTask *unsubscribeTask;
@property (copy) NSString *subscriptionId;
@property (copy) NSString *watermark;
@property BOOL shouldSubscribe;
@property (weak) id<EWSSubscriptionDelegate> delegate;
@property (copy) NSArray *folderIds;
@property (copy) NSArray *eventTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)subscribe;
- (void)unsubscribe;
- (void)_clearTask:(id)a0;
- (void)exchangeServiceBindingTask:(id)a0 didFailWithError:(id)a1;
- (void)exchangeServiceBindingTask:(id)a0 didReceiveResponse:(id)a1;
- (void)exchangeServiceBindingTaskCompleted:(id)a0;
- (id)nextTask;
- (void)scheduleTaskIfNeeded;

@end
