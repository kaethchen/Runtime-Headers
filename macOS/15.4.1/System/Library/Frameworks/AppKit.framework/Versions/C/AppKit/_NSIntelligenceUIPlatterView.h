@class NSView;

@interface _NSIntelligenceUIPlatterView : NSView {
    void /* unknown type, empty encoding */ _bordered;
    void /* unknown type, empty encoding */ interiorLightView;
    void /* unknown type, empty encoding */ exteriorLightView;
    void /* unknown type, empty encoding */ latencyLightView;
    void /* unknown type, empty encoding */ fresnelView;
    void /* unknown type, empty encoding */ _contentView;
    void /* unknown type, empty encoding */ shimmerViews;
}

@property (nonatomic) void /* unknown type, empty encoding */ hasInteriorLight;
@property (nonatomic) void /* unknown type, empty encoding */ hasExteriorLight;
@property (nonatomic) void /* unknown type, empty encoding */ indicatesIndeterminateProgress;
@property (nonatomic, retain) NSView *contentView;
@property (nonatomic) double cornerRadius;
@property (nonatomic) void /* unknown type, empty encoding */ usesAudioLevels;
@property (nonatomic) void /* unknown type, empty encoding */ audioLevel;
@property (nonatomic) BOOL clipsToBounds;
@property (nonatomic) void /* unknown type, empty encoding */ _interiorLightFraction;
@property (nonatomic) void /* unknown type, empty encoding */ _exteriorLightFraction;
@property (nonatomic) void /* unknown type, empty encoding */ _borderFraction;
@property (nonatomic) void /* unknown type, empty encoding */ _indeterminateIndicatorFraction;

+ (id)defaultAnimationForKey:(id)a0;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)shimmer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isBordered;
- (void)setBordered:(BOOL)a0;
- (void)shimmerFromEdge:(unsigned long long)a0;
- (void)shimmerFromPoint:(struct CGPoint { double x0; double x1; })a0;

@end
