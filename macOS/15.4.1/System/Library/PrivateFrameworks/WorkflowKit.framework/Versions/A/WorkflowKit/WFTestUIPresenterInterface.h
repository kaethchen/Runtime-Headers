@class WFHarnessTestCase, NSString, WFBackgroundShortcutRunner;

@interface WFTestUIPresenterInterface : NSObject <WFUIPresenterInterface, WFExternalUIPresenterInterface>

@property (readonly, nonatomic) WFHarnessTestCase *testCase;
@property (readonly, weak, nonatomic) WFBackgroundShortcutRunner *backgroundRunner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)willBeginExecutingShortcutStep:(id)a0;
- (void)didFinishActionWithIdentifier:(id)a0;
- (void)didStartActionWithIdentifier:(id)a0;
- (void)performDialogRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)performSiriRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)willBeginExecutingShortcutWithActionCount:(id)a0;
- (void)dismissPresentedContentForRunningContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)showDialogRequest:(id)a0 runningContext:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithTestCase:(id)a0 backgroundRunner:(id)a1;

@end
