@class NSArray;

@interface MPChangePlaybackRateCommand : MPRemoteCommand {
    float _preferredRate;
}

@property (copy, nonatomic) NSArray *supportedPlaybackRates;

- (void).cxx_destruct;
- (float)preferredRate;
- (void)setPreferredRate:(float)a0;
- (id)_mediaRemoteCommandInfoOptions;
- (id)newCommandEventWithPlaybackRate:(float)a0;

@end
