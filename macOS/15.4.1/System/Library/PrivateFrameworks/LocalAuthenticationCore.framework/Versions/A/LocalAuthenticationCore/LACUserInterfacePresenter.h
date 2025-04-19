@class NSString, NSObject;
@protocol OS_dispatch_queue, LACUserInterfaceController;

@interface LACUserInterfacePresenter : NSObject <LACUserInterfacePresenting> {
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
    id<LACUserInterfaceController> _uiController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithReplyQueue:(id)a0 uiController:(id)a1;
- (void)presentUIForIdentifier:(long long)a0 request:(id)a1 completion:(id /* block */)a2;

@end
