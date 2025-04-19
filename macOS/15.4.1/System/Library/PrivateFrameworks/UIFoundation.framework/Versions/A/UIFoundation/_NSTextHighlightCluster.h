@class NSMutableArray, NSMapTable, NSTextHighlightShapeProvider;

@interface _NSTextHighlightCluster : NSObject {
    NSMapTable *_bottomBordersOfRuns;
    NSMapTable *_topBordersOfRuns;
    NSTextHighlightShapeProvider *_shapeProvider;
    NSMutableArray *_runs;
}

- (void).cxx_destruct;
- (void)accessBorderDict:(id)a0 forKey:(double)a1 usingBlock:(id /* block */)a2;
- (void)addToBorderDict:(id)a0 key:(double)a1 object:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)registerMaxYOfRun:(id)a0;
- (void)registerMinYOfRun:(id)a0;

@end
