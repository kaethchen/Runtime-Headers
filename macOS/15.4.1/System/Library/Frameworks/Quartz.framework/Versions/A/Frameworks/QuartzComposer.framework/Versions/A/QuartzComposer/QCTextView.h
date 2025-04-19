@interface QCTextView : NSTextView

+ (id)sharedInstance;

- (void)keyDown:(id)a0;
- (BOOL)performKeyEquivalent:(id)a0;
- (BOOL)validateMenuItem:(id)a0;
- (void)_windowDidResignKeyNotification:(id)a0;

@end
