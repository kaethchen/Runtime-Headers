@class NSString, INIntentForwardingAction, NSObject, INWatchdogTimer;
@protocol OS_dispatch_queue, INIntentBackgroundHandlingAssertion;

@interface INAppIntentDeliverer : NSObject <RBSAssertionObserving>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) INWatchdogTimer *requestTimer;
@property (retain, nonatomic) id<INIntentBackgroundHandlingAssertion> auxiliaryAssertion;
@property (readonly, nonatomic) INIntentForwardingAction *intentForwardingAction;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0;
- (void)_deliverIntentForwardingActionWithResponseHandler:(id /* block */)a0;
- (id)_sendIntentForwardActionUsingAppleEventsToPid:(id)a0 error:(id *)a1;
- (void)completeWithIntentForwardingActionResponse:(id)a0;
- (void)deliverIntent:(id)a0 reply:(id /* block */)a1;
- (void)deliverIntentForwardingActionWithResponseHandler:(id /* block */)a0;
- (id)initWithBundleIdentifier:(id)a0 intentForwardingAction:(id)a1;
- (void)invalidateIntentDelivery;

@end
