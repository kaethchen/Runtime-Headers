@class NSTextLayoutManager;

@interface NSTextHighlightShapeProvider : NSObject {
    NSTextLayoutManager *_textLayoutManager;
}

- (void).cxx_destruct;
- (id)textLayoutManager;
- (BOOL)enumerateHighlightPathsForRange:(id)a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void)enumerateHighlightPathsForRanges:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)enumerateHighlightShapesForRunClusterWithRanges:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithTextLayoutManager:(id)a0;
- (BOOL)isPoint:(struct CGPoint { double x0; double x1; })a0 withinHorizontalDistance:(double)a1 onRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 leftDistance:(out double *)a3 rightDistance:(out double *)a4;
- (unsigned long long)modifyOptions:(unsigned long long)a0 forLineBoundariesInRange:(id)a1;
- (id)textSegmentRectsForRange:(id)a0;

@end
