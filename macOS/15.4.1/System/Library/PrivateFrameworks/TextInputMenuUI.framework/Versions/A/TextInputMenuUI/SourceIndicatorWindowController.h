@interface SourceIndicatorWindowController : NSWindowController

+ (id)newSourceIndicatorWindowController;

- (void)dealloc;
- (void)handleUIServerMessage:(int)a0 withInfo:(id)a1;
- (void)_hideSourceIndicator;
- (void)_showSourceIndicator;

@end
