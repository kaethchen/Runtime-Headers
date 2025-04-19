@class NSLayoutXAxisAnchor, NSImage, NSLayoutConstraint, NSColor;

@interface AMPScrubber : AMPBasicSlider

@property (nonatomic) double _loadedMinValue;
@property (nonatomic) double _loadedMaxValue;
@property (nonatomic) double _notedPositionValue;
@property (copy, nonatomic) NSColor *_notedPositionColor;
@property (retain, nonatomic) NSLayoutXAxisAnchor *knobAnchor;
@property (retain, nonatomic) NSLayoutConstraint *knobAnchorConstraint;
@property (nonatomic) BOOL _blockDisplayForReal;
@property (nonatomic) BOOL _needsDisplayWhenUnblocked;
@property (nonatomic) double loadedMinValue;
@property (nonatomic) double loadedMaxValue;
@property (retain, nonatomic) NSColor *loadedFillColor;
@property (nonatomic) double notedPositionValue;
@property (retain, nonatomic) NSColor *notedPositionColor;
@property (nonatomic) BOOL showKnob;
@property (retain, nonatomic) NSImage *knobImage;
@property (nonatomic) BOOL blockDisplay;

+ (void)initialize;
+ (Class)cellClass;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setNilValueForKey:(id)a0;
- (void)setMaxValue:(double)a0;
- (void)setMinValue:(double)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)setNeedsDisplay:(BOOL)a0;
- (void)updateCell:(id)a0;
- (Class)valueClassForBinding:(id)a0;
- (id)propertyKeysForViewSpy;
- (void)updateKnobAnchor;

@end
