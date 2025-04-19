@class PXSharedLibraryStatusProvider, NSProgress, NSString, PXLibraryFilterState, PXSharedLibraryAssistantViewModel;
@protocol PXAssistantViewControllerDelegate;

@interface PXSharedLibraryAssistantSummaryViewController : PXAssistantTemplateViewController <PXAssistantViewController>

@property (retain, nonatomic) NSProgress *previewProgress;
@property (readonly, nonatomic) PXSharedLibraryAssistantViewModel *viewModel;
@property (readonly, nonatomic) PXSharedLibraryStatusProvider *statusProvider;
@property (readonly, nonatomic) PXLibraryFilterState *libraryFilterState;
@property (weak, nonatomic) id<PXAssistantViewControllerDelegate> assistantViewControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)updateProgress;
- (void)skipAndContinue;
- (void)_createPreviewAndCompleteAssistant;
- (id)_presentationEnvironment;
- (void)_previewInvitationAndCompleteAssistant;
- (void)_setIsProcessing:(BOOL)a0;
- (void)cancelShareIfInProgress;
- (void)createPreviewAndCompleteAssistant;
- (void)firstButtonAction:(id)a0;
- (id)initWithViewModel:(id)a0 sharedLibraryStatusProvider:(id)a1 libraryFilterState:(id)a2;
- (void)prepareUIForProcessing:(BOOL)a0;
- (void)thirdButtonAction:(id)a0;

@end
