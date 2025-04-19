@class UXView, NSString, NSButton, UXViewController;
@protocol PXPeopleFlowController, PXPeopleFlowViewController;

@interface PXPeopleSheetViewController : UXViewController <PXPeopleFlowViewControllerActionDelegate>

@property (retain, nonatomic) UXViewController<PXPeopleFlowViewController> *currentViewController;
@property (retain, nonatomic) NSButton *cancelButton;
@property (retain, nonatomic) NSButton *backButton;
@property (retain, nonatomic) NSButton *nextButton;
@property (retain, nonatomic) NSButton *doneButton;
@property (retain, nonatomic) UXView *contentView;
@property (retain, nonatomic) id<PXPeopleFlowController> flowController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancel:(id)a0;
- (void)done:(id)a0;
- (void)viewDidLoad;
- (void)requestDone;
- (void)viewDidLayoutSubviews;
- (id)initWithFlowController:(id)a0;
- (void)back:(id)a0;
- (void)next:(id)a0;
- (void)_presentViewController:(id)a0 animated:(BOOL)a1;
- (void)preparePresentedViewController:(id)a0;
- (void)_updateActionButtons;
- (void)handleDismissalOfViewController:(id)a0 toViewController:(id)a1;
- (void)ppt_done:(id)a0;
- (void)ppt_next:(id)a0;
- (void)requestAdvanceToNextInFlow;
- (void)requestCancel;
- (void)setAdvanceButtonEnabled:(BOOL)a0;

@end
