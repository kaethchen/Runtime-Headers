@class NSStackView, FI_TPropertyShortVersionController, FI_TColumnPreviewPropertyTaggingTokenFieldController, FI_TTitleAndValueView, NSObject, FI_TPropertyColumnPreviewCreationDateController, FI_TTextField, FI_TPropertyColumnPreviewModificationDateController, NSString, FI_TPreviewOptions, FI_TColumnPreviewSpotlightMetaDataController, FI_TPropertyICloudShareOwnerController, FI_TButton, NSLayoutConstraint, NSArray, FI_TPropertyColumnPreviewLastOpenedDateController, NSIndexSet, FI_TKeyValueObserverGlue;

@interface FI_TColumnPreviewInfoViewController : FI_TBaseInfoWindowViewController <NSStackViewDelegate> {
    FI_TPropertyICloudShareOwnerController *_iCloudShareOwnerController;
    FI_TPropertyColumnPreviewCreationDateController *_createDateController;
    FI_TPropertyColumnPreviewModificationDateController *_modDateController;
    FI_TPropertyColumnPreviewLastOpenedDateController *_lastOpenedDateController;
    FI_TPropertyShortVersionController *_versionController;
    FI_TColumnPreviewSpotlightMetaDataController *_spotlightMetaDataController;
    FI_TColumnPreviewPropertyTaggingTokenFieldController *_taggingController;
    NSStackView *_stackView;
    FI_TButton *_expandButton;
    FI_TTextField *_informationTextFld;
    FI_TTitleAndValueView *_sharedByTitleAndValueView;
    FI_TTitleAndValueView *_createdTitleAndValueView;
    FI_TTitleAndValueView *_modifiedTitleAndValueView;
    FI_TTitleAndValueView *_lastOpenedTitleAndValueView;
    FI_TTitleAndValueView *_versionTitleAndValueView;
    FI_TTextField *_tagsTextFld;
    NSLayoutConstraint *_informationTextFldTopConstraint;
    NSLayoutConstraint *_informationTextFldBottomConstraint;
    NSLayoutConstraint *_tagsTextFldTopConstraint;
    NSLayoutConstraint *_tagsTextFldBottomConstraint;
    BOOL _isRetargeting;
    struct TKeyValueObserver { FI_TKeyValueObserverGlue *fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; NSIndexSet *fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } _activeOptionsObserver;
    struct TKeyValueObserver { FI_TKeyValueObserverGlue *fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; NSIndexSet *fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } _filteredDeltaDidChange;
    struct TKeyValueObserver { FI_TKeyValueObserverGlue *fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; NSIndexSet *fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } _arrangedMetadataViewDidChange;
    struct optional_bool { union { char __null_state_; BOOL __val_; } ; BOOL __engaged_; } _wasCollapsedBeforeEditing;
    struct TKeyValueObserver { FI_TKeyValueObserverGlue *fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; NSIndexSet *fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } _editingOptionsObserver;
}

@property (retain, nonatomic) FI_TPreviewOptions *previewOptions;
@property (readonly, nonatomic) BOOL shouldBeVisible;
@property (nonatomic) BOOL showSmallThumbnail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)stackView:(id)a0 didReattachViews:(id)a1;
- (void)updateFilters;
- (void)aboutToTearDown;
- (void)refresh;
- (void)configureView;
- (id)addConstraintsToAvoidOverlapsInStackViewAnimations;
- (void)applyPreviewOptions;
- (BOOL)canShowMoreOrLess;
- (void)configureExpandingButton;
- (void)configureForEditing:(BOOL)a0;
- (void)configureMinRowCount:(double)a0 maxRowCount:(double)a1;
- (void)expandToggle:(id)a0;
- (void)loadValueControllers;
- (unsigned int)notificationOptionsForNodes:(const void *)a0;
- (void)optionsDidChangeEditMode;
- (long long)possibleHiddenAttributes;
- (void)targetNodesChanged;
- (void)targetNodesChanging;
- (void)updateConstraintsForSmallThumbnail;
- (void)updateExpandButtonState;
- (void)updateSeparatorsInStackViews;
- (void)userSelectedKeysDidChange;

@end
