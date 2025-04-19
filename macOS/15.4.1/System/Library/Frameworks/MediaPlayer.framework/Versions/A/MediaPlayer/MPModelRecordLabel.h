@class NSString;

@interface MPModelRecordLabel : MPModelObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) NSString *shortDescriptionText;
@property (copy, nonatomic) id /* block */ artworkCatalogBlock;
@property (copy, nonatomic) id /* block */ editorialArtworkCatalogBlock;

+ (void)__MPModelPropertyRecordLabelEditorialArtwork__MAPPING_MISSING__;
+ (void)__MPModelPropertyRecordLabelArtwork__MAPPING_MISSING__;
+ (void)__MPModelPropertyRecordLabelDescriptionText__MAPPING_MISSING__;
+ (void)__MPModelPropertyRecordLabelName__MAPPING_MISSING__;
+ (void)__MPModelPropertyRecordLabelShortDescriptionText__MAPPING_MISSING__;
+ (id)__artworkCatalogBlock_KEY;
+ (id)__descriptionText_KEY;
+ (id)__editorialArtworkCatalogBlock_KEY;
+ (id)__name_KEY;
+ (id)__shortDescriptionText_KEY;
+ (long long)genericObjectType;

- (id)artworkCatalog;
- (id)editorialArtworkCatalog;

@end
