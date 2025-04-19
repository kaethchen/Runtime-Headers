@class NSString, NSView, NSIndexSet, PXGSpriteReference;
@protocol PXGSingleViewLayoutDelegate;

@interface PXGSingleViewLayout : PXGLayout <PXGViewSource> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    unsigned short _contentSpriteMediaVersion;
    NSIndexSet *_axSpriteIndexes;
}

@property (retain, nonatomic) NSView *contentView;
@property (retain, nonatomic) Class contentViewClass;
@property (weak, nonatomic) id<PXGSingleViewLayoutDelegate> delegate;
@property (nonatomic) long long style;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) float zPosition;
@property (nonatomic) struct { union { struct { float topLeft; float topRight; float bottomLeft; float bottomRight; } ; float byIndex[4]; } ; } cornerRadius;
@property (readonly, nonatomic) PXGSpriteReference *viewSpriteReference;
@property (readonly, nonatomic) unsigned int viewSpriteIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_updateContent;
- (void)update;
- (void)didUpdate;
- (id)axSpriteIndexes;
- (void)_invalidateContent;
- (void)_invalidateMediaVersion;
- (void)alphaDidChange;
- (void)appearStateDidChange;
- (id)axSpriteIndexesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)displayScaleDidChange;
- (id)hitTestResultForSpriteIndex:(unsigned int)a0;
- (void)referenceSizeDidChange;
- (Class)viewClassForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)viewContentDidChange;
- (void)viewSizeDidChange;
- (id)viewUserDataForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)willUpdate;

@end
