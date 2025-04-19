@class NSColor, CUIStyleEffectConfiguration, NSString;

@interface NSCoreUIStyleEffectContentStyle : NSObject <NSContentStyle>

@property (readonly) CUIStyleEffectConfiguration *styleEffectConfiguration;
@property (readonly) NSColor *equivalentForegroundColorForTemplateImage;
@property (readonly) int outputBlendModeForTemplateContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_equivalentForegroundColorForColor:(id)a0 textStyleName:(id)a1 contentFlavor:(long long)a2;
- (int)_equivalentImageBackgroundStyleForTemplateImage:(BOOL)a0;
- (unsigned long long)_equivalentImageState;
- (id)compositingFilterForTemplateContentOfType:(long long)a0;
- (void)configureStringDrawingContext:(id)a0 forEffectsAppropriateForAttributes:(id)a1;
- (void)drawStylizedImage:(id)a0 inAlignmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 operation:(unsigned long long)a2 fraction:(double)a3 flip:(BOOL)a4 hints:(id)a5;
- (void)drawStylizedImage:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 operation:(unsigned long long)a2 fraction:(double)a3 flip:(BOOL)a4 hints:(id)a5;
- (id)initWithStyleEffectConfiguration:(id)a0;
- (id)stylizedAttributedStringForAttributedString:(id)a0;
- (struct CGImage { } *)stylizedImageForImage:(struct CGImage { } *)a0 isTemplate:(BOOL)a1 backingTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
- (id)stylizedStringAttributesForAttributes:(id)a0;

@end
