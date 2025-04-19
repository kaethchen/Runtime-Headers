@class NSError, REMReminderCreationRemoteViewController, NSRemoteView;

@interface REMReminderServiceViewController : NSViewController <NSRemoteViewDelegate, REMReminderCreationPublicViewController>

@property (retain, nonatomic, setter=setChildViewController:) REMReminderCreationRemoteViewController *childViewController;
@property (retain, nonatomic) NSRemoteView *remoteView;
@property (nonatomic) BOOL viewHasAppeared;
@property (copy, nonatomic) NSError *deferredErrorDuringPresentation;
@property (readonly) BOOL shouldRetainExportedObject;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)loadView;
- (void)view:(id)a0 encounteredError:(id)a1;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewDidLoad;
- (void)viewWillDisappear;
- (void)handleError:(id)a0;
- (id)remoteViewController;
- (void)remoteViewControllerDidLoad:(id)a0 setupCompletion:(id /* block */)a1;
- (void)viewServiceDidCancel;
- (void)viewServiceDidFailWithError:(id)a0;
- (void)viewServiceDidFinish;
- (void)viewServicePreferredSizeDidChange:(struct CGSize { double x0; double x1; })a0;
- (id)viewServiceViewController;

@end
