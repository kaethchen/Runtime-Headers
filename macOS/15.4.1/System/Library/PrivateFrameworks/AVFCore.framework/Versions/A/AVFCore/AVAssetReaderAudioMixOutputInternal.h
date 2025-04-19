@class NSArray, NSMutableDictionary, AVAudioOutputSettings, AVAudioMix, NSString;

@interface AVAssetReaderAudioMixOutputInternal : NSObject {
    NSArray *audioTracks;
    AVAudioMix *audioMix;
    NSMutableDictionary *audioCurvesForTracks;
    NSMutableDictionary *audioTimePitchAlgorithmsForTracks;
    NSMutableDictionary *audioTapProcessorsForTracks;
    NSMutableDictionary *audioEffectsParametersForTracks;
    AVAudioOutputSettings *audioOutputSettings;
    NSString *audioTimePitchAlgorithm;
}

@end
