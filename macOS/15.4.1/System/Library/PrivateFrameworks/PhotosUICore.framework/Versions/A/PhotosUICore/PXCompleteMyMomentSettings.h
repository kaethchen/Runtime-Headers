@interface PXCompleteMyMomentSettings : PXSettings

@property (nonatomic) long long cmmShareSheetBehavior;
@property (nonatomic) BOOL disableShareSheetAutomaticBehaviorIfADPEnabled;
@property (nonatomic) long long shareSheetLinkAssetCountThreshold;
@property (nonatomic) unsigned long long shareSheetLinkTotalFileSizeThresholdMB;
@property (nonatomic) unsigned long long shareSheetLinkSpatialVideoFileSizeThresholdMB;
@property (nonatomic) unsigned long long shareSheetLinkSpatialImageFileSizeThresholdMB;
@property (nonatomic) BOOL alwaysSortAfterAddMore;
@property (nonatomic) long long invitationsDataSourceType;
@property (nonatomic) BOOL preventNilTitles;
@property (nonatomic) BOOL simulateMomentShareCreationError;
@property (nonatomic) long long simulatedMomentShareCreationErrorType;
@property (nonatomic) BOOL showTitle;
@property (nonatomic) BOOL showSubtitle;
@property (nonatomic) BOOL showOtherTitle;
@property (nonatomic) BOOL showMessage;
@property (nonatomic) BOOL showSenderField;
@property (nonatomic) BOOL showPeopleSuggestions;
@property (nonatomic) BOOL showMergeCandidateSuggestionsAfterBootstrapNaming;
@property (nonatomic) long long publishTransport;
@property (nonatomic) long long peopleSuggestionsDataSourceType;
@property (nonatomic) long long initialLayoutType;
@property (nonatomic) BOOL allowOneUpGesture;
@property (nonatomic) BOOL allowSwipeSelection;
@property (nonatomic) BOOL simulateImport;
@property (nonatomic) BOOL simulateImportFailure;
@property (nonatomic) BOOL simulateShouldPromptUserToIgnoreBudgets;
@property (nonatomic) BOOL simulateCPLAlertOnPublish;
@property (nonatomic) BOOL emulatesEmptyMomentShare;
@property (nonatomic) BOOL disableOneUpDescriptiveAdd;
@property (nonatomic) BOOL disableDescriptiveWaiting;
@property (nonatomic) BOOL disableClickyOrb;
@property (nonatomic) BOOL disablePrintAction;
@property (nonatomic) BOOL disableShareAction;
@property (nonatomic) BOOL disableShowInAllPhotosAction;
@property (nonatomic) BOOL disableCopyAction;
@property (nonatomic) BOOL disableDetailView;
@property (nonatomic) BOOL simulateAllMomentSharesAreNew;
@property (nonatomic) long long reviewFlow;
@property (nonatomic) long long reviewFlowDataSourceType;
@property (nonatomic) BOOL allowLayoutTransitionGesture;
@property (nonatomic) BOOL shouldShowInlineAddButton;
@property (nonatomic) BOOL showAttachedHeaderView;
@property (nonatomic) BOOL showFloatingBanner;
@property (nonatomic) BOOL showSectionHeaders;
@property (nonatomic) BOOL sectionHeadersShouldFloat;
@property (nonatomic) BOOL showStatusFooter;
@property (nonatomic) BOOL showProgressInGrid;
@property (nonatomic) BOOL showProgressBannerView;
@property (nonatomic) BOOL showProgressBannerViewPaused;
@property (nonatomic) BOOL directSendMessages;
@property (nonatomic) BOOL fakeMomentShareURL;
@property (nonatomic) BOOL autoAcceptBubbles;
@property (nonatomic) BOOL simulateDelays;
@property (nonatomic) BOOL showURLInBubble;
@property (nonatomic) BOOL showDebugStatus;
@property (nonatomic) BOOL alwaysTapToRetry;
@property (nonatomic) long long overrideNumberOfColumnsInPortrait;
@property (nonatomic) long long overrideNumberOfColumnsInLandscape;
@property (nonatomic) BOOL useDebugColors;
@property (nonatomic) BOOL simulateMomentShareBubbleError;
@property (nonatomic) long long simulatedMomentShareBubbleErrorType;
@property (nonatomic) BOOL showMessageTextEntryGadget;
@property (nonatomic) long long sharingLinkType;
@property (nonatomic) BOOL graphSuggestionEnabled;
@property (nonatomic) double peopleSuggestionsTimeout;
@property (nonatomic) BOOL shouldBakeInIfLivePhotoPlaybackDisabled;
@property (nonatomic) BOOL shouldBakeInIfLivePhotoMuted;
@property (nonatomic) BOOL shouldBakeInIfAdjustedByThirdParty;
@property (nonatomic) BOOL shouldBakeInIfCropped;
@property (nonatomic) BOOL shouldBakeInIfTimelineTrimmed;
@property (nonatomic) BOOL shouldBakeInIfPortraitDepthEffectEnabled;
@property (nonatomic) BOOL shouldBakeInIfContainsPenultimateResources;
@property (nonatomic) BOOL shouldIncludeSpatialOvercaptureResources;
@property (nonatomic) long long simulateFetchErrorType;
@property (nonatomic) long long simulateFeatureFlagState;
@property (nonatomic) long long simulateCloudState;
@property (nonatomic) long long simulateCloudPhotosState;
@property (nonatomic) long long simulateCPLFeatureState;
@property (nonatomic) long long simulateCPLCMMFeatureState;
@property (nonatomic) long long simulateSystemPhotoLibraryState;
@property (nonatomic) long long simulateCloudPhotosExitState;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
