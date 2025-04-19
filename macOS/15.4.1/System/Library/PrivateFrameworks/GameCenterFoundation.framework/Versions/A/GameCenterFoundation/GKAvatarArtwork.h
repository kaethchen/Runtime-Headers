@class NSNumber, GKArtworkMetadata;

@interface GKAvatarArtwork : GKInternalRepresentation

@property (readonly, nonatomic) NSNumber *type;
@property (readonly, nonatomic) GKArtworkMetadata *metadata;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)initWithType:(id)a0 metadata:(id)a1;

@end
