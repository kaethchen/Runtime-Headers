@class NSArray, UXPopover, NSString, UXViewController;
@protocol UXPopoverControllerDelegate;

@interface UXPopoverController : UXViewController <NSPopoverDelegate> {
    UXPopover *_popover;
}

@property (readonly, nonatomic) UXPopover *popover;
@property (weak, nonatomic) id<UXPopoverControllerDelegate> delegate;
@property (retain, nonatomic) UXViewController *contentViewController;
@property (readonly, nonatomic, getter=isPopoverVisible) BOOL popoverVisible;
@property (nonatomic) long long popoverBehavior;
@property (nonatomic) struct CGSize { double x0; double x1; } popoverContentSize;
@property (copy, nonatomic) NSArray *passthroughViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dismissPopover;
- (void)popoverDidClose:(id)a0;
- (BOOL)popoverShouldClose:(id)a0;
- (void)popoverWillShow:(id)a0;
- (void)setPopoverContentSize:(struct CGSize { double x0; double x1; })a0 animated:(BOOL)a1;
- (void)_updateContentSize;
- (void)dismissPopoverAnimated:(BOOL)a0;
- (id)initWithContentViewController:(id)a0;
- (void)presentPopoverFromBarButtonItem:(id)a0 permittedArrowDirections:(unsigned long long)a1 animated:(BOOL)a2;
- (void)presentPopoverFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 preferredEdge:(unsigned long long)a2;

@end
