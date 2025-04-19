@class NSDictionary;

@interface NSWidgetView : NSView {
    NSDictionary *_widgetDefinition;
}

@property (readonly) NSDictionary *baseWidgetKeys;
@property (copy) NSDictionary *widgetDefinition;
@property (copy) NSDictionary *maskWidgetDefinition;
@property (readonly) struct CGSize { double x0; double x1; } widgetSize;
@property (readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } contentInsets;
@property (readonly) double baselineOffsetFromBottom;
@property (readonly) unsigned long long scalableAxes;

+ (id)keyPathsForValuesInvalidatingDisplay;
+ (id)keyPathsForValuesInvalidatingIntrinsicContentSize;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (struct { double x0; double x1; })_baselineOffsetsAtSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (id)_queryWidgetMetrics:(id)a0;
- (int)_vibrancyBlendMode;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (BOOL)allowsVibrancy;
- (void)drawFocusRingMask;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })focusRingMaskBounds;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (long long)layerContentsRedrawPolicy;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;

@end
