@class NSNumber, NSData, _TtC3VFX9VFXEffect, NSMutableArray, PTHumanDetections;
@protocol VFXBinding;

@interface PTVFXRenderEffectBinding : NSObject {
    PTHumanDetections *_humanDetections;
    float _forceFadeOutStart;
    NSNumber *_faceDetectionGroupId;
}

@property (retain, nonatomic) _TtC3VFX9VFXEffect *effect;
@property (retain, nonatomic) id<VFXBinding> positionBinding;
@property (retain, nonatomic) id<VFXBinding> headPositionBinding;
@property (retain, nonatomic) id<VFXBinding> backgroundDimmingBinding;
@property (retain, nonatomic) NSMutableArray *opacityBindings;
@property (retain, nonatomic) NSData *opacityValue;
@property BOOL useBackgroundDimming;
@property float duration;
@property (retain, nonatomic) id<VFXBinding> durationBinding;
@property double creationTimeSeconds;
@property unsigned long long effectType;
@property float emitZValue;
@property struct { void /* unknown type, empty encoding */ columns[4]; } inverseCameraProjection;
@property (readonly) float dimmingFactor;
@property (readonly) BOOL active;
@property BOOL useCircularGradient;

+ (void)setRawValue:(id)a0 onBinding:(id)a1;

- (void).cxx_destruct;
- (void)forceFadeOut:(double)a0;
- (id)initWithHumanDetections:(id)a0;
- (void /* unknown type, empty encoding */)screenSpaceToCameraSpace:(SEL)a0 videoRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)singleDetectionGroupId;
- (int)updateBackgroundDimming:(float)a0;
- (int)updateWithEvent:(id)a0 renderRequest:(id)a1 videoRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 time:(double)a3;

@end
