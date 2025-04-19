@class NSTextView, NSAttributedString;

@interface ABShadowTextFieldCell : NSTextFieldCell {
    NSTextView *_fieldEditor;
}

@property (copy) NSAttributedString *originalPlaceholder;
@property (copy) NSAttributedString *alternatePlaceholder;
@property (nonatomic) BOOL displaysAlternatePlaceholder;
@property (getter=accessibilityIsIgnored) BOOL ignoredByAccessibility;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)fieldEditorForView:(id)a0;

@end
