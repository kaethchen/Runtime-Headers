@class NSString, NSImage, MMAlert, NSButton, NSWindow;
@protocol MMModalDialogDelegate;

@interface MMModalDialog : NSObject {
    id /* block */ _completionHandler;
    id /* block */ _helpHandler;
}

@property BOOL isModal;
@property NSWindow *parentWindow;
@property BOOL isVisible;
@property (nonatomic) id<MMModalDialogDelegate> delegate;
@property (readonly) NSButton *defaultButton;
@property (readonly) NSButton *alternateButton;
@property (readonly) NSButton *otherButton;
@property (copy) NSString *defaultButtonKeyEquivalent;
@property (copy) NSString *alternateButtonKeyEquivalent;
@property (copy) NSString *otherButtonKeyEquivalent;
@property (copy) NSString *title;
@property (copy) NSString *message;
@property (copy) NSString *defaultButtonTitle;
@property (copy) NSString *alternateButtonTitle;
@property (copy) NSString *otherButtonTitle;
@property (copy) NSString *iconLabel;
@property (copy) NSString *badgeLabel;
@property NSImage *icon;
@property NSImage *badge;
@property (retain) MMAlert *alert;

- (void).cxx_destruct;
- (void)beginSheetModalForWindow:(id)a0 completionHandler:(id /* block */)a1;
- (void)endModalDialog:(id)a0;
- (void)stopModalDialog;
- (void)beginModalDialogWithParentWindow:(id)a0 completionHandler:(id /* block */)a1;
- (void)beginModalDialogWithParentWindow:(id)a0 shouldNest:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)initWithTitle:(id)a0 message:(id)a1 defaultButtonTitle:(id)a2 alternateButtonTitle:(id)a3 otherButtonTitle:(id)a4 icon:(id)a5 iconLabel:(id)a6 badge:(id)a7 badgeLabel:(id)a8 helpHandler:(id /* block */)a9;

@end
