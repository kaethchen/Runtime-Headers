@class NSImageView, AXVMenuItem, AXVTextField, NSStackView;

@interface AXVMenuItemView : AXVView

@property (retain, nonatomic) AXVTextField *_descriptionTextField;
@property (retain, nonatomic) AXVTextField *_keyboardShortcutTextField;
@property (retain, nonatomic) NSImageView *_submenuIndicatorView;
@property (retain, nonatomic) NSStackView *_stackView;
@property (retain, nonatomic) AXVMenuItem *menuItem;
@property (nonatomic) double fontSize;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL isHighContrast;
@property (nonatomic) BOOL reserveViewForSubmenuIndicator;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)mouseDownCanMoveWindow;
- (void)updateLayer;
- (void)_setupDescriptionTextFieldConstraints:(id)a0 parentView:(id)a1;
- (void)_setupKeyboardShortcutTextFieldConstraints:(id)a0 parentView:(id)a1;
- (void)_setupStackView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateSubmenuIndicatorImage;

@end
