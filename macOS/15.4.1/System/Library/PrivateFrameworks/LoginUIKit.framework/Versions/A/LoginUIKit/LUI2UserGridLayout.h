@interface LUI2UserGridLayout : LUI2UserLayout <LUI2UserLayoutProtocol>

@property (readonly) struct LUI2UserGridDimensions { long long style; long long numRowsPerPage; long long numColumnsPerPage; long long numPages; } gridDimensions;
@property struct CGPoint { double x; double y; } contentOffset;
@property (nonatomic) double xContentOffset;

+ (struct LUI2UserGridDimensions { long long x0; long long x1; long long x2; long long x3; })_dimensionsForUserCount:(long long)a0;
+ (id)layoutWithUserCount:(long long)a0;
+ (struct CGSize { double x0; double x1; })maxGridSizePerPage;
+ (struct CGSize { double x0; double x1; })maxSizeForLayout;
+ (unsigned long long)maxUserCountPerPage;
+ (long long)numberOfColumnsForUserCount:(long long)a0;
+ (struct CGSize { double x0; double x1; })sizeForLayoutWithUserCount:(long long)a0;

- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void)invalidateLayoutWithContext:(id)a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void)prepareLayout;
- (void)calcContentOffset;
- (id)itemFrameForItemIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutBounds;
- (BOOL)shouldAnimateToLayout:(id)a0;

@end
