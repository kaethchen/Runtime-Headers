@class NSArray, NSDictionary;

@interface MPCDebugCommand : MPRemoteCommand

@property (copy, nonatomic) NSArray *supportedSubsystems;
@property (copy, nonatomic) NSDictionary *subsystemRevisions;

- (void).cxx_destruct;
- (id)initWithMediaRemoteCommandType:(unsigned int)a0;
- (id)_mediaRemoteCommandInfoOptions;

@end
