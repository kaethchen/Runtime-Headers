@class NSString, ICMClickableTextView;

@interface ICPressableAttachmentAccessibilityElement : NSAccessibilityElement <NSAccessibilityButton> {
    ICMClickableTextView *_textView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityLabel;
- (id)accessibilityParent;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityRoleDescription;
- (id)initWithTextView:(id)a0;

@end
