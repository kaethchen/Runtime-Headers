@class NSPopover, NSString, NSError, NSWindow;

@interface NSDocumentAutosaveButton : NSButton <NSPopoverDelegate> {
    NSError *_nonModalError;
    BOOL _needsShowAlertPopover;
    BOOL _userIsIdleForAlertPopover;
    BOOL _isPopoverVisible;
    NSPopover *_documentPopover;
    NSPopover *_documentErrorPopover;
}

@property (readonly, getter=isPopoverVisible) BOOL popoverVisible;
@property (copy) NSError *nonModalDocumentError;
@property (weak) NSWindow *representedWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_delayedHideAlertPopover;
- (void)_dismissDocumentErrorPopover;
- (void)_handleClick:(id)a0;
- (void)_setupAlertPopoverAutohideIgnoringRecentEvents:(BOOL)a0;
- (void)_showAlertPopoverIgnoringRecentEvents:(BOOL)a0;
- (void)_userBecameIdleForAlertPopover;
- (void)_windowDidOrderOnScreen:(id)a0;
- (void)dismissPopover;
- (void)popoverDidClose:(id)a0;
- (void)popoverWillShow:(id)a0;
- (void)showPopover;

@end
