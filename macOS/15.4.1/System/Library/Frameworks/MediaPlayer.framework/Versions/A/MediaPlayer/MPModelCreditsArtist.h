@class MPModelArtist;

@interface MPModelCreditsArtist : MPModelPerson

@property (retain, nonatomic) MPModelArtist *artist;
@property (copy, nonatomic) id /* block */ artworkCatalogBlock;

+ (void)__MPModelPropertyCreditsArtistArtwork__MAPPING_MISSING__;
+ (void)__MPModelRelationshipCreditsArtistRelatedArtist__MAPPING_MISSING__;
+ (id)__artist_KEY;
+ (id)__artworkCatalogBlock_KEY;
+ (long long)genericObjectType;

- (id)artworkCatalog;

@end
