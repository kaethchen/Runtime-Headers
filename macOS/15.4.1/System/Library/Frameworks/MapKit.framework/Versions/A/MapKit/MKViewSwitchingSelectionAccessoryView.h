@class NSString, NSViewController, NSView, MKMapItem;

@interface MKViewSwitchingSelectionAccessoryView : MKSelectionAccessoryView <MKPlaceCardContentSizeDelegate> {
    MKMapItem *_mapItem;
    BOOL _error;
    NSViewController *_viewController;
    NSView *_view;
}

@property (weak, nonatomic) NSViewController *parentViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)displayMapItem:(id)a0;
- (id)_createErrorView;
- (id)_createLoadingView;
- (id)_createMapItemViewController:(id)a0;
- (void)_displayView:(id)a0;
- (void)_displayViewController:(id)a0;
- (void)_updateDisplay;
- (void)displayError;
- (void)displayLoading;
- (void)placeCardPreferredContentSizeDidChange:(struct CGSize { double x0; double x1; })a0;

@end
