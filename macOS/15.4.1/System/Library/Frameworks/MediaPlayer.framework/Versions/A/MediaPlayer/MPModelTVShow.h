@class NSString, MPModelTVShowCreator;

@interface MPModelTVShow : MPModelObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) MPModelTVShowCreator *creator;
@property (copy, nonatomic) NSString *shortTitle;
@property (copy, nonatomic) NSString *editorNotes;
@property (copy, nonatomic) NSString *shortEditorNotes;
@property (copy, nonatomic) NSString *tagline;
@property (copy, nonatomic) NSString *storeCanonicalID;
@property (copy, nonatomic) id /* block */ artworkCatalogBlock;
@property (copy, nonatomic) id /* block */ editorialArtworkCatalogBlock;
@property (nonatomic) long long episodesCount;

+ (void)__MPModelPropertyTVShowArtwork__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVShowEditorNotes__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVShowEditorialArtwork__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVShowEpisodeCount__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVShowShortEditorNotes__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVShowShortTitle__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVShowStoreCanonicalID__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVShowTagline__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVShowTitle__MAPPING_MISSING__;
+ (void)__MPModelRelationshipTVShowCreator__MAPPING_MISSING__;
+ (id)__artworkCatalogBlock_KEY;
+ (id)__creator_KEY;
+ (id)__editorNotes_KEY;
+ (id)__editorialArtworkCatalogBlock_KEY;
+ (id)__episodesCount_KEY;
+ (id)__shortEditorNotes_KEY;
+ (id)__shortTitle_KEY;
+ (id)__storeCanonicalID_KEY;
+ (id)__tagline_KEY;
+ (id)__title_KEY;
+ (long long)genericObjectType;
+ (id)kindWithSeasonKind:(id)a0;

- (id)artworkCatalog;
- (id)editorialArtworkCatalog;
- (id)humanDescription;

@end
