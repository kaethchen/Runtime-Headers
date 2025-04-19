@class NSView, VUILabel, NSArray;

@interface VUIFeaturedCellOverlayView : VUIBaseView

@property (retain, nonatomic) NSView *appleTVChannelLogoView;
@property (retain, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) VUILabel *subtitleLabel;
@property (retain, nonatomic) VUILabel *disclaimerLabel;
@property (retain, nonatomic) NSArray *buttons;
@property (nonatomic) BOOL usesDefaultOverlayType;
@property (nonatomic) double primaryButtonMinWidth;
@property (nonatomic) double primaryButtonMaxWidth;
@property (nonatomic) double primaryButtonMinHeight;
@property (nonatomic) double primaryButtonMaxHeight;

- (void).cxx_destruct;
- (void)_layoutSubviews;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
