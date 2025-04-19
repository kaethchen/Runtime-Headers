@interface AppStoreKit.WordmarkView : AppStoreKit.BaseView {
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ alignment;
    void /* unknown type, empty encoding */ referenceLineHeight;
}

@property (class, nonatomic, readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } layoutMarginsMatchingTextField;

@property (nonatomic, readonly) BOOL flipped;
@property (nonatomic, readonly) BOOL hasContent;

- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;
- (void)updateAlignmentToMatch:(long long)a0;
- (void)updateTintColorTo:(id)a0;

@end
