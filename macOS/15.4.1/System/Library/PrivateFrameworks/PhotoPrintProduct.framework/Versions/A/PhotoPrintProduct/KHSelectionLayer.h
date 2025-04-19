@class KHRelatedPhotosButtonLayer, KHSimilarPhotosButtonLayer, KHSelection, NSMutableArray;

@interface KHSelectionLayer : KHBaseShapeLayer

@property (retain, nonatomic) NSMutableArray *resizeDotLayers;
@property (retain, nonatomic) KHSimilarPhotosButtonLayer *similarPhotosButtonLayer;
@property (retain, nonatomic) KHRelatedPhotosButtonLayer *relatedPhotosButtonLayer;
@property (retain, nonatomic) KHSelection *selection;

+ (id)layerWithSelection:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)layoutSublayers;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void)updateDisplay;
- (struct CGPoint { double x0; double x1; })_drawingOffset;
- (void)_updateRelatedPhotosButton;
- (void)_updateSimilarPhotosButton;
- (unsigned long long)selectionResizeTypeForPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectionSafeFrameForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withInset:(BOOL)a1;
- (void)setPosition:(struct CGPoint { double x0; double x1; })a0 withInset:(BOOL)a1;

@end
