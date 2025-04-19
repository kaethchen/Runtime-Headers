@interface MPModelSharedListeningParticipant : MPModelPerson

@property (copy, nonatomic) id /* block */ artworkCatalogBlock;

+ (id)kind;
+ (void)__MPModelPropertySharedListeningParticipantArtwork__MAPPING_MISSING__;
+ (id)__artworkCatalogBlock_KEY;

- (id)artworkCatalog;

@end
