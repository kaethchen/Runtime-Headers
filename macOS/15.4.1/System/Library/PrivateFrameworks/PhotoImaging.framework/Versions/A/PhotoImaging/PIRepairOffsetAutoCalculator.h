@interface PIRepairOffsetAutoCalculator : NUAutoCalculator {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _strokeExtent;
}

+ (struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })calcReefSearchExtentForImageExtent:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0 andMaskExtent:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1;

- (void)submit:(id /* block */)a0;
- (id)initWithComposition:(id)a0 strokeExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
