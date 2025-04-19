@class _FEFocusSearchInfo, _FEFocusRegion, _FEFocusSystem, _FEFocusMovementInfo;
@protocol _FEFocusRegionContainer, _FECoordinateSpace;

@interface _FEFocusMapSnapshotter : NSObject {
    BOOL _snapshotFrameIsEmpty;
}

@property (retain, nonatomic) _FEFocusSearchInfo *searchInfo;
@property (readonly, weak, nonatomic) _FEFocusSystem *focusSystem;
@property (readonly, weak, nonatomic) id<_FEFocusRegionContainer> rootContainer;
@property (readonly, weak, nonatomic) id<_FECoordinateSpace> coordinateSpace;
@property (retain, nonatomic) _FEFocusRegion *focusedRegion;
@property (weak, nonatomic) id<_FEFocusRegionContainer> regionsContainer;
@property (retain, nonatomic) _FEFocusMovementInfo *movementInfo;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } snapshotFrame;
@property (nonatomic) BOOL clipToSnapshotRect;
@property (nonatomic) BOOL ignoresRootContainerClippingRect;

- (id)init;
- (void).cxx_destruct;
- (id)captureSnapshot;
- (id)_searchAreaForContainerSearchRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFocusSystem:(id)a0 rootContainer:(id)a1 coordinateSpace:(id)a2 searchInfo:(id)a3 ignoresRootContainerClippingRect:(BOOL)a4;

@end
