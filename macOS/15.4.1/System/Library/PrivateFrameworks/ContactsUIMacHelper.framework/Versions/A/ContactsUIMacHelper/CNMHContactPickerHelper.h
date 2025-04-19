@class CNMHContactPickerRemoteViewController, NSArray, NSPopover, NSString, NSWindow;
@protocol CNMHContactPickerHelperDelegate;

@interface CNMHContactPickerHelper : NSObject <CNContactPickerInternalResponseDelegate, NSPopoverDelegate, CNMHContactPickerHelper>

@property (copy) NSArray *displayedKeys;
@property BOOL unscaledMode;
@property (weak) NSWindow *presentingWindow;
@property (retain) CNMHContactPickerRemoteViewController *remoteVC;
@property (weak) NSWindow *panelWindow;
@property (retain) NSPopover *popover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CNMHContactPickerHelperDelegate> delegate;

- (void).cxx_destruct;
- (void)dismiss;
- (BOOL)mouseDownEvent:(id)a0 wouldReactivatePopover:(id)a1;
- (void)popoverDidClose:(id)a0;
- (void)popoverWillClose:(id)a0;
- (void)didSearchForString:(id)a0;
- (void)didSelectContact:(id)a0 key:(id)a1 value:(id)a2 identifier:(id)a3;
- (void)didShowSectionWithIdentifier:(id)a0;
- (void)cleanupAfterDismissal;
- (id)currentNSWindowForWindow:(id)a0 needsYInvert:(BOOL *)a1;
- (id)initWithDisplayedKeys:(id)a0 unscaledMode:(BOOL)a1;
- (void)notifyDelegateDidDismiss;
- (void)notifyDelegateWillDismiss;
- (void)presentInPopoverInWindow:(id)a0 atWindowRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 preferredEdge:(unsigned long long)a2;
- (void)presentModalOverWindow:(id)a0;
- (void)requestConfiguredRemoteControllerWithCompletionBlock:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scaledRectFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
