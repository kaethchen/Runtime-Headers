@class PXLayoutSnapshot;
@protocol PXEngineDrivenAssetsTilingLayoutDelegate;

@interface PXEngineDrivenAssetsTilingLayout : PXAssetsTilingLayout {
    struct { } _needsUpdateFlags;
    struct { BOOL respondsToEngineDrivenLayoutReferenceSizeDidChange; BOOL respondsToEngineDrivenLayoutAspectRatioForItemAtIndexPath; BOOL respondsToEngineDrivenLayoutZPositionForItemAtIndexPath; BOOL respondsToEngineDrivenLayoutContentsRectForItemAtIndexPathForAspectRatio; BOOL respondsToEngineDrivenLayoutPlayButtonSizeForItemAtIndexPathForAspectRatio; } _delegateFlags;
}

@property (weak, nonatomic) id<PXEngineDrivenAssetsTilingLayoutDelegate> delegate;
@property (retain, nonatomic) PXLayoutSnapshot *layoutSnapshot;
@property (nonatomic) long long contentMode;

- (void).cxx_destruct;
- (void)_commonInit;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentBounds;
- (id)dataSource;
- (id)initWithDataSource:(id)a0;
- (BOOL)_needsUpdate;
- (void)setReferenceSize:(struct CGSize { double x0; double x1; })a0;
- (void)_updateIfNeeded;
- (BOOL)getAdditionalTileIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; } *)a0 group:(unsigned long long *)a1 layoutGeometryKind:(unsigned long long)a2 indexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a3;
- (double)_aspectRatioForItemAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentsRectForItemAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0 forAspectRatio:(double)a1;
- (double)_zPositionForItemAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (void)adjustGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; } *)a0 forAdditionalTileWithKind:(unsigned long long)a1 indexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a2;
- (void)adjustGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; } *)a0 forContentTileWithIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1;
- (void)enumerateTilesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withOptions:(id)a1 usingBlock:(id /* block */)a2;
- (BOOL)getGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; } *)a0 group:(unsigned long long *)a1 userData:(id *)a2 forTileWithIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a3;
- (id)initWithLayoutEngineSnapshot:(id)a0;
- (struct CGSize { double x0; double x1; })playButtonSizeForItemAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0 contentTileSize:(struct CGSize { double x0; double x1; })a1;

@end
