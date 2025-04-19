@class NSIndexSet;

@interface SegmentedControlWithDynamicWidth : NSSegmentedControl

@property (copy, nonatomic) NSIndexSet *indexesOfSegmentsWithDynamicWidths;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)setSegmentCount:(long long)a0;
- (double)_endCapWidth;
- (void)_updateSegmentWidths;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForSegment:(long long)a0;

@end
