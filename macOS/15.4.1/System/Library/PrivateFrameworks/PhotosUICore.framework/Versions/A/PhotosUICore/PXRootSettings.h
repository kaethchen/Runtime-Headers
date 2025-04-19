@class PXAssetsRecoverySettings, PXSystemNavigationSettings, PXPasteboardAssetSettings, PXSharingSettings, PXCPLStatusSettings, PXMemoriesFeedSettings, PXMessagesUISettings, PXAssetsSceneSettings, PXForYouSettings, PXPhotoPickerSettings, PXGridSettings, PXCompleteMyMomentSettings, PXDiagnosticsSettings, PXSearchSettings, PXKitSettings, PXLemonadeSettings, PXStorySettings, PXVideoPlaybackSettings, PXUpNextSettings, PXPhotosDetailsNavigationSettings, PXCuratedLibrarySettings, PXTilingSettings, PXWorkaroundSettings, PXKeyboardSettings, PXGenerativeStorySettings, PXFooterSettings, PXApplicationSettings, PXSharedAlbumsSettings, PXMediaProviderSettings, PXPhotosDetailsHeaderTileSettings, PXSwipeDownSettings, PXCursorInteractionSettings, PXDragAndDropSettings, PXPeopleUISettings, PXSharedLibrarySettings, PXGPPTSettings, PXImportSettings, PXMapSettings, PXPeopleDetailSettings, PXDuplicatesSettings, PXPhotosGridSettings, PXDisplayAssetViewDemoSettings, PXAssetVariationsSettings, PXStickersSettings, PXOneUpSettings, PXModelSettings, PXPhotosDataSourceSettings, PXPhotosDetailsSettings, PXZoomablePhotosSettings, PXContentSyndicationSettings, PXImageModulationSettings, PXAudioSettings, PXAlbumsDebugUISettings, PXContentPrivacySettings, PXInlineVideoStabilizationSettings, PXMemoriesRelatedSettings, PXFocusSettings;

@interface PXRootSettings : PXSettings

@property (nonatomic) BOOL private_wantsInternalUI;
@property (retain, nonatomic) PXDiagnosticsSettings *diagnostics;
@property (retain, nonatomic) PXPhotosDetailsNavigationSettings *detailsNavigationSettings;
@property (retain, nonatomic) PXStorySettings *storySettings;
@property (retain, nonatomic) PXImageModulationSettings *imageModulationSettings;
@property (retain, nonatomic) PXZoomablePhotosSettings *zoomablePhotosSettings;
@property (retain, nonatomic) PXCuratedLibrarySettings *curatedLibrarySettings;
@property (retain, nonatomic) PXPhotoPickerSettings *photoPickerSettings;
@property (retain, nonatomic) PXKeyboardSettings *keyboardSettings;
@property (retain, nonatomic) PXVideoPlaybackSettings *videoPlaybackSettings;
@property (retain, nonatomic) PXOneUpSettings *oneUpSettings;
@property (retain, nonatomic) PXPhotosDetailsSettings *photosDetails;
@property (retain, nonatomic) PXPhotosDetailsHeaderTileSettings *photosDetailsHeaderTile;
@property (retain, nonatomic) PXMemoriesFeedSettings *memoryFeed;
@property (retain, nonatomic) PXMemoriesRelatedSettings *memoriesRelated;
@property (retain, nonatomic) PXUpNextSettings *upNextSettings;
@property (retain, nonatomic) PXContentPrivacySettings *contentPrivacySettings;
@property (retain, nonatomic) PXContentSyndicationSettings *contentSyndicationSettings;
@property (retain, nonatomic) PXMessagesUISettings *messagesUISettings;
@property (retain, nonatomic) PXAssetsSceneSettings *assetsScene;
@property (retain, nonatomic) PXPhotosDataSourceSettings *photosDataSource;
@property (retain, nonatomic) PXTilingSettings *tiling;
@property (retain, nonatomic) PXModelSettings *model;
@property (retain, nonatomic) PXKitSettings *kit;
@property (retain, nonatomic) PXWorkaroundSettings *workaroundSettings;
@property (retain, nonatomic) PXGPPTSettings *tungstenPPTSettings;
@property (retain, nonatomic) PXSwipeDownSettings *swipeDownSettings;
@property (retain, nonatomic) PXPeopleDetailSettings *peopleDetail;
@property (retain, nonatomic) PXPeopleUISettings *peopleUISettings;
@property (retain, nonatomic) PXDragAndDropSettings *dragAndDrop;
@property (retain, nonatomic) PXCursorInteractionSettings *cursorInteractionSettings;
@property (retain, nonatomic) PXSharingSettings *sharingSettings;
@property (retain, nonatomic) PXAssetVariationsSettings *variationsSettings;
@property (retain, nonatomic) PXAssetsRecoverySettings *assetsRecoverySettings;
@property (retain, nonatomic) PXCompleteMyMomentSettings *completeMyMoment;
@property (retain, nonatomic) PXForYouSettings *forYou;
@property (retain, nonatomic) PXGridSettings *grid;
@property (retain, nonatomic) PXImportSettings *importSettings;
@property (retain, nonatomic) PXSearchSettings *searchSettings;
@property (retain, nonatomic) PXAlbumsDebugUISettings *albumsDebugUISettings;
@property (retain, nonatomic) PXApplicationSettings *applicationSettings;
@property (retain, nonatomic) PXFooterSettings *footerSettings;
@property (retain, nonatomic) PXPhotosGridSettings *photosGridSettings;
@property (retain, nonatomic) PXSharedLibrarySettings *sharedLibrarySettings;
@property (retain, nonatomic) PXGenerativeStorySettings *generativeStorySettings;
@property (retain, nonatomic) PXLemonadeSettings *lemonadeSettings;
@property (retain, nonatomic) PXCPLStatusSettings *cplStatusSettings;
@property (retain, nonatomic) PXDuplicatesSettings *duplicatesSettings;
@property (retain, nonatomic) PXInlineVideoStabilizationSettings *inlineVideoStabilizationSettings;
@property (nonatomic) BOOL showLibraryFilterTip;
@property (retain, nonatomic) PXAudioSettings *audioSettings;
@property (retain, nonatomic) PXMediaProviderSettings *mediaProviderSettings;
@property (retain, nonatomic) PXPasteboardAssetSettings *dragDropSettings;
@property (retain, nonatomic) PXDisplayAssetViewDemoSettings *assetViewDemoSettings;
@property (retain, nonatomic) PXFocusSettings *focusSettings;
@property (retain, nonatomic) PXSystemNavigationSettings *systemNavigationSettings;
@property (retain, nonatomic) PXStickersSettings *stickersSettings;
@property (retain, nonatomic) PXMapSettings *mapSettings;
@property (retain, nonatomic) PXSharedAlbumsSettings *sharedAlbumsSettings;
@property (nonatomic) BOOL hideWIPAlerts;
@property (nonatomic) BOOL showWIPAlertRadar;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (void)createChildren;
- (void)setDefaultValues;
- (id)parentSettings;
- (BOOL)canShowInternalUI;
- (void)setCanShowInternalUI:(BOOL)a0;

@end
