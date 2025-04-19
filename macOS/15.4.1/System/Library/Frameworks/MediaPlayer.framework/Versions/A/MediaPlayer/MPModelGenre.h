@class NSString, NSDate;

@interface MPModelGenre : MPModelObject

@property (copy, nonatomic) id /* block */ artworkCatalogBlock;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDate *libraryAddedDate;

+ (void)__MPModelPropertyGenreArtwork__MAPPING_MISSING__;
+ (void)__MPModelPropertyGenreLibraryAddedDate__MAPPING_MISSING__;
+ (void)__MPModelPropertyGenreName__MAPPING_MISSING__;
+ (id)__artworkCatalogBlock_KEY;
+ (id)__libraryAddedDate_KEY;
+ (id)__name_KEY;
+ (long long)genericObjectType;
+ (id)kindWithAlbumKind:(id)a0;

- (id)artworkCatalog;
- (id)humanDescription;

@end
