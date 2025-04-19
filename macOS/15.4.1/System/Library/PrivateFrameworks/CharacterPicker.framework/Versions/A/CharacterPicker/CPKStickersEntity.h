@class NSString, NSAdaptiveImageGlyph, STKImageGlyph, STKAnimatedImage;

@interface CPKStickersEntity : NSObject <CPKCharacterEntity>

@property (retain, nonatomic) NSAdaptiveImageGlyph *adaptiveImageGlyph;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) struct CGImage { } *inlineTextAttachment;
@property (retain, nonatomic) STKAnimatedImage *animatedImage;
@property (retain, nonatomic) STKImageGlyph *imageGlyph;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)image;
- (id)fontName;
- (unsigned int)glyphID;
- (id)initWithAdaptiveImageGlyph:(id)a0;
- (double)baselineAdjustment;
- (id)imageURL;
- (BOOL)isSticker;
- (id)characterString;
- (void)setCachedGlyph:(unsigned int)a0;
- (void)setNumberOfSectionedCharacters:(long long)a0;
- (id)attributedStringOfSize:(double)a0;
- (unsigned int)cachedGlyphID;
- (id)initWithIdentifier:(id)a0 inlineTextAttachment:(struct CGImage { } *)a1 animatedImage:(id)a2 imageGlyph:(id)a3;
- (id)initWithImageGlyph:(id)a0;
- (BOOL)isInlineTextAttachment;
- (long long)numberOfSectionedCharacters;

@end
