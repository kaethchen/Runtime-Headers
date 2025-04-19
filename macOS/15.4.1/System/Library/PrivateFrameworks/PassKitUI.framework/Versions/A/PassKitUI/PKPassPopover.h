@class NSView, PKPassView, NSArray, NSString, PKChildWindow, PKPassViewerViewController, NSWindow, NSPopover;

@interface PKPassPopover : NSObject <NSPopoverDelegate, PKPassViewerDelegate> {
    NSPopover *_popover;
    PKChildWindow *_popoverMaskWindow;
    NSWindow *_hostWindow;
    PKPassViewerViewController *_viewController;
}

@property (copy) id /* block */ completionHandler;
@property (readonly) NSArray *passes;
@property (readonly) PKPassView *passView;
@property (readonly) NSView *hostView;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } hostRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_popovers;
+ (id)popoverWithPass:(id)a0 relativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2;
+ (id)popoverWithPasses:(id)a0 relativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2;

- (void).cxx_destruct;
- (void)popoverDidShow:(id)a0;
- (void)popoverDidClose:(id)a0;
- (void)showPass;
- (void)showPassWithCompletionHandler:(id /* block */)a0;
- (void)_closePopover;
- (id)initWithPasses:(id)a0 relativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2;
- (void)passViewer:(id)a0 closeClicked:(id)a1;
- (void)passViewer:(id)a0 didAddToPassbook:(id)a1;
- (void)passViewer:(id)a0 didChangePass:(id)a1;

@end
