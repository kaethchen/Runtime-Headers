@class NSView, NSString, AutomaticPasswordPopoverViewController;

@interface AutomaticPasswordPopoverController : NSObject <AutomaticPasswordPopoverViewControllerDelegate> {
    AutomaticPasswordPopoverViewController *_automaticPasswordPopoverViewController;
    BOOL _isPresentingPopover;
    BOOL _shouldIgnoreInteractionsWithPopover;
}

@property (readonly, nonatomic) void *formCompletionController;
@property (readonly, nonatomic) NSView *positioningView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } positioningRectInViewCoordinates;
@property (readonly, nonatomic, getter=isShowingPopover) BOOL showingPopover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)dismissPopover;
- (void)showPopover;
- (id)currentStrongPasswordForAutomaticPasswordPopoverViewController:(id)a0;
- (void)automaticPasswordPopoverViewController:(id)a0 didUpdateSelectionToUseOtherOptions:(id)a1;
- (void)automaticPasswordPopoverViewController:(id)a0 didUpdateSelectionToUseStrongPassword:(BOOL)a1;
- (void)automaticPasswordPopoverViewControllerDidDisappear:(id)a0;
- (void)copyPasswordForAutomaticPasswordPopoverViewController:(id)a0;
- (id)easyToTypePasswordForAutomaticPasswordPopoverViewController:(id)a0;
- (void)editPasswordForAutomaticPasswordPopoverViewController:(id)a0;
- (id)generic15CharacterAlphanumericPasswordForAutomaticPasswordPopoverViewController:(id)a0;
- (id)initWithFormCompletionController:(void *)a0 positioningView:(id)a1 positioningRectInViewCoordinates:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
