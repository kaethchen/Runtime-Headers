@interface MPChangePlaybackPositionCommand : MPRemoteCommand

@property (nonatomic) BOOL canBeControlledByScrubbing;
@property (nonatomic) BOOL supportsReferencePosition;

- (id)initWithMediaRemoteCommandType:(unsigned int)a0;
- (id)_mediaRemoteCommandInfoOptions;
- (id)newCommandEventWithPositionTime:(double)a0;

@end
