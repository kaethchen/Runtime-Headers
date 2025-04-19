@class NSString, MPModelTVShow, NSDate, MPModelTVEpisode;

@interface MPModelTVSeason : MPModelObject

@property (nonatomic) long long number;
@property (copy, nonatomic) NSString *descriptionText;
@property (nonatomic) long long year;
@property (nonatomic) long long episodesCount;
@property (nonatomic) BOOL hasCleanContent;
@property (nonatomic) BOOL hasExplicitContent;
@property (copy, nonatomic) NSDate *libraryAddedDate;
@property (nonatomic, getter=isLibraryAdded) BOOL libraryAdded;
@property (nonatomic, getter=isLibraryAddEligible) BOOL libraryAddEligible;
@property (nonatomic) long long sortType;
@property (retain, nonatomic) MPModelTVShow *show;
@property (retain, nonatomic) MPModelTVEpisode *representativeEpisode;
@property (copy, nonatomic) id /* block */ artworkCatalogBlock;
@property (copy, nonatomic) NSString *storeCanonicalID;
@property (readonly, copy, nonatomic) NSDate *downloadedDate;

+ (void)__MPModelPropertyTVSeasonArtwork__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVSeasonDescriptionText__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVSeasonDownloadedDate__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVSeasonEpisodesCount__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVSeasonHasCleanContent__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVSeasonHasExplicitContent__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVSeasonLibraryAddEligible__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVSeasonLibraryAddedDate__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVSeasonLibraryAdded__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVSeasonNumber__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVSeasonSortType__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVSeasonStoreCanonicalID__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVSeasonYear__MAPPING_MISSING__;
+ (void)__MPModelRelationshipTVSeasonRepresentativeEpisode__MAPPING_MISSING__;
+ (void)__MPModelRelationshipTVSeasonShow__MAPPING_MISSING__;
+ (id)__artworkCatalogBlock_KEY;
+ (id)__descriptionText_KEY;
+ (id)__downloadedDate_KEY;
+ (id)__episodesCount_KEY;
+ (id)__hasCleanContent_KEY;
+ (id)__hasExplicitContent_KEY;
+ (id)__libraryAddEligible_KEY;
+ (id)__libraryAddedDate_KEY;
+ (id)__libraryAdded_KEY;
+ (id)__number_KEY;
+ (id)__representativeEpisode_KEY;
+ (id)__show_KEY;
+ (id)__sortType_KEY;
+ (id)__storeCanonicalID_KEY;
+ (id)__year_KEY;
+ (long long)genericObjectType;
+ (id)kindWithEpisodeKind:(id)a0;
+ (id)requiredStoreLibraryPersonalizationProperties;

- (id)artworkCatalog;
- (id)humanDescription;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)a0;
- (id)personalizationScopedPropertiesForProperties:(id)a0;
- (id)relativeModelObjectForStoreLibraryPersonalization;

@end
