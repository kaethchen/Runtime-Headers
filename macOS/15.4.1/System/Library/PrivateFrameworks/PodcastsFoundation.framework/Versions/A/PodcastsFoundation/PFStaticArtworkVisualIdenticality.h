@class NSString;

@interface PFStaticArtworkVisualIdenticality : NSObject <NSCopying> {
    NSString *_artworkIdentifier;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)stringRepresentation;
- (id)initWithArtworkIdentifier:(id)a0;

@end
