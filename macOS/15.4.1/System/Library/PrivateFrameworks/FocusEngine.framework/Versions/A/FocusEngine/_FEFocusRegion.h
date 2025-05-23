@protocol _FECoordinateSpace;

@interface _FEFocusRegion : NSObject

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } regionFrame;
@property (readonly, nonatomic) id<_FECoordinateSpace> regionCoordinateSpace;
@property (readonly, weak, nonatomic, getter=_debugAssociatedObject) id debugAssociatedObject;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)_boundariesBlockingFocusMovementRequest:(id)a0;
- (BOOL)_canBeOccludedByRegionsAbove;
- (BOOL)_canOccludeRegionsBelow;
- (id)_debugDrawingConfigurationWithDebugInfo:(id)a0;
- (id)_defaultFocusItem;
- (id)_descriptionBuilder;
- (void)_didParticipateAsDestinationRegionInFocusUpdate:(id)a0;
- (unsigned long long)_effectiveBoundariesBlockingFocusMovementRequest:(id)a0;
- (unsigned long long)_effectiveFocusableBoundariesForHeading:(unsigned long long)a0;
- (float)_focusPriority;
- (id)_focusRegionWithAdjustedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 coordinateSpace:(id)a1;
- (unsigned long long)_focusableBoundaries;
- (id)_focusedItemForLinearSorting:(id)a0 inMap:(id)a1 withSnapshot:(id)a2;
- (BOOL)_ignoresSpeedBumpEdges;
- (BOOL)_isUnclippable;
- (id)_nextFocusedItemForFocusMovementRequest:(id)a0 inMap:(id)a1 withSnapshot:(id)a2;
- (long long)_preferredDistanceComparisonType;
- (BOOL)_shouldCropRegionToSearchArea;
- (BOOL)_shouldUseNextFocusedItemForLinearSorting;
- (void)_willParticipateAsDestinationRegionInFocusUpdate:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 coordinateSpace:(id)a1;

@end
