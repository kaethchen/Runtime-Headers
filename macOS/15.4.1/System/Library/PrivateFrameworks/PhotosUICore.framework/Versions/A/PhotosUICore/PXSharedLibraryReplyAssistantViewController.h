@class PXSharedLibraryAssistantViewModel, NSString, PXSharedLibraryLegacyDevicesFallbackMonitor;
@protocol PXAssistantViewControllerDelegate;

@interface PXSharedLibraryReplyAssistantViewController : PXAssistantTemplateViewController <PXChangeObserver, PXAssistantViewController>

@property (nonatomic) BOOL wantsToStepForward;
@property (readonly, nonatomic) PXSharedLibraryAssistantViewModel *viewModel;
@property (readonly, nonatomic) PXSharedLibraryLegacyDevicesFallbackMonitor *legacyDevicesFallbackMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXAssistantViewControllerDelegate> assistantViewControllerDelegate;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)declineInvitation;
- (BOOL)_canStepForward;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_setIsWaitingToStepForward:(BOOL)a0;
- (void)_stepForward;
- (void)_updateButtonItems;
- (void)acceptAndContinue;
- (void)firstButtonAction:(id)a0;
- (id)initWithViewModel:(id)a0 legacyDevicesFallbackMonitor:(id)a1;
- (void)legacyDevicesFallbackMonitorChangedState;
- (void)secondButtonAction:(id)a0;

@end
