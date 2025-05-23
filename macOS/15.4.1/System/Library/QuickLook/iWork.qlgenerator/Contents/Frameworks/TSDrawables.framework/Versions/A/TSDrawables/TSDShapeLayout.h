@class NSArray, TSUBezierPath, TSDPathSource, TSDInfoGeometry, TSDLineEnd, TSDEditableBezierPathSource, TSDFill, TSDShapeInfo, TSDMutableStroke, TSDStroke;

@interface TSDShapeLayout : TSDStyledLayout {
    struct { unsigned char path : 1; unsigned char pathIsOpen : 1; unsigned char pathIsLineSegment : 1; unsigned char headAndTail : 1; unsigned char headLineEnd : 1; unsigned char tailLineEnd : 1; unsigned char clippedPath : 1; } mShapeInvalidFlags;
    TSUBezierPath *mCachedPath;
    BOOL mCachedPathIsOpen;
    BOOL mCachedPathIsLineSegment;
    struct { struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cachedRect; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalCachedRect; unsigned int isValid; } mCachedPathBoundsStruct;
    struct { struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cachedRect; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalCachedRect; unsigned int isValid; } mCachedPathBoundsWithoutStrokeStruct;
    TSUBezierPath *mCachedClippedPath;
    struct { struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cachedRect; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalCachedRect; unsigned int isValid; } mCachedClippedPathStroked;
    struct { struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cachedRect; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalCachedRect; unsigned int isValid; } mCachedClippedPathRotatedStroked;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } mClippedPathRotatedTransform;
    struct { struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cachedRect; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalCachedRect; unsigned int isValid; } mCachedAlignmentFrame;
    struct { struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cachedRect; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalCachedRect; unsigned int isValid; } mCachedAlignmentFrameInRoot;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } mCachedAlignmentFrameInRootTransformInRoot;
    struct CGPoint { double x; double y; } mHeadPoint;
    struct CGPoint { double x; double y; } mTailPoint;
    struct CGPoint { double x; double y; } mHeadLineEndPoint;
    struct CGPoint { double x; double y; } mTailLineEndPoint;
    double mHeadLineEndAngle;
    double mTailLineEndAngle;
    long long mHeadCutSegment;
    long long mTailCutSegment;
    double mHeadCutT;
    double mTailCutT;
    TSDPathSource *mShrunkenPathSource;
    TSDPathSource *mOriginalShrunkenPathSource;
    TSDEditableBezierPathSource *mCachedEditableBezierPathSource;
    TSDPathSource *mCachedPathSource;
    TSDPathSource *mResizePathSource;
    TSDInfoGeometry *mResizeInfoGeometry;
    TSDInfoGeometry *mInitialInfoGeometry;
    TSDMutableStroke *mDynamicStroke;
    TSDStroke *mInitialStroke;
    TSDFill *mDynamicFill;
    NSArray *mDynamicStrokeOffsetArray;
    BOOL mIsDynamicallyInvisible;
    struct CGSize { double width; double height; } mLastParentLimitedSize;
    double mLastParentLimitedScale;
    BOOL mOkayToSetGeometry;
}

@property (readonly, nonatomic) TSDFill *fill;
@property (readonly, nonatomic) TSDShapeInfo *shapeInfo;
@property (readonly, nonatomic) TSDPathSource *pathSource;
@property (readonly, nonatomic) TSUBezierPath *path;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } pathBounds;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } pathBoundsWithoutStroke;
@property (readonly, nonatomic) BOOL pathIsOpen;
@property (readonly, nonatomic) BOOL pathIsLineSegment;
@property (readonly, nonatomic) TSDInfoGeometry *layoutInfoGeometry;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } headPoint;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } tailPoint;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } headLineEndPoint;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } tailLineEndPoint;
@property (readonly, nonatomic) double headLineEndAngle;
@property (readonly, nonatomic) double tailLineEndAngle;
@property (readonly, nonatomic) BOOL isTailEndOnLeft;
@property (readonly, nonatomic) TSUBezierPath *clippedPathForLineEnds;
@property (readonly, nonatomic) TSDLineEnd *strokeHeadLineEnd;
@property (readonly, nonatomic) TSDLineEnd *strokeTailLineEnd;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } unclippedTailPoint;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } unclippedHeadPoint;
@property (readonly, nonatomic) BOOL isFreehandDrawingSpacerShape;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithInfo:(id)a0;
- (struct CGSize { double x0; double x1; })minimumSize;
- (id)stroke;
- (void)validate;
- (void)setGeometry:(id)a0;
- (void)invalidatePath;
- (BOOL)supportsResize;
- (int)wrapType;
- (void)p_invalidateClippedPath;
- (void)p_invalidateHead;
- (void)p_invalidateTail;
- (void)p_validateHeadAndTail;
- (void)p_validateHeadLineEnd;
- (void)p_validateTailLineEnd;
- (BOOL)isInvisible;
- (void)invalidateFrame;
- (id)computeLayoutGeometry;
- (id)i_computeWrapPath;
- (id)i_computeWrapPathClosed:(BOOL)a0;
- (id)layoutGeometryFromInfo;
- (void)processChangedProperty:(int)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_cachedPathBoundsWithoutStroke;
- (id)smartPathSource;
- (id)reliedOnLayouts;
- (void)aliasPathForScale:(double)a0 adjustedStroke:(id *)a1 adjustedPath:(id *)a2 startDelta:(struct CGPoint { double x0; double x1; } *)a3 endDelta:(struct CGPoint { double x0; double x1; } *)a4;
- (void)aliasPathForScale:(double)a0 originalStroke:(id)a1 adjustedStroke:(id *)a2 adjustedPath:(id *)a3 startDelta:(struct CGPoint { double x0; double x1; } *)a4 endDelta:(struct CGPoint { double x0; double x1; } *)a5;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })aliasedAlignmentFrameForScale:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentFrameInRoot;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForStandardKnobs;
- (BOOL)canBeIntersected;
- (BOOL)canResetTextAndObjectHandles;
- (struct CGPoint { double x0; double x1; })centerForConnecting;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })computeLayoutTransform;
- (id)editablePathSource;
- (void)invalidatePathBounds;
- (BOOL)isInvisibleAutosizingShape;
- (void)offsetGeometryBy:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_boundsOfLineEndForHead:(BOOL)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (id)p_cachedPath;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_cachedPathBounds;
- (BOOL)p_cachedPathIsLineSegment;
- (BOOL)p_cachedPathIsOpen;
- (id)p_createClippedPath;
- (id)p_unitePath:(id)a0 withLineEndForHead:(BOOL)a1 stroke:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })shapeFrameWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (BOOL)shouldBeDisplayedInShowMode;
- (BOOL)supportsRotation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })baseFrameForFrameForCullingWithAdditionalTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (double)scaleForInlineClampingUnrotatedSize:(struct CGSize { double x0; double x1; })a0 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForCullingWithBaseFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 additionalTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForPartitioning;
- (double)i_scaleFromClampedParentLayout;
- (double)lineEndScale:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_cachedClippedPathStroked;
- (BOOL)p_isInlineInsideParentContainerDynamicallyChangingAvailableSpace;
- (void)p_performBlockOkayToSetGeometry:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_updatedCachedClipRectIfNeededForRotation:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })shapeFrameWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 strokeDrawOptions:(unsigned long long)a1;
- (BOOL)shouldAdjustForStrokeWidthForCollabCursor;
- (BOOL)supportsCalloutAttributes;
- (void)transferLayoutGeometryToInfo:(id)a0 withAdditionalTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 assertIfInDocument:(BOOL)a2;

@end
