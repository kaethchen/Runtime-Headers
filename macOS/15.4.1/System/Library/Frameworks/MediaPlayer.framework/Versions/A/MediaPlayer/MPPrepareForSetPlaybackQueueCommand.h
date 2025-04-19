@class NSDictionary;

@interface MPPrepareForSetPlaybackQueueCommand : MPRemoteCommand {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (copy, nonatomic) NSDictionary *proactiveCommandOptions;

- (void).cxx_destruct;
- (id)initWithMediaRemoteCommandType:(unsigned int)a0;
- (id)_mediaRemoteCommandInfoOptions;

@end
