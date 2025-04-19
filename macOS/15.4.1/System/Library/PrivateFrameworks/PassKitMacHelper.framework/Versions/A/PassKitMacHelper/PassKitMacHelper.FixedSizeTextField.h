@interface PassKitMacHelper.FixedSizeTextField : NSTextField {
    void /* unknown type, empty encoding */ focusedFirstTime;
}

@property (class, nonatomic) Class cellClass;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
