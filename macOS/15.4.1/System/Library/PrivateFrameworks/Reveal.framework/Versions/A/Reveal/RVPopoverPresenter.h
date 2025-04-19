@class NSPopover, NSString, RVPresentingContext, RVItem;

@interface RVPopoverPresenter : NSObject <NSPopoverDelegate, RVGestureDelegate> {
    NSPopover *_customPopover;
    RVItem *_customItem;
    RVPresentingContext *_customPresentingContext;
    id _strongSelf;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)closeAll;

- (void).cxx_destruct;
- (void)close;
- (void)popoverWillClose:(id)a0;
- (void)popoverWillShow:(id)a0;
- (void)gestureStarting;
- (void)gestureStopped:(BOOL)a0;
- (id)customPopoverForItem:(id)a0 presentingContext:(id)a1 content:(id)a2;

@end
