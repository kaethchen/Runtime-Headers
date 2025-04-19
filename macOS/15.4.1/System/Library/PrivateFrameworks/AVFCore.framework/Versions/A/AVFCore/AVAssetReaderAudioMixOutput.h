@class NSArray, NSDictionary, NSString, AVAudioMix, AVAssetReaderAudioMixOutputInternal;

@interface AVAssetReaderAudioMixOutput : AVAssetReaderOutput {
    AVAssetReaderAudioMixOutputInternal *_audioMixOutputInternal;
}

@property (readonly, nonatomic) NSArray *audioTracks;
@property (readonly, nonatomic) NSDictionary *audioSettings;
@property (copy, nonatomic) AVAudioMix *audioMix;
@property (copy, nonatomic) NSString *audioTimePitchAlgorithm;

+ (id)assetReaderAudioMixOutputWithAudioTracks:(id)a0 audioSettings:(id)a1;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)mediaType;
- (id)_asset;
- (void)_setAudioTapProcessor:(struct opaqueMTAudioProcessingTap { } *)a0 forTrack:(id)a1;
- (id)_audioCurvesForTrack:(id)a0;
- (id)_audioEffectsParametersForTrack:(id)a0;
- (struct opaqueMTAudioProcessingTap { } *)_audioTapProcessorForTrack:(id)a0;
- (id)_audioTimePitchAlgorithmForTrack:(id)a0;
- (BOOL)_enableTrackExtractionReturningError:(id *)a0;
- (void)_setAudioCurves:(id)a0 forTrack:(id)a1;
- (void)_setAudioEffectsParameters:(id)a0 forTrack:(id)a1;
- (void)_setAudioTimePitchAlgorithm:(id)a0 forTrack:(id)a1;
- (id)initWithAudioTracks:(id)a0 audioSettings:(id)a1;

@end
