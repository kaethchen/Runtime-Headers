@interface NSLinearGradientView : NSView {
    void /* unknown type, empty encoding */ _displayLink;
    void /* unknown type, empty encoding */ _speedApplicationTime;
    void /* unknown type, empty encoding */ _normalizedGradientStartPointXConstraint;
    void /* unknown type, empty encoding */ _normalizedGradientStartPointYConstraint;
    void /* unknown type, empty encoding */ _normalizedGradientEndPointXConstraint;
    void /* unknown type, empty encoding */ _normalizedGradientEndPointYConstraint;
    void /* unknown type, empty encoding */ _observations;
    void /* unknown type, empty encoding */ _effectiveGradientStartPoint;
    void /* unknown type, empty encoding */ _effectiveGradientEndPoint;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ gradient;
@property (nonatomic, retain) void /* unknown type, empty encoding */ gradientStartPoint;
@property (nonatomic, retain) void /* unknown type, empty encoding */ gradientEndPoint;
@property (nonatomic) void /* unknown type, empty encoding */ speed;
@property (nonatomic) void /* unknown type, empty encoding */ offset;
@property (nonatomic) void /* unknown type, empty encoding */ startEdgeMode;
@property (nonatomic) void /* unknown type, empty encoding */ endEdgeMode;
@property (nonatomic) struct CGPoint { double x0; double x1; } normalizedGradientStartPoint;
@property (nonatomic) struct CGPoint { double x0; double x1; } normalizedGradientEndPoint;
@property (nonatomic) void /* unknown type, empty encoding */ normalizedPointHoldingPriority;

+ (id)defaultAnimationForKey:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_setLayoutEngine:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
