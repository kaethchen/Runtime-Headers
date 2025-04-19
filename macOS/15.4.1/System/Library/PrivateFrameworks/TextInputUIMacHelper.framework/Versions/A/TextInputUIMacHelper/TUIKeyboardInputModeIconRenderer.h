@interface TUIKeyboardInputModeIconRenderer : NSObject

- (id)attributedStringWithText:(id)a0 color:(id)a1;
- (id)attributedStringForPrimaryLabel:(id)a0 secondaryLabel:(id)a1 withTintColor:(id)a2 detailTintColor:(id)a3 language:(id)a4;
- (void)drawPrimaryLabel:(id)a0 secondaryLabel:(id)a1 withConfiguration:(id)a2 inContext:(struct CGContext { } *)a3;
- (id)imageForPrimaryLabel:(id)a0 secondaryLabel:(id)a1 withConfiguration:(id)a2;

@end
