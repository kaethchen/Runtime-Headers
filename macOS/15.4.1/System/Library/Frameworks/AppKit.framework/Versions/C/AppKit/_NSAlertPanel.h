@class NSView, NSAlert;

@interface _NSAlertPanel : NSPanel

@property (weak) NSView *clientInitialFirstResponder;
@property (weak) NSView *fallbackInitialFirstResponder;
@property (weak) NSAlert *alert;

- (void).cxx_destruct;
- (unsigned long long)_automaticApplicationTerminationBehaviorWhenModal;
- (void)_dismissModalForTerminate;
- (void)_selectFirstKeyView;
- (void)_setAlertWindow:(BOOL)a0;
- (void)setInitialFirstResponder:(id)a0;

@end
