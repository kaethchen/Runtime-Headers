@interface PXCuratedLibraryGridLayoutMetrics : PXLayoutMetrics

@property (nonatomic) long long numberOfColumns;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) double itemAspectRatio;
@property (nonatomic) double headerAspectRatio;
@property (nonatomic) double screenScale;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) long long style;
@property (nonatomic) long long numberOfPrecedingAssets;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
