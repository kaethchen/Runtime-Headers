@class MPText, MRMarimbaView, MRMarimbaLayer, MRTextRenderer;

@interface MRMarimbaLayoutManager : NSLayoutManager {
    MRTextRenderer *_textRenderer;
}

@property (retain, nonatomic) MRMarimbaView *marimbaView;
@property (retain, nonatomic) MRMarimbaLayer *marimbaLayer;
@property (retain, nonatomic) MPText *text;

- (void)dealloc;
- (id)init;
- (struct CGPoint { double x0; double x1; })shadowOffset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })extraLineFragmentRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })extraLineFragmentUsedRect;
- (BOOL)drawsOutsideLineFragmentForGlyphAtIndex:(unsigned long long)a0;
- (long long)lineCount;
- (id)_renderer;
- (id)textRenderer;
- (void)updateWithString:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentRectForEditedText;

@end
