@class NSColor, NSString;

@interface _NSInlineButtonContentStyle : NSObject <NSControlStateContentStyle>

@property long long state;
@property long long value;
@property long long presentationState;
@property (getter=isEmphasized) BOOL emphasized;
@property (copy) NSColor *tintColor;
@property (readonly) NSColor *equivalentForegroundColorForTemplateImage;
@property (readonly) int outputBlendModeForTemplateContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)_currentForegroundColor;
- (id)bezelColor;
- (id)compositingFilterForTemplateContentOfType:(long long)a0;
- (void)configureStringDrawingContext:(id)a0 forEffectsAppropriateForAttributes:(id)a1;
- (void)drawStylizedImage:(id)a0 inAlignmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 operation:(unsigned long long)a2 fraction:(double)a3 flip:(BOOL)a4 hints:(id)a5;
- (void)drawStylizedImage:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 operation:(unsigned long long)a2 fraction:(double)a3 flip:(BOOL)a4 hints:(id)a5;
- (void)setBezelColor:(id)a0;
- (id)stylizedAttributedStringForAttributedString:(id)a0;
- (struct CGImage { } *)stylizedImageForImage:(struct CGImage { } *)a0 isTemplate:(BOOL)a1 backingTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
- (id)stylizedStringAttributesForAttributes:(id)a0;

@end
