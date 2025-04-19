@class NSString, NSColor, NSButton;

@interface KHSwitch : UXView {
    NSButton *_button;
    id _target;
    SEL _action;
}

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSColor *titleColor;
@property (retain, nonatomic) NSColor *thumbTintColor;
@property (nonatomic, getter=isOn) BOOL on;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTarget:(id)a0 action:(SEL)a1;
- (void)stateChanged:(id)a0;

@end
