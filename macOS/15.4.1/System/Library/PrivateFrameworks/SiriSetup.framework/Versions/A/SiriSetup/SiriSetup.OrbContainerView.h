@interface SiriSetup.OrbContainerView : NSView {
    void /* unknown type, empty encoding */ orbView;
    void /* unknown type, empty encoding */ checkMark;
    void /* unknown type, empty encoding */ fitsToSuperView;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;

@end
