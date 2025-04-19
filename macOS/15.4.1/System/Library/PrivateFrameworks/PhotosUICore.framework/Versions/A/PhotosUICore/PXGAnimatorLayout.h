@class PXGLayout, PXGAnimator;

@interface PXGAnimatorLayout : NSObject

@property (readonly, weak, nonatomic) PXGAnimator *animator;
@property (retain, nonatomic) PXGLayout *inputLayout;
@property (nonatomic) struct PXGCameraConfiguration { struct { void /* unknown type, empty encoding */ columns[4]; } viewMatrix; struct { void /* unknown type, empty encoding */ columns[4]; } projectionMatrix; struct { void /* unknown type, empty encoding */ columns[4]; } billboardMatrix; void /* unknown type, empty encoding */ renderOrigin; } cameraConfiguration;

- (id)init;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })contentSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRect;
- (struct CGSize { double x0; double x1; })referenceSize;
- (id)fences;
- (id)initWithAnimator:(id)a0;
- (id)rootLayout;
- (unsigned int)numberOfSprites;
- (void)removeAllFences;
- (unsigned int)convertSpriteIndex:(unsigned int)a0 fromLayout:(id)a1;
- (void)enumerateDescendantsLayoutsUsingBlock:(id /* block */)a0;
- (void)enumerateLayoutsForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (BOOL)isSpriteIndex:(unsigned int)a0 decoratingSpriteWithIndex:(out unsigned int *)a1;
- (id)leafSublayoutForSpriteIndex:(unsigned int)a0;

@end
