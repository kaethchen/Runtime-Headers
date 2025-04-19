@class PKLinedPaper;

@interface PKMacLinedPaperView : NSView

@property (retain, nonatomic) PKLinedPaper *linedPaper;
@property (nonatomic) double yOrigin;
@property (nonatomic) BOOL darkMode;

+ (void)renderLinedPaper:(id)a0 color:(id)a1 backingScale:(double)a2 context:(struct CGContext { } *)a3 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 dirtyRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 yOrigin:(double)a6;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;

@end
