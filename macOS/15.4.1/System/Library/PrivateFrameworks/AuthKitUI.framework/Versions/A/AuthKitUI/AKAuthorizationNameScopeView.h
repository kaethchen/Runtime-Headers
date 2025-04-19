@class AKAuthorizationNameScopeViewController, NSTextField;

@interface AKAuthorizationNameScopeView : NSView

@property (weak, nonatomic) AKAuthorizationNameScopeViewController *internalViewController;
@property (nonatomic) BOOL mouseDownInValueLabel;
@property (retain, nonatomic) NSTextField *valueLabel;

- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (BOOL)_isEvent:(id)a0 inFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
