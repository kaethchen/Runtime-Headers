@class NSImageView, CalUILayerBackedView, NSDictionary, DottedLineView, NSLayoutConstraint, CalUIAXTextField;

@interface CalUIBoxOccurrenceTravelTimeView : CalUILayerBackedView

@property (retain) NSImageView *icon;
@property (retain) CalUIAXTextField *text;
@property (retain) CalUILayerBackedView *divider;
@property (retain) NSDictionary *attributes;
@property (retain) NSLayoutConstraint *iconTextAlignmentConstraint;
@property (retain) NSLayoutConstraint *iconWidthConstraint;
@property (retain) DottedLineView *colorBar;

- (id)init;
- (void).cxx_destruct;
- (void)layout;
- (void)setFont:(id)a0;
- (void)setStringAttributes:(id)a0;
- (void)setTravelDuration:(double)a0;
- (id)_imageForRouteType:(id)a0;
- (void)setDividerColor:(id)a0 backgroundColor:(id)a1 stripeColor:(id)a2;
- (void)setTravelType:(id)a0;
- (void)updateText;

@end
