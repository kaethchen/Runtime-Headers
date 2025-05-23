@class TSDShapeInfo, TSDShapeLayout, NSMutableDictionary;

@interface TSDShapeRep : TSDStyledRep <TSDMagicMoveMatching> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mFrameInUnscaledCanvasRelativeToSuper;
    BOOL mFrameInUnscaledCanvasIsValid;
    BOOL mDirectlyManagesLayerContentCacheValid;
    BOOL mDirectlyManagesLayerContent;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mOriginalAliasedAlignmentFrameInLayerFrame;
    BOOL mShadowOnChildrenDisabled;
    struct CGContext { } *mCommittedPathContext;
    struct CGImage { } *mCommittedPathImage;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mCommittedPathImageUnscaledRect;
    struct _NSRange { unsigned long long location; unsigned long long length; } mCommittedPointRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } mAvailableToCommitPointRange;
    unsigned char mOverrideState : 2;
    double mOverriddenValue;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mLastDynamicInvalidRect;
    BOOL mFillChanged;
    BOOL mShouldForceRenderableGeometryUpdate;
    BOOL mIsInvisibleCacheValid;
    BOOL mIsInvisibleCache;
    BOOL mNeedsDisplay;
    NSMutableDictionary *mHitTestCache;
}

@property (readonly, nonatomic) TSDShapeInfo *shapeInfo;
@property (readonly, nonatomic) TSDShapeLayout *shapeLayout;
@property (readonly, nonatomic) BOOL isMoreOptimalToDrawWithOtherShapeRepsIfPossible;
@property (readonly, nonatomic) double strokeEnd;
@property (readonly, nonatomic) BOOL isPartiallyAnimated;
@property (readonly, nonatomic) BOOL isNormalShapeInsideFreehandDrawing;

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)a0 incomingObject:(id)a1 mixingTypeContext:(id)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (double)opacity;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clipRect;
- (BOOL)isInvisible;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameInUnscaledCanvas;
- (BOOL)canDrawShadowInOneStepWithChildren:(BOOL)a0;
- (id)colorBehindLayer:(id)a0;
- (void)drawInLayerContext:(struct CGContext { } *)a0;
- (id)imageOfStroke:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (BOOL)p_beginApplyOpacity:(struct CGContext { } *)a0 forDrawingInOneStep:(BOOL)a1;
- (void)p_drawLineEndForHead:(BOOL)a0 withDelta:(struct CGPoint { double x0; double x1; })a1 andStroke:(id)a2 inContext:(struct CGContext { } *)a3 useFastDrawing:(BOOL)a4;
- (BOOL)p_drawsSelfInOneStep;
- (void)p_endApplyOpacity:(struct CGContext { } *)a0 apply:(BOOL)a1;
- (void)drawInContextWithoutEffects:(struct CGContext { } *)a0 withContent:(BOOL)a1 strokeDrawOptions:(unsigned long long)a2 withOpacity:(BOOL)a3 forAlphaOnly:(BOOL)a4 drawChildren:(BOOL)a5 keepingChildrenPassingTest:(id /* block */)a6;
- (void)setTextureAttributes:(id)a0 textureBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)recursivelyDrawChildrenInContext:(struct CGContext { } *)a0 keepingChildrenPassingTest:(id /* block */)a1;
- (BOOL)p_hasFreehandDrawingBrushStroke;
- (BOOL)canDrawWithOtherShapeRep:(id)a0;
- (void)drawInContext:(struct CGContext { } *)a0 usingPathOverride:(id)a1 patternOffsetsBySubpathOverride:(id)a2 transparencyLayersBySubpath:(id)a3;
- (void)dynamicOverrideDidChange;
- (unsigned long long)p_bitmapContextOptionsForContextDestinedToDrawIntoCALayerContextForDrawingStroke:(id)a0;
- (unsigned long long)p_bitmapContextOptionsForDrawingStroke:(id)a0;
- (id)p_brushStrokeFromStroke:(id)a0;
- (void)p_drawChildrenWithoutOpacityInContext:(struct CGContext { } *)a0 keepingChildrenPassingTest:(id /* block */)a1;
- (void)p_drawInContext:(struct CGContext { } *)a0 withContent:(BOOL)a1 strokeDrawOptions:(unsigned long long)a2 withOpacity:(BOOL)a3;
- (void)p_drawInContext:(struct CGContext { } *)a0 withContent:(BOOL)a1 strokeDrawOptions:(unsigned long long)a2 withOpacity:(BOOL)a3 usingPathOverride:(id)a4 patternOffsetsBySubpathOverride:(id)a5 transparencyLayersBySubpath:(id)a6;
- (id)p_drawingPlaybackSession;
- (BOOL)p_isInsidePlayingFreehandDrawing;
- (BOOL)p_shouldDrawStrokeWide:(id)a0;
- (BOOL)p_shouldUpgradeStrokeForPlayback:(id)a0;
- (id)p_strokeForRenderingIncludingPlaybackFromStroke:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })strokeBoundsWithOptions:(unsigned long long)a0 fallbackBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)wantsMediaForDrops;

@end
