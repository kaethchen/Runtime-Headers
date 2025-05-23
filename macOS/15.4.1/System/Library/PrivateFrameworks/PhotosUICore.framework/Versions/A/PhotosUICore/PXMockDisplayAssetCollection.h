@class NSString, NSArray, NSDate;

@interface PXMockDisplayAssetCollection : NSObject <PXDisplayAssetCollection>

@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSString *localizedSubtitle;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long subtype;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) BOOL isPrivacySensitiveAlbum;
@property (readonly, nonatomic) BOOL isEnriched;
@property (readonly, nonatomic) BOOL isEnrichmentComplete;
@property (readonly, nonatomic) double promotionScore;
@property (readonly, nonatomic) BOOL isAggregation;
@property (readonly, nonatomic) BOOL isRecent;
@property (readonly, nonatomic) unsigned short px_highlightEnrichmentState;
@property (readonly, nonatomic) long long px_highlightKind;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSString *localizedDebugDescription;
@property (readonly, nonatomic) NSArray *localizedLocationNames;
@property (readonly, nonatomic) NSString *localizedDateDescription;
@property (readonly, nonatomic) NSString *localizedSmartDescription;
@property (readonly, nonatomic) unsigned long long estimatedAssetCount;
@property (readonly, nonatomic) BOOL px_isVirtualCollection;
@property (readonly, nonatomic) NSString *localizedShortDateDescription;
@property (readonly, nonatomic) BOOL canContainAssets;
@property (readonly, nonatomic) BOOL canContainCollections;
@property (readonly, nonatomic) BOOL px_allowsImplicitSelectionForProjectOrSharingAction;
@property (readonly, nonatomic) BOOL px_canDeleteContent;
@property (readonly, nonatomic) BOOL px_canRemoveContent;
@property (readonly, nonatomic) BOOL px_canAddContent;
@property (readonly, nonatomic) BOOL px_canCreateContent;
@property (readonly, nonatomic) BOOL px_canRearrangeContent;
@property (readonly, nonatomic) BOOL px_isDeletable;
@property (readonly, nonatomic) BOOL px_isRenamable;
@property (readonly, nonatomic) BOOL px_allowsMoveToSharedLibrary;
@property (readonly, nonatomic) BOOL px_allowsMoveToPersonalLibrary;
@property (readonly, nonatomic) BOOL px_shouldUseFacesRectForSmartCropping;
@property (readonly, nonatomic) BOOL px_supportsFastCuration;
@property (readonly, nonatomic) BOOL px_wantsCurationByDefault;
@property (readonly, nonatomic) BOOL px_wantsShareAllAction;
@property (readonly, nonatomic) BOOL px_isUserCreated;
@property (readonly, nonatomic) BOOL px_isRegularAlbum;
@property (readonly, nonatomic) BOOL px_isImportedAlbum;
@property (readonly, nonatomic) BOOL px_isMyPhotoStreamAlbum;
@property (readonly, nonatomic) BOOL px_isUserSmartAlbum;
@property (readonly, nonatomic) BOOL px_isSmartAlbum;
@property (readonly, nonatomic) BOOL px_isRootSmartAlbum;
@property (readonly, nonatomic) BOOL px_isMediaTypeSmartAlbum;
@property (readonly, nonatomic) BOOL px_isLemonadeUtilitiesAlbum;
@property (readonly, nonatomic) BOOL px_isAllPhotosSmartAlbum;
@property (readonly, nonatomic) BOOL px_isFavoritesSmartAlbum;
@property (readonly, nonatomic) BOOL px_isPlacesSmartAlbum;
@property (readonly, nonatomic) BOOL px_isHiddenSmartAlbum;
@property (readonly, nonatomic) BOOL px_isRecentlyAddedSmartAlbum;
@property (readonly, nonatomic) BOOL px_isRecentlyDeletedSmartAlbum;
@property (readonly, nonatomic) BOOL px_isRecoveredSmartAlbum;
@property (readonly, nonatomic) BOOL px_isRecentsSmartAlbum;
@property (readonly, nonatomic) BOOL px_isRecentlyEditedSmartAlbum;
@property (readonly, nonatomic) BOOL px_isScreenRecordingsSmartAlbum;
@property (readonly, nonatomic) BOOL px_isVideosSmartAlbum;
@property (readonly, nonatomic) BOOL px_isTimelapsesSmartAlbum;
@property (readonly, nonatomic) BOOL px_isBurstsSmartAlbum;
@property (readonly, nonatomic) BOOL px_isSlomoVideosSmartAlbum;
@property (readonly, nonatomic) BOOL px_isSelfPortraitsSmartAlbum;
@property (readonly, nonatomic) BOOL px_isScreenshotsSmartAlbum;
@property (readonly, nonatomic) BOOL px_isDepthEffectSmartAlbum;
@property (readonly, nonatomic) BOOL px_isLivePhotosSmartAlbum;
@property (readonly, nonatomic) BOOL px_isAnimatedSmartAlbum;
@property (readonly, nonatomic) BOOL px_isLongExposuresSmartAlbum;
@property (readonly, nonatomic) BOOL px_isRAWSmartAlbum;
@property (readonly, nonatomic) BOOL px_isCinematicSmartAlbum;
@property (readonly, nonatomic) BOOL px_isProResSmartAlbum;
@property (readonly, nonatomic) BOOL px_isUnableToUploadSmartAlbum;
@property (readonly, nonatomic) BOOL px_isSharedLibrarySharingSuggestionsSmartAlbum;
@property (readonly, nonatomic) BOOL px_isSharedLibrarySharingSuggestion;
@property (readonly, nonatomic) BOOL px_isPanoramasSmartAlbum;
@property (readonly, nonatomic) BOOL px_isSpatialSmartAlbum;
@property (readonly, nonatomic) BOOL px_isAllLibraryDuplicatesSmartAlbum;
@property (readonly, nonatomic) BOOL px_isUtilityCollection;
@property (readonly, nonatomic) BOOL px_isRecentsCollection;
@property (readonly, nonatomic) BOOL px_isDuplicatesAlbum;
@property (readonly, nonatomic) BOOL px_allowsKeyAssetDisplay;
@property (readonly, nonatomic) NSString *px_symbolImageName;
@property (readonly, nonatomic) BOOL px_isPrivacySensitiveAlbum;
@property (readonly, nonatomic) BOOL px_containsPrivateContent;
@property (readonly, nonatomic) BOOL px_isMoment;
@property (readonly, nonatomic) BOOL px_isMemory;
@property (readonly, nonatomic) BOOL px_isHighlight;
@property (readonly, nonatomic) BOOL px_isHighlightEnrichedWithAssetMetadataAndScenesProcessed;
@property (readonly, nonatomic) BOOL px_isDayGroupHighlight;
@property (readonly, nonatomic) BOOL px_isDayHighlight;
@property (readonly, nonatomic) BOOL px_isMonthHighlight;
@property (readonly, nonatomic) BOOL px_isEvent;
@property (readonly, nonatomic) BOOL px_isTrip;
@property (readonly, nonatomic) BOOL px_isSuggestion;
@property (readonly, nonatomic) BOOL px_isMomentShare;
@property (readonly, nonatomic) BOOL px_isContentSyndicationAlbum;
@property (readonly, nonatomic) BOOL px_isSharedAlbum;
@property (readonly, nonatomic) BOOL px_isOwnedSharedAlbum;
@property (readonly, nonatomic) BOOL px_isCloudMultipleContributorsEnabled;
@property (readonly, nonatomic) BOOL px_isInReadWriteCloudLibrary;
@property (readonly, nonatomic) BOOL px_isFolder;
@property (readonly, nonatomic) BOOL px_isRegularFolder;
@property (readonly, nonatomic) BOOL px_isSmartFolder;
@property (readonly, nonatomic) BOOL px_isTopLevelFolder;
@property (readonly, nonatomic) BOOL px_isSharedAlbumsFolder;
@property (readonly, nonatomic) BOOL px_isSharedAlbumsAndActivityFolder;
@property (readonly, nonatomic) BOOL px_isMediaTypesFolder;
@property (readonly, nonatomic) BOOL px_isUtilitiesFolder;
@property (readonly, nonatomic) BOOL px_isProjectsFolder;
@property (readonly, nonatomic) BOOL px_isContentSyndicationFolder;
@property (readonly, nonatomic) BOOL px_isAllMacSyncedAlbumsFolder;
@property (readonly, nonatomic) BOOL px_isMacSyncedAlbum;
@property (readonly, nonatomic) BOOL px_isMacSyncedRegularAlbum;
@property (readonly, nonatomic) BOOL px_isMacSyncedFacesAlbum;
@property (readonly, nonatomic) BOOL px_isMacSyncedEventsFolder;
@property (readonly, nonatomic) BOOL px_isMacSyncedFacesFolder;
@property (readonly, nonatomic) BOOL px_isProject;
@property (readonly, nonatomic) BOOL px_isPhotosVirtualCollection;
@property (readonly, nonatomic) BOOL px_isMomentsVirtualCollection;
@property (readonly, nonatomic) BOOL px_isMemoriesVirtualCollection;
@property (readonly, nonatomic) BOOL px_isPeopleVirtualCollection;
@property (readonly, nonatomic) BOOL px_isSharedActivityVirtualCollection;
@property (readonly, nonatomic) BOOL px_isTransientPlacesCollection;
@property (readonly, nonatomic) BOOL px_isImportHistoryCollection;
@property (readonly, nonatomic) BOOL px_isAllAlbumsVirtualCollection;
@property (readonly, nonatomic) BOOL px_isMyAlbumsVirtualCollection;
@property (readonly, nonatomic) BOOL px_isSharedAlbumsVirtualCollection;
@property (readonly, nonatomic) BOOL px_isContentSyndicationVirtualCollection;
@property (readonly, nonatomic) BOOL px_isMapVirtualCollection;
@property (readonly, nonatomic) BOOL px_isContentSyndicationAllPhotosAlbum;
@property (readonly, nonatomic) BOOL px_isMomentShareVirtualCollection;
@property (readonly, nonatomic) BOOL px_isEventsVirtualCollection;
@property (readonly, nonatomic) BOOL px_isTripsVirtualCollection;
@property (readonly, nonatomic) BOOL px_isFeaturedPhotosCollection;
@property (readonly, nonatomic) BOOL px_isWallpaperSuggestionsVirtualCollection;
@property (readonly, nonatomic) BOOL px_isBookmarksVirtualCollection;
@property (readonly, nonatomic) BOOL px_isSearchResultsVirtualCollection;
@property (readonly, nonatomic) BOOL px_isImportSessionCollection;
@property (readonly, nonatomic) BOOL px_isRecentlySavedCollection;
@property (readonly, nonatomic) BOOL px_isRecentlyViewedCollection;
@property (readonly, nonatomic) BOOL px_isRecentlyEditedCollection;
@property (readonly, nonatomic) BOOL px_isRecentlySharedCollection;
@property (readonly, nonatomic) BOOL px_isImportAssetCollection;
@property (readonly, nonatomic) BOOL px_isSavedTodayCollection;
@property (readonly, nonatomic) id px_cheapLogIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (long long)assetCollectionType;
- (id)localizedDateDescriptionWithOptions:(unsigned long long)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 type:(long long)a2 subtype:(long long)a3;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 type:(long long)a2 subtype:(long long)a3 startDate:(id)a4 endDate:(id)a5;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 type:(long long)a2 subtype:(long long)a3 startDate:(id)a4 endDate:(id)a5 isPrivacySensitiveAlbum:(BOOL)a6;

@end
