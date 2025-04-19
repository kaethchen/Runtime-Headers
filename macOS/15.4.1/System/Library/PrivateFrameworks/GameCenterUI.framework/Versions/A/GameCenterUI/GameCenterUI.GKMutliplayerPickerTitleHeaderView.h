@interface GameCenterUI.GKMutliplayerPickerTitleHeaderView : NSUICollectionReusableView {
    void /* unknown type, empty encoding */ backgroundPlatterView;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ titleHeaderView;

+ (struct CGSize { double x0; double x1; })sizeFitting:(struct CGSize { double x0; double x1; })a0 forTitle:(id)a1 accessorySize:(struct CGSize { double x0; double x1; })a2 layoutMargins:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a3 inTraitEnvironment:(id)a4;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
