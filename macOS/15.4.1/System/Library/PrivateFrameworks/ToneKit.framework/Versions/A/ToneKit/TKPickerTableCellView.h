@class NSTextField, NSString, NSView, NSImageView, NSLayoutConstraint;

@interface TKPickerTableCellView : NSView {
    NSTextField *_textField;
    NSTextField *_detailTextField;
    NSView *_textContainerView;
    NSImageView *_checkmarkView;
    NSLayoutConstraint *_textContainerViewRightConstraint;
}

@property (class, readonly, nonatomic) double intrinsicHeight;

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *detailText;
@property (nonatomic) BOOL showsCheckmark;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_addCheckmark;
- (void)_configureTextFieldAsWideButShrinkable:(id)a0 withOtherTextField:(id)a1;
- (void)_removeCheckmark;

@end
