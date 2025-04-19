@interface PXZoomableInlineHeadersLayoutSpec : PXFeatureSpec {
    struct NSEdgeInsets { double top; double left; double bottom; double right; } _headerFloatMargins;
    struct NSEdgeInsets { double top; double left; double bottom; double right; } _headerFloatMarginsWithTallSafeAreaInsets;
}

@property (readonly, nonatomic) unsigned long long style;
@property (readonly, nonatomic) double headerOffsetY;

- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })headerFloatMarginsForSafeAreaInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;

@end
