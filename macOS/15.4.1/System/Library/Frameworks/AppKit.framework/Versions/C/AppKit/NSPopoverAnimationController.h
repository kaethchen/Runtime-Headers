@class NSView, NSString, NSPopover;

@interface NSPopoverAnimationController : NSObject <NSImmediateActionAnimationController> {
    id _reserved2;
    unsigned int _reservedPopoverFlags : 32;
}

@property (readonly) NSPopover *popover;
@property unsigned long long preferredEdge;
@property (weak) NSView *anchorView;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } positioningRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)popoverAnimationControllerWithPopover:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)recognizerDidCompleteAnimation:(id)a0;
- (void)recognizerDidCancelAnimation:(id)a0;
- (void)recognizerDidDismissAnimation:(id)a0;
- (void)recognizerDidUpdateAnimation:(id)a0;
- (void)recognizerWillBeginAnimation:(id)a0;

@end
