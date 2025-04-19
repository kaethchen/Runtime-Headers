@class NSDictionary, NSString, NSImage;

@interface EKUITextButton : NSButton

@property (retain) NSDictionary *textAttributes;
@property (retain) NSString *text;
@property (retain) NSImage *originalImage;

+ (Class)cellClass;

- (id)init;
- (void).cxx_destruct;
- (BOOL)acceptsFirstResponder;
- (BOOL)allowsVibrancy;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeKeyView;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)resignFirstResponder;
- (void)setTitle:(id)a0 withAttributes:(id)a1;

@end
