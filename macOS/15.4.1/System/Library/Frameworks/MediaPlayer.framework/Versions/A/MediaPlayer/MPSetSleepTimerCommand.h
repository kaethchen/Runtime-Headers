@interface MPSetSleepTimerCommand : MPRemoteCommand

@property (nonatomic) double time;
@property (nonatomic) double fireDate;
@property (nonatomic) long long stopMode;

- (id)_mediaRemoteCommandInfoOptions;

@end
