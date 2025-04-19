@class NSView, VUIImageView, NSArray;

@interface VideosUI.CardView : VUIBaseView {
    void /* unknown type, empty encoding */ debugUI;
    void /* unknown type, empty encoding */ cardViewLayout;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ appImageView;
    void /* unknown type, empty encoding */ overlayView;
    void /* unknown type, empty encoding */ labelViews;
    void /* unknown type, empty encoding */ button;
    void /* unknown type, empty encoding */ downloadIndicator;
    void /* unknown type, empty encoding */ attributionView;
    void /* unknown type, empty encoding */ tagsView;
}

@property (nonatomic, readonly) BOOL vuiDebugUI;
@property (nonatomic, readonly) VUIImageView *accessibilityImageView;
@property (nonatomic, readonly) VUIImageView *accessibilityAppImageView;
@property (nonatomic, readonly) NSView *accessibilityOverlayView;
@property (nonatomic, readonly) NSArray *accessibilityLabelViews;
@property (nonatomic, readonly) NSView *accessibilityButton;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mainImageLoadedNotificationHandler;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
