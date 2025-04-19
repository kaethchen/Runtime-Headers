@class CUIThemeFacet;

@interface CUIMaskedFacetLayer : CALayer

@property (nonatomic) struct CGPath { } *maskPath;
@property (retain, nonatomic) CUIThemeFacet *facet;
@property long long drawingLayer;

- (void)dealloc;
- (id)init;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void)updateRenditionKey:(id)a0 getFocus:(BOOL *)a1 userInfo:(id)a2;

@end
