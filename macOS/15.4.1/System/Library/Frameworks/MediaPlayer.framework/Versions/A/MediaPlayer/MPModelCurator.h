@class NSString;

@interface MPModelCurator : MPModelPerson

@property (copy, nonatomic) NSString *shortName;
@property (copy, nonatomic) NSString *editorNotes;
@property (copy, nonatomic) NSString *shortEditorNotes;
@property (nonatomic) long long curatorKind;
@property (nonatomic) long long curatorSubKind;
@property (copy, nonatomic) id /* block */ editorialArtworkCatalogBlock;
@property (copy, nonatomic) id /* block */ brandLogoArtworkCatalogBlock;
@property (copy, nonatomic) NSString *handle;

+ (id)__shortName_KEY;
+ (void)__MPModelPropertyCuratorBrandLogoArtwork__MAPPING_MISSING__;
+ (void)__MPModelPropertyCuratorEditorNotes__MAPPING_MISSING__;
+ (void)__MPModelPropertyCuratorEditorialArtwork__MAPPING_MISSING__;
+ (void)__MPModelPropertyCuratorHandle__MAPPING_MISSING__;
+ (void)__MPModelPropertyCuratorKind__MAPPING_MISSING__;
+ (void)__MPModelPropertyCuratorShortEditorNotes__MAPPING_MISSING__;
+ (void)__MPModelPropertyCuratorShortName__MAPPING_MISSING__;
+ (void)__MPModelPropertyCuratorSubKind__MAPPING_MISSING__;
+ (id)__brandLogoArtworkCatalogBlock_KEY;
+ (id)__curatorKind_KEY;
+ (id)__curatorSubKind_KEY;
+ (id)__editorNotes_KEY;
+ (id)__editorialArtworkCatalogBlock_KEY;
+ (id)__handle_KEY;
+ (id)__shortEditorNotes_KEY;
+ (long long)genericObjectType;
+ (id)kindWithVariants:(unsigned long long)a0;

- (id)brandLogoArtworkCatalog;
- (id)editorialArtworkCatalog;

@end
