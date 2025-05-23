@class PXLayoutGenerator, NSString, PXGLayoutGuide;
@protocol PXGGeneratedLayoutDelegate;

@interface PXGGeneratedLayout : PXGItemsLayout <PXGDiagnosticsProvider> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    PXLayoutGenerator *_generator;
    struct _PXLayoutGeometry { long long x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; float x4; long long x5; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x6; struct CGSize { double x0; double x1; } x7; } *_generatorGeometryBuffer;
    long long _generatorGeometryBufferCount;
    BOOL _isUpdatingSprites;
}

@property (readonly, nonatomic) PXLayoutGenerator *generator;
@property (nonatomic) long long keyItemIndex;
@property (nonatomic) unsigned char mediaKind;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) BOOL useSaliency;
@property (nonatomic) struct { union { struct { float topLeft; float topRight; float bottomLeft; float bottomRight; } ; float byIndex[4]; } ; } cornerRadius;
@property (nonatomic) long long defaultSpriteTag;
@property (nonatomic) long long keyItemSpriteTag;
@property (weak, nonatomic) id<PXGGeneratedLayoutDelegate> delegate;
@property (readonly, nonatomic) PXGLayoutGuide *headerLayoutGuide;
@property (readonly, copy, nonatomic) NSString *diagnosticDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)update;
- (void)_updateContentSize;
- (void)_resizeGeometryBufferForSpriteCount:(long long)a0;
- (void)_updateGenerator;
- (void)_updateSprites;
- (void)didApplySpriteChangeDetails:(id)a0;
- (void)displayScaleDidChange;
- (void)enumerateItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 usingBlock:(id /* block */)a1;
- (void)getSpriteZPosition:(out float *)a0 clippingRect:(out struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 forSpriteKind:(long long)a2;
- (void)metricsDidChange;
- (id)newGenerator;
- (id)objectReferenceForSpriteIndex:(unsigned int)a0;
- (void)paddingDidChange;
- (void)referenceSizeDidChange;
- (struct CGSize { double x0; double x1; })sizeForItem:(long long)a0;
- (void)spritesDidUpdate;

@end
