@class MPModelPlaybackPosition, NSString, NSArray, NSDictionary, NSDate, MPModelStoreAsset, MPModelFileAsset;

@interface MPModelMovie : MPModelObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *clips;
@property (copy, nonatomic) NSString *descriptionText;
@property (nonatomic) double duration;
@property (nonatomic) long long explicitRating;
@property (copy, nonatomic) NSString *tagline;
@property (copy, nonatomic) NSDictionary *movieInfoDictionary;
@property (copy, nonatomic) NSDate *releaseDate;
@property (retain, nonatomic) MPModelFileAsset *localFileAsset;
@property (retain, nonatomic) MPModelPlaybackPosition *playbackPosition;
@property (retain, nonatomic) MPModelStoreAsset *storeAsset;
@property (copy, nonatomic) id /* block */ artworkCatalogBlock;
@property (copy, nonatomic) id /* block */ editorialArtworkCatalogBlock;
@property (nonatomic) BOOL hasCloudSyncSource;
@property (nonatomic, getter=isLibraryAdded) BOOL libraryAdded;
@property (copy, nonatomic) NSDate *libraryAddedDate;
@property (nonatomic, getter=isLibraryAddEligible) BOOL libraryAddEligible;
@property (nonatomic) long long keepLocalEnableState;
@property (nonatomic) long long keepLocalManagedStatus;
@property (nonatomic) unsigned long long keepLocalManagedStatusReason;
@property (nonatomic) unsigned long long keepLocalConstraints;
@property (copy, nonatomic) NSString *storeCanonicalID;
@property (readonly, copy, nonatomic) NSDate *downloadedDate;
@property (readonly, copy, nonatomic) NSDate *lastDevicePlaybackDate;

+ (void)__MPModelPropertyMovieKeepLocalManagedStatus__MAPPING_MISSING__;
+ (void)__MPModelPropertyMovieLastDevicePlaybackDate__MAPPING_MISSING__;
+ (void)__MPModelPropertyMovieArtwork__MAPPING_MISSING__;
+ (void)__MPModelPropertyMovieDescriptionText__MAPPING_MISSING__;
+ (void)__MPModelPropertyMovieDownloadedDate__MAPPING_MISSING__;
+ (void)__MPModelPropertyMovieDuration__MAPPING_MISSING__;
+ (void)__MPModelPropertyMovieEditorialArtwork__MAPPING_MISSING__;
+ (void)__MPModelPropertyMovieExplicitRating__MAPPING_MISSING__;
+ (void)__MPModelPropertyMovieHasCloudSyncSource__MAPPING_MISSING__;
+ (void)__MPModelPropertyMovieInfoDictionary__MAPPING_MISSING__;
+ (void)__MPModelPropertyMovieKeepLocalConstraints__MAPPING_MISSING__;
+ (void)__MPModelPropertyMovieKeepLocalEnableState__MAPPING_MISSING__;
+ (void)__MPModelPropertyMovieKeepLocalManagedStatusReason__MAPPING_MISSING__;
+ (void)__MPModelPropertyMovieLibraryAddEligible__MAPPING_MISSING__;
+ (void)__MPModelPropertyMovieLibraryAddedDate__MAPPING_MISSING__;
+ (void)__MPModelPropertyMovieLibraryAdded__MAPPING_MISSING__;
+ (void)__MPModelPropertyMovieReleaseDate__MAPPING_MISSING__;
+ (void)__MPModelPropertyMovieStoreCanonicalID__MAPPING_MISSING__;
+ (void)__MPModelPropertyMovieTagline__MAPPING_MISSING__;
+ (void)__MPModelPropertyMovieTitle__MAPPING_MISSING__;
+ (void)__MPModelRelationshipMovieClips__MAPPING_MISSING__;
+ (void)__MPModelRelationshipMovieLocalFileAsset__MAPPING_MISSING__;
+ (void)__MPModelRelationshipMoviePlaybackPosition__MAPPING_MISSING__;
+ (void)__MPModelRelationshipMovieStoreAsset__MAPPING_MISSING__;
+ (id)__artworkCatalogBlock_KEY;
+ (id)__clips_KEY;
+ (id)__descriptionText_KEY;
+ (id)__downloadedDate_KEY;
+ (id)__duration_KEY;
+ (id)__editorialArtworkCatalogBlock_KEY;
+ (id)__explicitRating_KEY;
+ (id)__hasCloudSyncSource_KEY;
+ (id)__keepLocalConstraints_KEY;
+ (id)__keepLocalEnableState_KEY;
+ (id)__keepLocalManagedStatusReason_KEY;
+ (id)__keepLocalManagedStatus_KEY;
+ (id)__lastDevicePlaybackDate_KEY;
+ (id)__libraryAddEligible_KEY;
+ (id)__libraryAddedDate_KEY;
+ (id)__libraryAdded_KEY;
+ (id)__localFileAsset_KEY;
+ (id)__movieInfoDictionary_KEY;
+ (id)__playbackPosition_KEY;
+ (id)__releaseDate_KEY;
+ (id)__storeAsset_KEY;
+ (id)__storeCanonicalID_KEY;
+ (id)__tagline_KEY;
+ (id)__title_KEY;
+ (id)classesForSecureCoding;
+ (long long)genericObjectType;
+ (id)kindWithVariants:(unsigned long long)a0;
+ (id)kindWithVariants:(unsigned long long)a0 options:(unsigned long long)a1;
+ (id)requiredStoreLibraryPersonalizationProperties;

- (id)artworkCatalog;
- (id)editorialArtworkCatalog;
- (id)humanDescription;
- (id)mediaItemPropertyValues;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)a0;
- (id)personalizationScopedPropertiesForProperties:(id)a0;
- (id)relativeModelObjectForStoreLibraryPersonalization;

@end
