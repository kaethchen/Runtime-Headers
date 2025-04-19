@class NSArray, NSString, PXContentSyndicationConfigurationProvider, PHPhotoLibrary;

@interface PXContentFilterState : NSObject <NSCopying, PXFilterState>

@property (readonly, nonatomic) long long ruleCount;
@property (readonly, nonatomic) BOOL hasRules;
@property (readonly, nonatomic) PXContentSyndicationConfigurationProvider *contentSyndicationConfigurationProvider;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (nonatomic) BOOL includeSharedWithYou;
@property (nonatomic) BOOL showOnlySharedWithYou;
@property (nonatomic) BOOL saved;
@property (nonatomic) BOOL unsaved;
@property (nonatomic) BOOL favorite;
@property (nonatomic) BOOL edited;
@property (nonatomic) BOOL image;
@property (nonatomic) BOOL video;
@property (nonatomic) BOOL live;
@property (nonatomic) BOOL portrait;
@property (nonatomic) BOOL inUserAlbum;
@property (nonatomic) BOOL notInUserAlbum;
@property (copy, nonatomic) NSArray *keywords;
@property (copy, nonatomic) NSArray *uuids;
@property (nonatomic) BOOL showOnlySentICloudLinks;
@property (nonatomic) BOOL showOnlyReceivedICloudLinks;
@property (nonatomic) BOOL includeScreenshots;
@property (nonatomic) BOOL showOnlyScreenshots;
@property (readonly, nonatomic) BOOL shouldExcludeScreenshots;
@property (nonatomic) BOOL includeFromMyMac;
@property (nonatomic) BOOL showOnlyFromMyMac;
@property (readonly, nonatomic) BOOL shouldExcludeFromMyMac;
@property (nonatomic) BOOL includeOthersInSocialGroupAssets;
@property (readonly, nonatomic) long long activeFilterCount;
@property (nonatomic) BOOL isSearchResultsFilterButton;
@property (readonly, nonatomic) BOOL isFiltering;
@property (readonly, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) NSString *localizedFooterDescription;

+ (id)defaultAllPhotosFilterStateForPhotoLibrary:(id)a0;
+ (id)defaultFilterStateForContainerCollection:(id)a0 photoLibrary:(id)a1;
+ (id)defaultFilterStateForPhotoLibrary:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (void)_checkDataSourceType:(id /* block */)a0;
- (BOOL)isContentFilterActive:(long long)a0;
- (id)predicateForUseCase:(unsigned long long)a0;

@end
