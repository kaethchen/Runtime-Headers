@class NSProgressIndicator, NSButton, NSTextField;

@interface NSProgressPanel : NSPanel {
    id _cancellationDelegate;
    SEL _cancellationSelector;
    void *_cancellationContextInfo;
    BOOL _wasCancelled;
}

@property NSTextField *captionTextField;
@property NSProgressIndicator *progressIndicator;
@property NSButton *cancelButton;

+ (id)progressPanelWithNibName:(id)a0;

- (void)cancelButtonPressed:(id)a0;
- (void)setCancellationDelegate:(id)a0 wasCancelledSelector:(SEL)a1 contextInfo:(void *)a2;

@end
