@class NSColor, NSImage;

@interface NSLevelIndicator : NSControl

@property unsigned long long levelIndicatorStyle;
@property (getter=isEditable) BOOL editable;
@property double minValue;
@property double maxValue;
@property double warningValue;
@property double criticalValue;
@property unsigned long long tickMarkPosition;
@property long long numberOfTickMarks;
@property long long numberOfMajorTickMarks;
@property (copy) NSColor *fillColor;
@property (copy) NSColor *warningFillColor;
@property (copy) NSColor *criticalFillColor;
@property BOOL drawsTieredCapacityLevels;
@property long long placeholderVisibility;
@property (retain) NSImage *ratingImage;
@property (retain) NSImage *ratingPlaceholderImage;

+ (void)initialize;
+ (id)defaultAnimationForKey:(id)a0;

- (id)customFillColor;
- (void)setAlwaysDrawRatingPlaceholder:(BOOL)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (BOOL)alwaysDrawRatingPlaceholder;
- (id)customCriticalFillColor;
- (id)customWarningFillColor;
- (double)firstBaselineOffsetFromTop;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)isFlipped;
- (id)ns_widgetType;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectOfTickMarkAtIndex:(long long)a0;
- (void)setCustomCriticalFillColor:(id)a0;
- (void)setCustomFillColor:(id)a0;
- (void)setCustomWarningFillColor:(id)a0;
- (void)sizeToFit;
- (double)tickMarkValueAtIndex:(long long)a0;

@end
