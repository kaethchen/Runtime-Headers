@class NSTextField, NSString, NSArray, PXAssistantTemplateView, PXPeoplePickerCollectionView, PXSharedLibraryButtonBox, NSMutableArray, PXSharedLibraryAssistantViewModel, NSLayoutConstraint, PXSharedLibraryIncludedPeopleDataSourceManager, NSBox;
@protocol PXAssistantViewControllerDelegate;

@interface PXSharedLibraryAssistantPeopleViewController : PXAssistantTemplateViewController <PXPhotoLibraryUIChangeObserver, NSCollectionViewDataSource, PXAssistantViewController, PXChangeObserver, PXPeopleFlowDelegate, PXPeoplePickerViewControllerDelegate, PXSectionedDataSourceManagerObserver, PXPeoplePickerCollectionViewDelegate, PXPeoplePickerCollectionViewItemDelegate> {
    NSMutableArray *_peopleInfosToIdentify;
    BOOL _wantsToContinueToNextStep;
    NSTextField *_footerLabel;
    PXPeoplePickerCollectionView *_collectionView;
    NSLayoutConstraint *_boxHeightConstraint;
    NSLayoutConstraint *_buttonBoxToFooterConstraint;
    NSLayoutConstraint *_buttonBoxToTopConstraint;
    NSBox *_collectionViewBox;
    PXSharedLibraryButtonBox *_buttonBox;
    PXAssistantTemplateView *_templateView;
}

@property (readonly, nonatomic) NSString *textForFooter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *disabledIdentifiers;
@property (readonly, nonatomic) PXSharedLibraryAssistantViewModel *viewModel;
@property (readonly, nonatomic) PXSharedLibraryIncludedPeopleDataSourceManager *dataSourceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXAssistantViewControllerDelegate> assistantViewControllerDelegate;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)cancel:(id)a0;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)done:(id)a0;
- (void)loadView;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)windowDidChangeBackingProperties:(id)a0;
- (id)initWithViewModel:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_advanceToNextStep;
- (void)_completeStep;
- (void)_dequeuePersonInfoToIdentify;
- (void)_fixupStalePersonForUUID:(id)a0 loneParticipantInfo:(id)a1;
- (id)_infoAtIndexPath:(id)a0;
- (id)_personAtIndexPath:(id)a0;
- (void)_presentMultiSelectPicker:(id)a0;
- (void)_presentSingleSelectPickerForIncludedPersonInfo:(id)a0;
- (void)_suggestedStartDateChanged;
- (void)_updateBoxHeightConstraint;
- (void)_updateButtonItems;
- (void)_updateFooterLabel;
- (void)_updateSubtitleText;
- (void)_updateViewVisibilities;
- (id)alertConfigurationForIdentifyingPeopleInfos:(id)a0 action:(id /* block */)a1;
- (void)firstButtonAction:(id)a0;
- (void)identifyClickedForViewItem:(id)a0;
- (id)peopleInfosToIdentifyInDataSource:(id)a0;
- (void)peoplePickerViewController:(id)a0 didFinishPickingPeopleWithUUIDs:(id)a1;
- (void)peoplePickerViewControllerDidCancel:(id)a0;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0;
- (void)preferredScrollerStyleDidChange:(id)a0;
- (void)removeClickedForViewItem:(id)a0;
- (void)setupLibraryChangeListening;
- (void)thirdButtonAction:(id)a0;
- (void)updateWithPerson:(id)a0 loneParticipantInfo:(id)a1;

@end
