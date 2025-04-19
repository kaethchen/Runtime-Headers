@class PXUpdater, NSImage, PXPhotosGridAddButtonViewUserData, NSButton;

@interface PXPhotosGridAddButtonView : UXView <PXGReusableView> {
    NSButton *_button;
    PXUpdater *_updater;
}

@property (readonly, nonatomic) id /* block */ actionHandler;
@property (retain, nonatomic) NSImage *buttonImage;
@property (copy, nonatomic) PXPhotosGridAddButtonViewUserData *userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (readonly, nonatomic) BOOL canUnloadWhenInvisible;
@property (readonly, nonatomic) BOOL isFloating;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)_handleButton:(id)a0;
- (void)_setNeedsUpdate;
- (void)_updateButtonImage;
- (void)becomeReusable;
- (void)_updateBackgroundProperties;

@end
