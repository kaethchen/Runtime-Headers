@interface _FEFocusPromiseRegion : _FEFocusRegion {
    id _identifier;
    unsigned long long _fullfillmentCount;
}

@property (copy, nonatomic) id /* block */ contentFulfillmentHandler;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_debugDrawingConfigurationWithDebugInfo:(id)a0;
- (id)_descriptionBuilder;
- (id)_focusRegionWithAdjustedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 coordinateSpace:(id)a1;
- (unsigned long long)_focusableBoundaries;
- (id)_nextFocusedItemForFocusMovementRequest:(id)a0 inMap:(id)a1 withSnapshot:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 coordinateSpace:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 coordinateSpace:(id)a1 identifier:(id)a2;

@end
