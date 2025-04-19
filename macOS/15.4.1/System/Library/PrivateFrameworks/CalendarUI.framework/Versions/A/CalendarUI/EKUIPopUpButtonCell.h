@class NSDictionary, EKViewController, EKUIPopUpButton;

@interface EKUIPopUpButtonCell : NSPopUpButtonCell

@property BOOL useAlternateTitle;
@property BOOL mouseOver;
@property (retain) NSDictionary *enabledTitleAttributes;
@property (retain) NSDictionary *disabledTitleAttributes;
@property (weak) EKViewController *viewController;
@property (weak) EKUIPopUpButton *uiPopUpbutton;

- (void).cxx_destruct;
- (id)attributedTitle;
- (id)titleAttributes;
- (void)_setMouseTrackingInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ofView:(id)a1;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (id)textColor;
- (id)titleFont;
- (id)lightTextColor;
- (id)currentTitleAttributesWithColor;

@end
