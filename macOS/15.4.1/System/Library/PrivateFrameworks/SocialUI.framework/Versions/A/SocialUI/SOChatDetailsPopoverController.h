@class NSPopover, SOChatDisplayController, NSView, NSString, SOChatDetailsViewController;

@interface SOChatDetailsPopoverController : NSObject <NSPopoverDelegate>

@property (retain) NSPopover *popover;
@property (retain) SOChatDetailsViewController *detailsViewController;
@property (weak) NSView *positioningView;
@property (getter=isDetachable) BOOL detachable;
@property BOOL clearsOnClose;
@property (retain, nonatomic) SOChatDisplayController *chatDisplayController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedChatDetailsPopoverController;

- (void).cxx_destruct;
- (void)popoverDidShow:(id)a0;
- (void)popoverDidClose:(id)a0;
- (BOOL)popoverShouldClose:(id)a0 withReason:(long long)a1;
- (BOOL)popoverShouldDetach:(id)a0;
- (void)popoverWillClose:(id)a0;
- (void)popoverWillShow:(id)a0;
- (void)showRelativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ofView:(id)a1 preferredEdge:(unsigned long long)a2;
- (void)_popoverWindowDidChangeScreen:(id)a0;
- (void)_updatePopoverMaxHeight;
- (void)createPopoverIfNeeded;

@end
