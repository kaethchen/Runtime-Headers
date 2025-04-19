@class NSString, NSTextField;

@interface AXVTitledHighlightView : AXVHighlightView

@property (retain, nonatomic, setter=_setTitleTextField:) NSTextField *_titleTextField;
@property (copy, nonatomic) NSString *titleText;

- (void).cxx_destruct;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateTitleTextFieldFrame;

@end
