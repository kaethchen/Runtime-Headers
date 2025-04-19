@class NSArray;

@interface PFSlowMotionUtilities : NSObject

@property (class, readonly, nonatomic) int preferredTimeScale;
@property (class, readonly, nonatomic) NSArray *slowMotionSourceAssetPropertyKeys;

+ (id)sharedConfiguration;
+ (id)timeRangeMapperForSourceDuration:(double)a0 slowMotionRate:(float)a1 slowMotionTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 forExport:(BOOL)a3;
+ (id)assetFromVideoAsset:(id)a0 slowMotionRate:(float)a1 slowMotionTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 forExport:(BOOL)a3 outAudioMix:(id *)a4 outTimeRangeMapper:(id *)a5;
+ (void)_applyPreferredTransformFromAsset:(struct OpaqueAVCFAsset { } *)a0 toComposition:(struct OpaqueAVCFAsset { } *)a1;
+ (struct OpaqueAVCFAudioMix { } *)_createAVCFAudioMixForScaledComposition:(struct OpaqueAVCFAsset { } *)a0 timeRangeMapper:(id)a1 allocator:(struct __CFAllocator { } *)a2;
+ (struct OpaqueAVCFAudioMixInputParameters { } *)_createInputParametersForSlowMotionRegionsInTrack:(struct OpaqueAVCFAssetTrack { } *)a0 timeRangeMapper:(id)a1 volume:(float)a2 allocator:(struct __CFAllocator { } *)a3;
+ (struct OpaqueAVCFAsset { } *)_createScaledAVCFCompositionForAsset:(struct OpaqueAVCFAsset { } *)a0 slowMotionRate:(float)a1 slowMotionTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 forExport:(BOOL)a3 allocator:(struct __CFAllocator { } *)a4 outTimeRangeMapper:(id *)a5 outError:(struct __CFError **)a6;
+ (BOOL)_isValidSlowMotionRate:(float)a0;
+ (BOOL)_isValidSlowMotionTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
+ (BOOL)_scaleComposition:(id)a0 compositionCF:(struct OpaqueAVCFAsset { } *)a1 baseDuration:(double)a2 slowMotionRate:(float)a3 slowMotionRegions:(id)a4 forExport:(BOOL)a5 outTimeRangeMapper:(id *)a6;
+ (double)_scaleWithinComposition:(id)a0 compositionCF:(struct OpaqueAVCFAsset { } *)a1 fromCursor:(double)a2 timeStep:(double)a3 rate:(float)a4 timeRangeMapper:(id)a5;
+ (id)_scaledCompositionForAsset:(id)a0 slowMotionRate:(float)a1 slowMotionTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 forExport:(BOOL)a3 outTimeRangeMapper:(id *)a4;
+ (id)_setVolume:(float)a0 forSlowMotionRegionsInTrack:(id)a1 timeRangeMapper:(id)a2;
+ (id)_slowMotionRegionsFromSlowMotionTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
+ (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })_timeRangeFromTime:(float)a0 toTime:(float)a1;
+ (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })adjustTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 forNewStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 endTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
+ (id)audioMixForScaledComposition:(id)a0 timeRangeMapper:(id)a1;
+ (void)configureExportSession:(id)a0 forcePreciseConversion:(BOOL)a1;
+ (id)exportPresetForAsset:(id)a0 preferredPreset:(id)a1;
+ (BOOL)scaleAVCFAsset:(struct OpaqueAVCFAsset { } *)a0 slowMotionRate:(float)a1 slowMotionTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 forExport:(BOOL)a3 allocator:(struct __CFAllocator { } *)a4 outComposition:(struct OpaqueAVCFAsset **)a5 outAudioMix:(struct OpaqueAVCFAudioMix **)a6 outError:(struct __CFError **)a7;

@end
