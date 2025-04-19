@interface RemindersUICore.TTRMComponentViewGroupComponentView : NSView <NSStackViewDelegate> {
    void /* unknown type, empty encoding */ widthConstraints;
    void /* unknown type, empty encoding */ viewInfoByView;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ componentContainerView;
@property (nonatomic, weak) void /* unknown type, empty encoding */ childrenStackView;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stackView:(id)a0 didReattachViews:(id)a1;
- (void)stackView:(id)a0 willDetachViews:(id)a1;

@end
