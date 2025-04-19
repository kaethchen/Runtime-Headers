@class NSButton, VUINoClickThroughView, NSView;

@interface VUIFormSheetPresentationView : VUINoClickThroughView

@property (retain, nonatomic) VUINoClickThroughView *contentContainerView;
@property (retain, nonatomic) NSButton *dismissButton;
@property (retain, nonatomic) NSView *contentView;
@property (nonatomic) struct CGSize { double width; double height; } preferredContentSize;
@property (copy, nonatomic) id /* block */ dismissAction;
@property (nonatomic) BOOL shouldDismissOnTap;

- (void).cxx_destruct;
- (void)layout;
- (void)cancelOperation:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)updateLayer;
- (void)_dismissPresentationViewIfNeeded;
- (void)didDismissButtonPress;

@end
