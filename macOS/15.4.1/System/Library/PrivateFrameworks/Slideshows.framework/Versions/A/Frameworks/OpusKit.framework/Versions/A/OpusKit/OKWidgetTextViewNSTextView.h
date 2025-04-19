@class OKWidgetTextView;

@interface OKWidgetTextViewNSTextView : NSTextView

@property (nonatomic) OKWidgetTextView *widgetTextView;

- (BOOL)becomeFirstResponder;
- (void)didChangeText;
- (void)mouseDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (BOOL)resignFirstResponder;
- (BOOL)wantsDefaultClipping;
- (struct CGImage { } *)_createTextImage;

@end
