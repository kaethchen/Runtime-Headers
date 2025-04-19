@class TSDLayoutGeometry, TSDInfoGeometry;

@interface TSAObject3DLayout : TSDDrawableLayout {
    TSDInfoGeometry *_dynamicInfoGeometry;
    BOOL _isUpdating3DRotation;
    void /* unknown type, empty encoding */ _dynamic3DRotation;
    BOOL _firstDynamic3DRotation;
    BOOL _isUpdatingOpacity;
    double _dynamicOpacity;
}

@property (readonly, nonatomic) TSDLayoutGeometry *object3DGeometryInRoot;
@property (readonly, nonatomic) TSDLayoutGeometry *imageGeometry;
@property (readonly, nonatomic) double opacity;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ layout3DRotationFromInfo;
@property (readonly, nonatomic) double yaw;
@property (readonly, nonatomic) double pitch;
@property (readonly, nonatomic) double roll;

- (void).cxx_destruct;
- (id)initWithInfo:(id)a0;
- (BOOL)isDraggable;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsInRoot;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsInfluencingExteriorWrap;
- (id)computeLayoutGeometry;
- (id)i_computeWrapPath;
- (id)layoutGeometryFromInfo;
- (void)processChangedProperty:(int)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentFrame;
- (void)beginDynamicOperation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForStandardKnobs;
- (void)endDynamicOperation;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })layoutTransformInInfoSpace:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)p_validatedImageProvider;
- (void)willBeAddedToLayoutController:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })baseFrameForFrameForCullingWithAdditionalTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectInRootForPresentingAnnotationPopoverForSelectionPath:(id)a0;
- (id)computeInfoGeometryFromPureLayoutGeometry:(id)a0;
- (void)endResize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForCaptionPositioning;
- (id)object3DInfo;
- (double)p_normalizeAngleForVisualDisplay:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_visibleFrameFromInfo;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectInRootForCalculatingActivityLineEndpoint;

@end
