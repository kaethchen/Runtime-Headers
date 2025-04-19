@class NSView, MMJSDialog, NSWindow;

@interface MMJSDialogController : NSObject {
    NSView *_parentView;
}

@property (retain) MMJSDialog *mmJSDialog;
@property (readonly, retain) NSWindow *parentWindow;
@property struct OpaqueJSContext { } *jsContext;

- (void).cxx_destruct;
- (id)parentWindow;
- (id)initWithParentView:(id)a0;

@end
