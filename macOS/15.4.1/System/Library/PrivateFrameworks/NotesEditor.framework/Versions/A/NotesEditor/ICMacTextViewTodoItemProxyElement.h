@class NSString, ICMacTextView;

@interface ICMacTextViewTodoItemProxyElement : NSAccessibilityElement <NSAccessibilityButton>

@property (nonatomic) ICMacTextView *textView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityLabel;
- (id)accessibilityParent;
- (BOOL)accessibilityPerformPress;
- (id)initWithTextView:(id)a0;

@end
