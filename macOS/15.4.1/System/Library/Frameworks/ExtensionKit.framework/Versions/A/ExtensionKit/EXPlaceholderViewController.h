@class NSImageView, NSString, NSTimer, NSProgressIndicator;

@interface EXPlaceholderViewController : NSViewController <_EXHostViewControllerDelegate>

@property (retain) NSProgressIndicator *activityView;
@property (weak) NSTimer *timer;
@property (retain) NSImageView *completeIcon;
@property (nonatomic) unsigned long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)loadView;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)hostViewController:(id)a0 didBeginHosting:(id)a1;
- (void)hostViewController:(id)a0 didEndHosting:(id)a1 error:(id)a2;
- (void)hostViewController:(id)a0 didPrepareToHost:(id)a1;

@end
