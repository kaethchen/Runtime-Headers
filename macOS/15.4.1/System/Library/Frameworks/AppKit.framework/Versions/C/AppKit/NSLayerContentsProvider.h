@class NSCache;

@interface NSLayerContentsProvider : NSObject {
    NSCache *_cache;
}

+ (void)resetCache;
+ (id)sharedContentsProvider;

- (void)dealloc;
- (id)facetForIdentifier:(id)a0 scale:(double)a1 colorSpace:(id)a2 drawingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 flipped:(BOOL)a4 appearanceIdentifier:(id)a5 drawHandler:(id /* block */)a6;
- (double)totalCacheSize;

@end
