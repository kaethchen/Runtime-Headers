@class NSIndexSet, NSString, NSArray, NSMutableDictionary, PXStoryPhotoKitAssetContainer, PXStoryErrorRepository, PHPhotoLibrary, PXStorySongsConfiguration, PXVolumeController, NSObject, PXMediaProvider;
@protocol PXStoryDetailedSaliencyProducer, PXDisplayAssetFetchResult, PXDisplayAssetCollection, PXUserDefaultsDataSource, PFStoryRecipe, OS_dispatch_queue, PXStoryRelatedProducer, PXDisplayAsset, PXStoryStyleProducer, OS_os_log, PXStoryErrorReporter, PXStoryAutoCurationProducer, PXTapToRadarDiagnosticProvider, PXAssetCollectionActionPerformerDelegate, PXStoryTimelineProducer, PXStoryMusicCurationProvider, PXAppleMusicStatusProvider, PXAnonymousViewController;

@interface PXStoryConfiguration : NSObject <NSCopying, PXStoryQueueParticipant>

@property (readonly, nonatomic) PXStoryPhotoKitAssetContainer *photoKitAssetContainer;
@property (readonly, nonatomic) id<PXDisplayAssetCollection> assetCollection;
@property (readonly, nonatomic) id<PXDisplayAssetFetchResult> assets;
@property (readonly, nonatomic) id<PXDisplayAssetFetchResult> keyAsset;
@property (readonly, nonatomic) NSArray *referencePersons;
@property (readonly, nonatomic) id<PFStoryRecipe> persistableRecipe;
@property (readonly, nonatomic) PXStoryErrorRepository *errorRepository;
@property (readonly, nonatomic) NSMutableDictionary *userInfo;
@property (readonly, nonatomic) PXStoryConfiguration *parentConfiguration;
@property (retain, nonatomic) id originalContainer;
@property (retain, nonatomic) id originalCurationContext;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (retain, nonatomic) PXStorySongsConfiguration *songsConfiguration;
@property (nonatomic) long long songsProducerKind;
@property (retain, nonatomic) id<PXStoryDetailedSaliencyProducer> detailedSaliencyProducer;
@property (nonatomic) BOOL disableBufferingController;
@property (retain, nonatomic) NSString *launchType;
@property (retain, nonatomic) PXVolumeController *volumeController;
@property (retain, nonatomic) id<PXUserDefaultsDataSource> userDefaults;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } fixedSegmentDuration;
@property (nonatomic) long long collectionPersistenceConfirmationStyle;
@property (nonatomic) BOOL useLowMemoryMode;
@property (nonatomic) BOOL wantsFeedbackAction;
@property (nonatomic) BOOL allowsVerticalGestures;
@property (nonatomic) BOOL activeStateManagedExternally;
@property (nonatomic) unsigned long long forcedKenBurnsScaleDirection;
@property (nonatomic) unsigned long long keyAssetKenBurnsScaleDirection;
@property (nonatomic) unsigned long long keyAssetKenBurnsPanDirection;
@property (nonatomic) double videoPlaybackRate;
@property (nonatomic) double overlayBlurRadius;
@property (retain, nonatomic) id<PXDisplayAsset> desiredStartAsset;
@property (nonatomic) BOOL allowPlayingMultipleStoriesSimultaneously;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (nonatomic) unsigned long long logContext;
@property (retain, nonatomic) PXMediaProvider *mediaProvider;
@property (retain, nonatomic) id<PXStoryMusicCurationProvider> musicCurationProvider;
@property (retain, nonatomic) id<PXAppleMusicStatusProvider> appleMusicStatusProvider;
@property (retain, nonatomic) id<PXStoryTimelineProducer> timelineProducer;
@property (retain, nonatomic) id<PXStoryStyleProducer> styleProducer;
@property (retain, nonatomic) id<PXStoryRelatedProducer> relatedProducer;
@property (retain, nonatomic) id<PXStoryAutoCurationProducer> autoCurationProducer;
@property (weak, nonatomic) NSObject<PXAnonymousViewController> *presentingViewController;
@property (weak, nonatomic) id<PXAssetCollectionActionPerformerDelegate> assetCollectionActionPerformerDelegate;
@property (weak, nonatomic) id<PXTapToRadarDiagnosticProvider> containerTapToRadarDiagnosticsProvider;
@property (nonatomic) unsigned long long options;
@property (readonly, nonatomic) BOOL isAppleMusicPreview;
@property (readonly, nonatomic) BOOL isPresentedForAirPlay;
@property (readonly, nonatomic) BOOL isExportPreview;
@property (readonly, nonatomic) BOOL isRelated;
@property (readonly, nonatomic) BOOL shouldDismissAtEnd;
@property (readonly, nonatomic) BOOL shouldReplayAtEnd;
@property (readonly, nonatomic) BOOL shouldFadeToBlackAtEnd;
@property (nonatomic) long long initialViewMode;
@property (nonatomic) BOOL isAllowedToPlayAnyMusicOrSound;
@property (nonatomic) BOOL shouldForceUsingFlexMusic;
@property (nonatomic) BOOL isAllowedToPlayAppleMusic;
@property (nonatomic) long long curationKind;
@property (nonatomic) BOOL nUpCompositionIgnoresOverallTargetDuration;
@property (nonatomic) BOOL disableNUp;
@property (nonatomic) unsigned long long disabledClipMotionStyles;
@property (nonatomic) BOOL isLetterboxingAllowed;
@property (nonatomic) unsigned long long allowedInlineTitles;
@property (retain, nonatomic) NSIndexSet *allowedTransitionKinds;
@property (nonatomic) long long keyAssetAspectRatioOverride;
@property (nonatomic) long long otherAssetsAspectRatioOverride;
@property (nonatomic) BOOL preferAssetLocationAndCreationDateForClipTitleAndSubtitle;
@property (nonatomic) BOOL forcePanUpOrDownInOneUpKenBurnsWithPortraitAspectAsset;
@property (nonatomic) BOOL usePreferredCropRectWhenVerticallyPanningLargeFaceAreasInPortraitAssets;
@property (nonatomic) BOOL preferFaceCrops;
@property (nonatomic) double kenBurnsPanSpeed;
@property (nonatomic) double kenBurnsScaleSpeed;
@property (nonatomic) double noncriticalBufferingTimeout;
@property (nonatomic) BOOL disableVideoPlayback;
@property (nonatomic) long long movementAnimationCurve;
@property (nonatomic) BOOL allowInactiveAppearance;
@property (nonatomic) BOOL allowSkipToSegmentWithPlaceholder;
@property (readonly, nonatomic) id<PXStoryErrorReporter> errorReporter;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithAssetCollection:(id)a0;
- (id)initWithAssets:(id)a0;
- (BOOL)_checkForceFlexMusicSettingForAssetCollection:(id)a0;
- (void)_copyPropertiesFromConfiguration:(id)a0;
- (void)configureForSlideShow;
- (void)configureWithNavigationSource:(id)a0;
- (id)copyForMusicPreviewWithCuratedSongs:(id)a0;
- (id)copyWithAdditionalOptions:(unsigned long long)a0;
- (id)copyWithAssetCollection:(id)a0;
- (id)copyWithKeyAsset:(id)a0;
- (id)copyWithParentConfiguration:(id)a0;
- (id)copyWithStoryQueue:(id)a0;
- (id)initWithAssetCollection:(id)a0 assets:(id)a1 keyAsset:(id)a2 referencePersons:(id)a3 persistableRecipe:(id)a4 musicCurationProvider:(id)a5 errorRepository:(id)a6 queue:(id)a7 parentConfiguration:(id)a8;
- (id)initWithAssetCollection:(id)a0 keyAsset:(id)a1;
- (id)initWithAssetCollection:(id)a0 keyAsset:(id)a1 referencePersons:(id)a2;
- (id)initWithAssets:(id)a0 keyAsset:(id)a1 persistableRecipe:(id)a2;
- (id)initWithPersistableRecipe:(id)a0;
- (id)initWithSyntheticAsset;
- (id)initWithSyntheticAssetCount:(long long)a0;
- (void)swift_copyPropertiesFromConfiguration:(id)a0;
- (void)swift_copyPropertiesFromParentConfiguration:(id)a0;

@end
