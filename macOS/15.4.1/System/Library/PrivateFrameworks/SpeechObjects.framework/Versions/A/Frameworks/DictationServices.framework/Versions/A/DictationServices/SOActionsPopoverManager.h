@class SOElementProxyWindow, NSString, SOActionsListViewController, NSPopover;

@interface SOActionsPopoverManager : NSObject <NSPopoverDelegate>

@property (retain) SOActionsListViewController *actionsListViewController;
@property SOElementProxyWindow *elementProxyWindow;
@property NSPopover *actionsPopover;
@property double startAnimatingPopoverCloseTimestamp;
@property (copy) id /* block */ didShowBlock;
@property (copy) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (BOOL)isVisible;
- (BOOL)isMouseInWindow;
- (void)hideActionsPopover;
- (void)showActionsPopoverWithDisambiguationItems:(id)a0 title:(id)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 completionBlock:(id /* block */)a3 didShowBlock:(id /* block */)a4;

@end
