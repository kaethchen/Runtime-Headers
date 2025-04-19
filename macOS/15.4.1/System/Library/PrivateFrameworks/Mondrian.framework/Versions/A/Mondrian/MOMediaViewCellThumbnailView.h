@class NSString;
@protocol MOMediaViewCellThumbnailViewDelegate;

@interface MOMediaViewCellThumbnailView : NSView <NSAccessibilityImage> {
    BOOL _useNearestInterpolation;
    BOOL _useNearestInterpolationHasChanged;
    id _thumbnailImage;
    BOOL _clearThumbnailImage;
    BOOL _changePending;
}

@property (weak, nonatomic) id<MOMediaViewCellThumbnailViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (id)accessibilityRoleDescription;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isOpaque;
- (BOOL)mouseDownCanMoveWindow;
- (id)thumbnailImage;
- (void)updateLayer;
- (void)viewDidChangeEffectiveAppearance;
- (BOOL)wantsUpdateLayer;
- (void)prepareForRecycling;
- (void)setThumbnailImage:(id)a0 usingNearestInterpolation:(BOOL)a1 animated:(BOOL)a2;
- (BOOL)useNearestInterpolation;

@end
