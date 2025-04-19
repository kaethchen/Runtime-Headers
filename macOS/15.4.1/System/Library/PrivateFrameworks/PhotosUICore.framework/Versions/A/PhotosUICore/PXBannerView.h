@class PXBannerViewConfiguration;
@protocol PXBannerViewDelegate;

@interface PXBannerView : UXView

@property (readonly) struct NSEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (copy, nonatomic) PXBannerViewConfiguration *configuration;
@property (weak, nonatomic) id<PXBannerViewDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_reloadViews;
- (void)_handleCancelButton:(id)a0;
- (id)_createActionButton;
- (id)_createCancelButton;
- (void)_handleContinueButton:(id)a0;
- (id)_labelWithSubtitle:(id)a0;
- (id)_labelWithTitle:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 padding:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a1;

@end
