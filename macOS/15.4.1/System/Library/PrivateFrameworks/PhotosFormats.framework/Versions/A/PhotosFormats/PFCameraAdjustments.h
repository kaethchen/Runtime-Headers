@class NSString, AVApplePortraitMetadata;

@interface PFCameraAdjustments : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *effectFilterName;
@property (readonly, copy, nonatomic) NSString *portraitEffectFilterName;
@property (readonly, nonatomic) AVApplePortraitMetadata *portraitMetadata;
@property (readonly, nonatomic, getter=isDepthEnabled) BOOL depthEnabled;
@property (readonly, nonatomic) BOOL isEligibleForCinematicAudioEffectProcessing;
@property (readonly, nonatomic) unsigned long long cinematicVideoRenderingVersion;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (readonly, nonatomic) BOOL hasCrop;
@property (readonly, nonatomic, getter=isSloMoEnabled) BOOL sloMoEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAdjustments:(id)a0;
- (BOOL)canBeRenderedByCapturePipelineWithVideoComplement:(BOOL)a0 deferredIdentifier:(id)a1;
- (id)initWithEffectFilter:(id)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
