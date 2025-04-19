@class PXGPath, NSColor, NSString;

@interface PXGRoundedCornerMaskLayout : PXGLayout <PXGPathSource, PXGSolidColorSource> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    struct _PXGSpriteIndexRange { unsigned int location; unsigned int length; } _sideMaskSpriteIndexRange;
    long long _mediaVersion;
}

@property (copy, nonatomic) PXGPath *topLeftPath;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL continuousCorners;
@property (retain, nonatomic) NSColor *maskColor;
@property (nonatomic) double maskScale;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (nonatomic) double leftMaskWidth;
@property (nonatomic) double rightMaskWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_updateContent;
- (void)update;
- (void)contentSizeDidChange;
- (void)_updatePath;
- (void)_invalidatePath;
- (void)_invalidateContent;
- (id)colorAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)displayScaleDidChange;
- (id)initWithCornerRadius:(double)a0 continuousCorners:(BOOL)a1 maskColor:(id)a2;
- (id)pathForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)referenceSizeDidChange;

@end
