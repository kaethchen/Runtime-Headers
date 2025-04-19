@class NSView, NSString, PXSharedLibraryAssistantParticipantViewModel, NSArray, PXSharedLibraryStatusProvider, PXSharedLibraryAssistantViewModel, PXAssistantTemplateView, NSProgress, PXSharedLibraryParticipantTableViewController;

@interface PXSharedLibraryAssistantReviewParticipantsViewController : PXAssistantTemplateViewController <PXChangeObserver> {
    PXSharedLibraryAssistantParticipantViewModel *_participantViewModel;
    PXSharedLibraryParticipantTableViewController *_tableViewController;
    NSArray *_variableLayoutConstraints;
    NSView *_contentView;
    PXAssistantTemplateView *_templateView;
    NSProgress *_activityProgress;
}

@property (readonly, nonatomic) BOOL hasParticipants;
@property (readonly, nonatomic) PXSharedLibraryAssistantViewModel *viewModel;
@property (readonly, nonatomic) PXSharedLibraryStatusProvider *statusProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_updateContent;
- (void)_updateImage;
- (void)loadView;
- (void)viewWillAppear;
- (void)_updateProgress;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateTableViewInteractability;
- (void)_finishReviewStepWithInvitationTransport:(long long)a0;
- (void)_setIsProcessing:(BOOL)a0;
- (void)_updateButtonItems;
- (void)_updateSubtitleText;
- (void)firstButtonAction:(id)a0;
- (id)initWithViewModel:(id)a0 participantViewModel:(id)a1 sharedLibraryStatusProvider:(id)a2;
- (void)thirdButtonAction:(id)a0;

@end
