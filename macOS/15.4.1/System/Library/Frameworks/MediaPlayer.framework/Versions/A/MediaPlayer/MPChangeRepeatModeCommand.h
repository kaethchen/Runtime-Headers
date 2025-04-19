@class NSArray;

@interface MPChangeRepeatModeCommand : MPRemoteCommand {
    NSArray *_supportedRepeatTypes;
}

@property (nonatomic) long long currentRepeatType;

- (void).cxx_destruct;
- (id)_mediaRemoteCommandInfoOptions;
- (id)newCommandEventWithType:(long long)a0;
- (id)newCommandEventWithType:(long long)a0 preservesRepeatMode:(BOOL)a1;
- (void)setSupportedRepeatTypes:(id)a0;

@end
