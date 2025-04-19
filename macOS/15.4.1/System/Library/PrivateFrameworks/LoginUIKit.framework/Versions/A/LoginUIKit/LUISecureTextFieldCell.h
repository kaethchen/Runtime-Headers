@interface LUISecureTextFieldCell : NSSecureTextFieldCell

@property BOOL shouldSmoothFonts;

- (id)init;
- (id)initWithCoder:(id)a0;
- (long long)_typesetterBehavior;
- (id)initTextCell:(id)a0;
- (id)placeholderString;
- (id)setUpFieldEditorAttributes:(id)a0;
- (id)_insertionPointColor;
- (void)_setupDefaults;

@end
