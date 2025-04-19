@class PXMemoriesSpec;

@interface PXMemoriesFeedLayoutMetrics : PXLayoutMetrics

@property (retain, nonatomic) PXMemoriesSpec *spec;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } contentInsets;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
