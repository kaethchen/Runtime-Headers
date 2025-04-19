@class NSString, NSDictionary, NSAppearance, NSAttributedString;

@interface QLCustomTextLayer : CALayer {
    NSAppearance *_appearance;
    struct CGSize { double width; double height; } _textSize;
}

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSDictionary *attributes;
@property (retain, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) struct CGSize { double width; double height; } textMargins;
@property (readonly) struct CGSize { double x0; double x1; } textSize;
@property BOOL animates;

+ (id)_sharedStringDrawingContext;

- (void).cxx_destruct;
- (id)actionForKey:(id)a0;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void)setContentsScale:(double)a0;
- (BOOL)needsDisplayOnBoundsChange;
- (void)_updateTextSize;
- (void)_updateLayerSize;
- (void)drawWithinAppearanceInContext:(struct CGContext { } *)a0;
- (void)set_QLLayerAppearance:(id)a0;
- (struct CGSize { double x0; double x1; })sizeToFitInSize:(struct CGSize { double x0; double x1; })a0;

@end
