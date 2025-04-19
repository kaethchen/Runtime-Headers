@interface FI_TDesktopGridLayout : NSObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _anchoredCellFrame;
    struct CGSize { double width; double height; } _cellSize;
    struct TIconLayoutBitmap { long long fRowStride; struct vector<unsigned char, std::allocator<unsigned char>> { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *__value_; } __end_cap_; } fBitmap; long long fWidth; long long fHeight; struct Location { long long x; long long y; } fLastOpenLocation; int fStyle; BOOL fExpands; } _bitmap;
}

@property (nonatomic) int layoutStyle;
@property (nonatomic) BOOL justifiedLayout;
@property (nonatomic) BOOL expandsIfNeeded;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } layoutFrame;
@property (nonatomic) double topMargin;
@property (nonatomic) double bottomMargin;
@property (nonatomic) double leftMargin;
@property (nonatomic) double rightMargin;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } cellSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } anchoredCellFrame;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)setItemLocation:(const struct CGPoint { double x0; double x1; } *)a0;
- (void)initCommon;
- (struct CGSize { double x0; double x1; })gridDimensions;
- (BOOL)isVerticalLayout;
- (struct CGPoint { double x0; double x1; })anchorForIndex:(unsigned long long)a0;
- (BOOL)itemAtLocation:(const struct CGPoint { double x0; double x1; } *)a0;
- (struct CGPoint { double x0; double x1; })anchorAtGridLocation:(struct CGPoint { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })calculateGridDimensions;
- (void)clearAllItemLocations;
- (BOOL)getCellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 atGridLocation:(struct CGPoint { double x0; double x1; })a1;
- (struct CGPoint { double x0; double x1; })gridLocationInDirection:(int)a0 fromAnchor:(const struct CGPoint { double x0; double x1; } *)a1;
- (double)heightForRows:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 anchoredCellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 layoutStyle:(int)a2 justifiedLayout:(BOOL)a3;
- (BOOL)isLTRLayout;
- (struct CGPoint { double x0; double x1; })nearestGridLocation:(struct CGPoint { double x0; double x1; })a0;
- (unsigned long long)nextMajorIndexFromIndex:(unsigned long long)a0;
- (BOOL)nextOpenLocation:(struct CGPoint { double x0; double x1; } *)a0;
- (unsigned long long)numberOfGridSpots;
- (struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *x0; struct CGPoint *x1; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint *x0; } x2; })occupyGridSpots:(unsigned long long)a0;
- (void)occupyGridSpotsForRect:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (void)updateGrid;

@end
