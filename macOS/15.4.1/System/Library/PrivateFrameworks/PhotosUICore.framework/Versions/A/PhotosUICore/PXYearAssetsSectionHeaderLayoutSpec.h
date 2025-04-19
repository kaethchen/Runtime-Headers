@interface PXYearAssetsSectionHeaderLayoutSpec : PXCuratedLibrarySectionHeaderLayoutSpec {
    struct NSEdgeInsets { double top; double left; double bottom; double right; } padding;
}

- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })padding;
- (void)setPadding:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1 padding:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a2 variant:(long long)a3;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1 variant:(long long)a2;

@end
