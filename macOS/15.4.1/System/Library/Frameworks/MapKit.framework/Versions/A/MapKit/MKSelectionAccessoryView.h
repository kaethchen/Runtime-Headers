@class NSButton;
@protocol MKPlaceCardContentSizeDelegate, MKSelectionAccessoryViewDelegate;

@interface MKSelectionAccessoryView : NSView {
    NSButton *_dismissButton;
}

@property (weak, nonatomic) id<MKPlaceCardContentSizeDelegate> placeCardContentSizeDelegate;
@property (weak, nonatomic) id<MKSelectionAccessoryViewDelegate> delegate;

+ (id)_imageConfigurationWithXColor:(id)a0 circleColor:(id)a1;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)displayMapItem:(id)a0;
- (void)_activateDismissButtonConstraints;
- (void)_bringDismissButtonToFront;
- (void)_createDismissButtonIfNeeded;
- (void)_requestDismissal;
- (void)_updateDismissButtonVisibility;
- (void)displayError;
- (void)displayLoading;

@end
