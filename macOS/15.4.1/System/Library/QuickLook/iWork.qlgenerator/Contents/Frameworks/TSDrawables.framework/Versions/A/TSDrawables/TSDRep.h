@class NSMutableArray, NSArray, TSDLayout, TSDCanvas, NSObject, NSDictionary;
@protocol TSDInfo;

@interface TSDRep : NSObject <TSDMagicMoveMatching> {
    NSMutableArray *mChildReps;
    BOOL mHasBeenRemoved;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } i_partition_deepClipRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } i_layerFrameInScaledCanvasIgnoringDragging;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } i_clipRectRecursive;
@property (readonly, nonatomic) TSDLayout *layout;
@property (readonly, weak, nonatomic) TSDCanvas *canvas;
@property (retain, nonatomic) TSDLayout *temporaryMixingLayout;
@property (readonly, nonatomic) NSObject<TSDInfo> *info;
@property (weak, nonatomic) TSDRep *parentRep;
@property (readonly, nonatomic) NSArray *childReps;
@property (readonly, nonatomic) double angleInRoot;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } naturalBounds;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frameInUnscaledCanvas;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frameInUnscaledCanvasForMarqueeSelecting;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } titleFrameInUnscaledCanvas;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } captionFrameInUnscaledCanvas;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frameInUnscaledCanvasIncludingChrome;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } layerFrameInScaledCanvas;
@property (readonly, nonatomic) NSArray *layoutsForChildReps;
@property (readonly, nonatomic) BOOL isDrawingInFlippedContext;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } clipRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundsForStandardKnobs;
@property (copy, nonatomic) NSDictionary *textureAnimationInfo;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frameForMagicMove;
@property (readonly, nonatomic) NSObject *dynamicOverride;
@property (readonly, nonatomic) BOOL masksToBounds;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } rectToClipChildRepRenderables;
@property (readonly, nonatomic) double opacity;
@property (readonly, nonatomic) BOOL isPlaceholder;
@property (readonly, nonatomic) BOOL isLocked;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } centerForRotation;
@property (readonly, nonatomic) BOOL wantsToDistortWithImagerContext;
@property (readonly, nonatomic) NSArray *hyperlinkRegions;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (double)contentsScale;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void)willBeRemoved;
- (struct CGPoint { double x0; double x1; })convertNaturalPointFromUnscaledCanvas:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertNaturalRectFromUnscaledCanvas:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertNaturalRectToUnscaledCanvas:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)i_willBeRemoved;
- (void)removeChildRep:(id)a0;
- (void)willLayoutAndRenderInBackground;
- (void)addBitmapsToRenderingQualityInfo:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)addToSet:(id)a0;
- (struct CGPoint { double x0; double x1; })convertNaturalPointToUnscaledCanvas:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)forcesPlacementOnTop;
- (void)i_configureFontSmoothingForContext:(struct CGContext { } *)a0 layer:(id)a1;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layerFrameInScaledCanvasRelativeToParent;
- (struct CGPath { } *)newPathInScaledCanvasFromNaturalRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)recursivelyPerformSelector:(SEL)a0;
- (void)recursivelyPerformSelector:(SEL)a0 withObject:(id)a1;
- (void)recursivelyPerformSelector:(SEL)a0 withObject:(id)a1 withObject:(id)a2;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)a0;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)a0 withObject:(id)a1;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)a0 withObject:(id)a1 withObject:(id)a2;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })unRotatedTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)updateChildrenFromLayout;
- (void)updateFromLayout;
- (void)addChildTexturesToTextureSet:(id)a0 forDescription:(id)a1 passingTest:(id /* block */)a2;
- (void)recursivelyDrawInContext:(struct CGContext { } *)a0 keepingChildrenPassingTest:(id /* block */)a1;
- (void)setTextureAttributes:(id)a0 textureBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)textureForDescription:(id)a0;
- (void)updateHitTestingForTextureStage:(unsigned long long)a0 isAtEndOfBuild:(BOOL)a1;
- (void)recursivelyDrawChildrenInContext:(struct CGContext { } *)a0 keepingChildrenPassingTest:(id /* block */)a1;
- (void)enumerateChildTexturesForDescription:(id)a0 passingTest:(id /* block */)a1 withBlock:(id /* block */)a2;
- (void)didAddChildRep:(id)a0;
- (void)p_setChildReps:(id)a0;
- (void)didDisplayTextureWithDescription:(id)a0 isAtEndOfBuild:(BOOL)a1;
- (void)dynamicOverrideDidChange;
- (id)p_comment;

@end
