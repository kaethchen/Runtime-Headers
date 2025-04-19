@class NSString, NSXPCListenerEndpoint;
@protocol WFUIPresenterConnection, WFUIPresenterDelegate;

@interface WFUIPresenter : NSObject <WFUIPresenterHostInterface>

@property (class, readonly, nonatomic) WFUIPresenter *defaultPresenter;

@property (readonly, nonatomic) id<WFUIPresenterConnection> connection;
@property (weak, nonatomic) id<WFUIPresenterDelegate> delegate;
@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (void)presenterRequestedUpdatedRunViewSource:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateRunViewSource:(id)a0;
- (void)applicationWillLaunchInForegroundForRunningContext:(id)a0 isLastAction:(id)a1;
- (void)beginPersistentModeWithRunningContext:(id)a0 attribution:(id)a1 completionHandler:(id /* block */)a2;
- (void)completePersistentModeWithSuccess:(id)a0 runningContext:(id)a1 completionHandler:(id /* block */)a2;
- (void)dismissPresentedContentForRunningContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)presenterRequestedWorkflowPauseForContext:(id)a0 dialogRequest:(id)a1 completionHandler:(id /* block */)a2;
- (void)presenterRequestedWorkflowStopForContext:(id)a0;
- (void)showDialogRequest:(id)a0 runningContext:(id)a1 completionHandler:(id /* block */)a2;
- (void)updateAttribution:(id)a0 runningContext:(id)a1;
- (BOOL)showWebPage:(id)a0 completionHandler:(id /* block */)a1;

@end
