@class CMDrawableMapper, NSMutableArray, NSAffineTransform;

@interface CMDrawingContext : NSObject {
    NSMutableArray *_actions;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _finalFrame;
    struct __CFData { } *_data;
    struct CGDataConsumer { } *_dataConsumer;
    struct CGContext { } *_cgContext;
    NSAffineTransform *_currentTransform;
    NSMutableArray *_transforms;
    struct CGImage { } *_fillImage;
}

@property (weak) CMDrawableMapper *mapper;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setLineWidth:(float)a0;
- (void)setStrokeColor:(struct CGColor { } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFillColor:(struct CGColor { } *)a0;
- (void)setLineDash:(id)a0;
- (void)addPath:(struct CGPath { } *)a0;
- (void)_applyTransform:(id)a0;
- (struct CGContext { } *)_cgContext;
- (void)_copyCGContext;
- (id)copyPDF;
- (void)_addTransform:(id)a0;
- (void)_closeContext;
- (void)_playbackActions;
- (void)_restoreLastTransform;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_transformRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withTransform:(id)a1;
- (void)addDebugPath:(struct CGPath { } *)a0;
- (void)addTransform:(id)a0;
- (float)currentScaleFactor;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })currentTransform;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pdfFrame;
- (void)restoreLastTransform;
- (void)setFillImage:(struct CGImage { } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })transformRectToGroup:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })transformRectToPage:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
