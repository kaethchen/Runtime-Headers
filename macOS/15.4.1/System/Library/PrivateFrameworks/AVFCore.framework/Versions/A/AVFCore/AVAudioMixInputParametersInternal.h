@class NSString, NSMutableArray, AVMutableScheduledAudioParameters;

@interface AVAudioMixInputParametersInternal : NSObject {
    int trackID;
    AVMutableScheduledAudioParameters *scheduledAudioParameters;
    NSString *audioTimePitchAlgorithm;
    struct opaqueMTAudioProcessingTap { } *tap;
    NSMutableArray *effects;
}

@end
