@class GEOPBTransitArtwork, NSString;

@interface GEOComposedStringArgument_Artwork : GEOComposedStringArgument {
    GEOPBTransitArtwork *_artwork;
    NSString *_fallbackStringValue;
}

@property (copy, nonatomic) id /* block */ attributedStringHandler;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_attributedStringReplacementWithOptions:(id)a0;
- (id)_initWithGeoFormatArgument:(id)a0;
- (id)_stringReplacementWithOptions:(id)a0;
- (id)artworkFormat;

@end
