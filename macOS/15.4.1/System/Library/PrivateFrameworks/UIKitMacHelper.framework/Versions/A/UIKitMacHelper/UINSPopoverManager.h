@class UIWindow, NSString, NSDictionary, UINSSceneHostingViewController, NSPopover;
@protocol UIPopoverPresentationControllerSourceItem;

@interface UINSPopoverManager : NSObject <NSPopoverDelegate, UINSSceneHostingViewControllerDelegate> {
    NSPopover *_popover;
    UIWindow *_parentUIWindow;
    UIWindow *_popoverUIWindow;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _sourceRectInParentUIWindow;
    struct CGSize { double width; double height; } _contentSizeInAppKitPoints;
    struct CGSize { double width; double height; } _contentSizeInUIKitPoints;
    id /* block */ _dismissalBlock;
    id /* block */ _presentationCompletionBlock;
    id /* block */ _allowPopoverToCloseBlock;
    unsigned long long _preferredEdge;
    BOOL _detached;
    BOOL _showsArrow;
    id /* block */ _detachCompletionBlock;
    long long _preferredHorizontalAlignment;
    BOOL _isRTL;
    UINSSceneHostingViewController *_sceneHost;
    id /* block */ _setupCompletionHandler;
    BOOL _sceneCreated;
    id /* block */ _deferredUpdateBlock;
}

@property (weak, nonatomic) id<UIPopoverPresentationControllerSourceItem> sourceItem;
@property (nonatomic) BOOL usingSourceItemView;
@property (nonatomic) BOOL shouldConvertToScene;
@property (nonatomic) BOOL isModalInPresentation;
@property (nonatomic) BOOL appkitDidPresent;
@property (nonatomic) BOOL uikitTransitionDidEnd;
@property (readonly) NSString *sceneIdentifier;
@property (readonly) NSDictionary *respondersToRestore;
@property (nonatomic) long long windowAppearance;
@property BOOL supportsDetach;
@property (copy, nonatomic) id /* block */ finalizeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })positioningRect;
- (void)popoverDidShow:(id)a0;
- (void)dismissPopover;
- (void)popoverDidClose:(id)a0;
- (void)popoverDidDetach:(id)a0;
- (BOOL)popoverShouldClose:(id)a0;
- (BOOL)popoverShouldDetach:(id)a0;
- (void)popoverWillShow:(id)a0;
- (void)_executePresentationCompletionBlockIfNecessary;
- (void)_updatePopoverAppearance;
- (void)closePopoverOnExit;
- (void)detachFromPoint:(struct CGPoint { double x0; double x1; })a0 withCompletionCallback:(id /* block */)a1;
- (id)initWithPopoverWindow:(id)a0 parentWindow:(id)a1 respondersToRestore:(id)a2 sourceRectInParentUIWindow:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 contentSize:(struct CGSize { double x0; double x1; })a4 permittedArrowDirections:(long long)a5 showsArrow:(BOOL)a6 windowAppearance:(long long)a7 isModalInPresentation:(BOOL)a8 shouldConvertToScene:(BOOL)a9 sourceItem:(id)a10 withDismissalBlock:(id /* block */)a11 setupCompletionHandler:(id /* block */)a12 didPresentBlock:(id /* block */)a13 allowPopoverToCloseBlock:(id /* block */)a14;
- (id)popoverScene;
- (unsigned long long)preferredEdgeForPermittedArrowDirections:(long long)a0;
- (void)sceneHostingViewControllerDidCreateScene:(id)a0;
- (void)transitionDidEnd:(BOOL)a0;
- (void)updateSourceRectInParentUIWindow:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contentSize:(struct CGSize { double x0; double x1; })a1 preferredHorizontalAlignment:(long long)a2 showsArrow:(BOOL)a3 isRTL:(BOOL)a4;

@end
