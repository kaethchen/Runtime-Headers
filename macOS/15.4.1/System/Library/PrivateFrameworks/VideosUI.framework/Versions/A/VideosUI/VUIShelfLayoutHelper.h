@class VUIShelfViewLayout;

@interface VUIShelfLayoutHelper : NSObject {
    long long _sectionCount;
    long long *_sectionOffsets;
    struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *_cellFrames;
    struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *_headerFrames;
    struct NSEdgeInsets { double x0; double x1; double x2; double x3; } *_sectionInsets;
}

@property (readonly, weak, nonatomic) VUIShelfViewLayout *shelfViewLayout;
@property (readonly, nonatomic) long long actualRowCount;
@property (readonly, nonatomic) double tallestInsetTop;
@property (readonly, nonatomic) double tallestInsetBottom;
@property (readonly, nonatomic) double tallestHeaderHeight;
@property (readonly, nonatomic) double tallestColumnHeight;

- (void)dealloc;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForItemAtIndexPath:(id)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })insetForSection:(long long)a0;
- (void)_freeBuffers;
- (void)_compute;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForHeaderInSection:(long long)a0;
- (id)initWithShelfViewLayout:(id)a0;

@end
