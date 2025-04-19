@class NSArray, NSMutableArray;

@interface CHResultRenderingVisualization : CHStrokeGroupBasedVisualization {
    NSMutableArray *_renderedResults;
}

@property (readonly, nonatomic) NSArray *renderedResults;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })dirtyRectForStrokeGroup:(id)a0;
- (void)drawVisualizationInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1 viewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)initWithRecognitionSession:(id)a0;
- (long long)layeringPriority;
- (BOOL)shouldRenderStrokeGroupResult:(id)a0;

@end
