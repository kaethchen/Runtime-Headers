@interface RemindersUICore.TTRMComponentViewLocationAreaComponentView : NSView <TTRMRadialMapControllerDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ mapViewController;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ arrivingRadioButton;
@property (nonatomic, weak) void /* unknown type, empty encoding */ leavingRadioButton;
@property (nonatomic, weak) void /* unknown type, empty encoding */ mapContainerView;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)radiusDidChange:(double)a0;
- (void)arrivingLabelAction:(id)a0;
- (void)leavingLabelAction:(id)a0;
- (void)toggleAction:(id)a0;

@end
