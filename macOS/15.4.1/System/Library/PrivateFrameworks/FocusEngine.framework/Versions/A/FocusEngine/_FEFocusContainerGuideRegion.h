@protocol _FEFocusRegionContainer;

@interface _FEFocusContainerGuideRegion : _FEFocusGuideRegion

@property (retain, nonatomic) id<_FEFocusRegionContainer> contentFocusRegionContainer;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_debugDrawingConfigurationWithDebugInfo:(id)a0;
- (id)_fallbackFocusItemForMovementRequest:(id)a0 inFocusMap:(id)a1 withSnapshot:(id)a2;
- (id)_focusRegionWithAdjustedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 coordinateSpace:(id)a1;
- (unsigned long long)_focusableBoundaries;

@end
