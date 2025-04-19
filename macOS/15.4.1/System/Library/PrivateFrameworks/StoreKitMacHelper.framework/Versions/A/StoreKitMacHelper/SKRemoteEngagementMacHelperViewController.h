@class NSString, NSWindow, SKUIRemoteEngagementViewController;
@protocol SKRemoteEngagementMacHelperDelegate;

@interface SKRemoteEngagementMacHelperViewController : NSViewController <SKRemoteEngagementMacHelper, SKUIRemoteEngagementClientProtocol> {
    NSWindow *_panelWindow;
    NSWindow *_presentingWindow;
    SKUIRemoteEngagementViewController *_engagementViewController;
}

@property (weak) id<SKRemoteEngagementMacHelperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidAppear;
- (void)preferredContentSizeDidChange:(struct CGSize { double x0; double x1; })a0;
- (void)dismissSheet;
- (void)engagementTaskDidFinishWithResult:(id)a0 resultData:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)presentEngagementRequestData:(id)a0 completion:(id /* block */)a1;
- (void)presentSheetOverWindow:(id)a0;

@end
