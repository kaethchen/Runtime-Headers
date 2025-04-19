@protocol NSVisualTabPickerSearchFieldDelegate;

@interface NSVisualTabPickerSearchField : NSSearchField

@property (weak) id<NSVisualTabPickerSearchFieldDelegate> delegate;

+ (void)initialize;

- (void)_searchTextDidChange:(id)a0;
- (void)_windowResignedKeyStatus:(id)a0;
- (BOOL)acceptsFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
