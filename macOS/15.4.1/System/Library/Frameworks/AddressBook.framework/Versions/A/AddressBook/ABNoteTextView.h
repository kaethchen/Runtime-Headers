@interface ABNoteTextView : NSTextView

@property (nonatomic) BOOL needsCardViewBorderDrawing;

- (BOOL)allowsVibrancy;
- (BOOL)becomeFirstResponder;
- (void)insertBacktab:(id)a0;
- (void)insertTab:(id)a0;
- (BOOL)resignFirstResponder;

@end
