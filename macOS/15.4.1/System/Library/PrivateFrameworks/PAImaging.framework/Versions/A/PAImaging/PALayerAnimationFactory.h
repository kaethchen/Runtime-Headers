@class PANeutrinoImageLayer, NSString, CATransactionCompletionItem, PAImageContainerLayer, CALayer;

@interface PALayerAnimationFactory : NSObject <CAAnimationDelegate> {
    CALayer *_imgLayer;
    PANeutrinoImageLayer *_srcLayer;
    PANeutrinoImageLayer *_dstLayer;
    PANeutrinoImageLayer *_oldLayer;
    struct { double tx; double ty; double tz; double sx; double sy; double sz; double shXY; double shXZ; double shYZ; double pitch; double yaw; double roll; } _tImgOld;
    struct { double tx; double ty; double tz; double sx; double sy; double sz; double shXY; double shXZ; double shYZ; double pitch; double yaw; double roll; } _tImgNew;
    struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } _t3dRotOld;
    struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } _t3dRotNew;
    struct CGPoint { double x; double y; } _pImgOld;
    struct CGPoint { double x; double y; } _pImgNew;
    struct CGPoint { double x; double y; } _aImgOld;
    struct CGPoint { double x; double y; } _aImgNew;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rootBoundsOld;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rootBoundsNew;
    struct CGPoint { double x; double y; } _rootPosOld;
    struct CGPoint { double x; double y; } _rootPosNew;
    BOOL _hasRootBoundsAnimOld;
    BOOL _hasRootBoundsAnimNew;
    BOOL _hasRootPosAnimOld;
    BOOL _hasRootPosAnimNew;
    unsigned long long _animationPhase;
    unsigned long long _animationCounter;
    unsigned long long _transactionCounter;
    id /* block */ _completionBlock;
    BOOL _aborted;
    unsigned long long _dumpCounter;
    BOOL _cachedDisplayPlayerSnapshot;
    CATransactionCompletionItem *_completionItem;
}

@property (readonly, weak) PAImageContainerLayer *rootLayer;
@property (readonly) CALayer *imageLayer;
@property (readonly) PANeutrinoImageLayer *sourceLayer;
@property (readonly) PANeutrinoImageLayer *destinationLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)animationDidStart:(id)a0;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)_setupAnimations;
- (void)beginAnimation;
- (void)_animateLayer:(id)a0 property:(id)a1 toValue:(id)a2;
- (void)_addAnimation:(id)a0 toLayer:(id)a1 forKey:(id)a2;
- (void)_addAnimations:(id)a0 toLayer:(id)a1 key:(id)a2;
- (id)_additiveTransformAnimationWithFunction:(id)a0 toValue:(id)a1;
- (id)_basicAnimationWithKeyPath:(id)a0 fromValue:(id)a1 toValue:(id)a2;
- (id)_basicAnimationWithKeyPath:(id)a0 toValue:(id)a1;
- (void)_completeAnimations;
- (void)_completeAnimationsWhenDone;
- (void)_dumpLayer:(id)a0 name:(id)a1;
- (void)_dumpPresentationRootLayer;
- (void)_dumpRootLayer;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })_perspectiveTransformWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_rapidAnimationWithKeyPath:(id)a0 toValue:(id)a1;
- (void)_removeAnimationFromLayer:(id)a0 forKey:(id)a1;
- (void)_setUpAnimationLayers;
- (BOOL)_shouldDumpLayerTree;
- (void)_tearDownAnimationLayers;
- (void)_transactionComplete;
- (id)_transformAnimationWithFunction:(id)a0 toValue:(id)a1;
- (void)_updateAnimationLayers;
- (void)_useNewDestinationAsBackground;
- (void)_useOldDestinationAsBackground;
- (void)_useSourceAsBackground;
- (void)abortAnimation;
- (void)commitAnimation:(id /* block */)a0;
- (id)initWithRootLayer:(id)a0;

@end
