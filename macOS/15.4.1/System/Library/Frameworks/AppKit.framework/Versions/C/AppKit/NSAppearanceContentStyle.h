@class NSColor, NSString, CUIBackgroundStyleEffectConfiguration;

@interface NSAppearanceContentStyle : NSObject <NSControlStateContentStyle>

@property (class, readonly) NSAppearanceContentStyle *borderlessControlStyle;
@property (class, readonly) NSAppearanceContentStyle *titlebarBorderlessControlStyle;
@property (class, readonly) NSAppearanceContentStyle *bodyContentStyle;
@property (class, readonly) NSAppearanceContentStyle *titlebarContentStyle;
@property (class, readonly) NSAppearanceContentStyle *sidebarContentStyle;
@property (class, readonly) NSAppearanceContentStyle *menuStyle;

@property (copy) NSString *referenceWidget;
@property (retain) CUIBackgroundStyleEffectConfiguration *_cachedStyleEffectConfiguration;
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

+ (id)styleForWidget:(id)a0;
+ (id)styleForWidget:(id)a0 tintedWithColor:(id)a1;
+ (id)styleForBackgroundStyle:(long long)a0 semanticContext:(long long)a1 windowStyleMask:(unsigned long long)a2 referenceWidget:(id)a3;
+ (id)styleForWidget:(id)a0 variant:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)_backgroundStyleForRenderingIntent:(long long)a0;
- (void)_configureStyleEffectConfiguration:(id)a0 forContentType:(long long)a1 renderingIntent:(long long)a2;
- (id)_equivalentForegroundColorForColor:(id)a0 textStyleName:(id)a1 contentType:(long long)a2;
- (int)_equivalentImageBackgroundStyleForTemplateImage:(BOOL)a0;
- (unsigned long long)_equivalentImageState;
- (id)_resolvedAppearanceForEffectConfiguration:(id)a0;
- (id)_resolvedAppearanceForEffectConfiguration:(id)a0 textStyleName:(id)a1;
- (id)_styleEffectConfigurationForContentType:(long long)a0 renderingIntent:(long long)a1;
- (double)_temporaryImageAlphaComponentOverrideWithTemplate:(BOOL)a0;
- (id)compositingFilterForTemplateContentOfType:(long long)a0;
- (void)configureStringDrawingContext:(id)a0 forEffectsAppropriateForAttributes:(id)a1;
- (void)drawStylizedImage:(id)a0 inAlignmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 operation:(unsigned long long)a2 fraction:(double)a3 flip:(BOOL)a4 hints:(id)a5;
- (void)drawStylizedImage:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 operation:(unsigned long long)a2 fraction:(double)a3 flip:(BOOL)a4 hints:(id)a5;
- (id)stylizedAttributedStringForAttributedString:(id)a0;
- (struct CGImage { } *)stylizedImageForImage:(struct CGImage { } *)a0 isTemplate:(BOOL)a1 backingTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
- (id)stylizedStringAttributesForAttributes:(id)a0;

@end
