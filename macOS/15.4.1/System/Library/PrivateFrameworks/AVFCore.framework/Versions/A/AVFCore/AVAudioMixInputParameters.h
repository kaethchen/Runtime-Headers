@class NSString, AVAudioMixInputParametersInternal;

@interface AVAudioMixInputParameters : NSObject <NSCopying, NSMutableCopying> {
    AVAudioMixInputParametersInternal *_inputParameters;
}

@property (readonly, nonatomic) int trackID;
@property (readonly, copy, nonatomic) NSString *audioTimePitchAlgorithm;
@property (readonly, retain, nonatomic) struct opaqueMTAudioProcessingTap { } *audioTapProcessor;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)addEffect:(id)a0;
- (void)removeEffect:(id)a0;
- (id)effects;
- (id)_figAudioCurves;
- (id)_audioVolumeCurve;
- (id)_figProcessingEffectsScheduledParameters;
- (id)_scheduledAudioParameters;
- (void)_setScheduledAudioParameters:(id)a0;
- (void)_setVolume:(float)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)_setVolumeRampFromStartVolume:(float)a0 toEndVolume:(float)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 rampMode:(long long)a3;
- (id)_volumeCurveAsString;
- (void)checkEffectPrecondition:(id)a0;
- (void)checkEffectsPrecondition:(id)a0;
- (id)effectParameters;
- (BOOL)getAmbienceLevelRampForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 startValue:(float *)a1 endValue:(float *)a2 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a3;
- (BOOL)getAmbienceLoudnessRampForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 startValue:(float *)a1 endValue:(float *)a2 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a3;
- (BOOL)getDialogLevelRampForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 startValue:(float *)a1 endValue:(float *)a2 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a3;
- (BOOL)getDialogLoudnessRampForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 startValue:(float *)a1 endValue:(float *)a2 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a3;
- (BOOL)getDialogMixBiasRampForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 startValue:(float *)a1 endValue:(float *)a2 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a3;
- (BOOL)getRecordingLoudnessRampForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 startValue:(float *)a1 endValue:(float *)a2 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a3;
- (BOOL)getRenderingStyleRampForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 startValue:(float *)a1 endValue:(float *)a2 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a3;
- (BOOL)getVolumeRampForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 startVolume:(float *)a1 endVolume:(float *)a2 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a3;
- (BOOL)getVolumeRampForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 startVolume:(float *)a1 endVolume:(float *)a2 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a3 rampMode:(long long *)a4;
- (void)removeAllEffectParameters;
- (void)setAmbienceLevel:(float)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)setAmbienceLoudness:(float)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)setAudioTapProcessor:(struct opaqueMTAudioProcessingTap { } *)a0;
- (void)setAudioTimePitchAlgorithm:(id)a0;
- (void)setDialogLevel:(float)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)setDialogLoudness:(float)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)setDialogMixBias:(float)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)setEffectParameters:(id)a0;
- (void)setRecordingLoudness:(float)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)setRenderingStyle:(float)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)setTrackID:(int)a0;
- (void)setVolume:(float)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)setVolumeRampFromStartVolume:(float)a0 toEndVolume:(float)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2;
- (void)setVolumeRampFromStartVolume:(float)a0 toEndVolume:(float)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 rampMode:(long long)a3;

@end
