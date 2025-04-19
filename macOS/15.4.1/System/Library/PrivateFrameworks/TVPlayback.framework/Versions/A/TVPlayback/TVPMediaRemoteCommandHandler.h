@class NSString, TVPMediaRemoteCommandProxyTarget, MPRemoteCommandCenter;
@protocol TVPMediaRemoteCommandHandlerDelegate, TVPPlayback;

@interface TVPMediaRemoteCommandHandler : NSObject <TVPMediaRemoteCommandHandling> {
    struct { unsigned char respondsToRepeatEnabledForCurrentMediaItem : 1; unsigned char respondsToShuffleEnabledForCurrentMediaItem : 1; unsigned char respondsToSkipEnabledForCurrentMediaItem : 1; } _delegateFlags;
}

@property (retain, nonatomic) TVPMediaRemoteCommandProxyTarget *remoteCommandTarget;
@property (weak, nonatomic) id<TVPPlayback> player;
@property (weak, nonatomic) id<TVPMediaRemoteCommandHandlerDelegate> delegate;
@property (nonatomic, getter=isRespondingToRemoteControlEvents) BOOL respondingToRemoteControlEvents;
@property (retain, nonatomic) MPRemoteCommandCenter *remoteCommandCenter;
@property (nonatomic) BOOL repeatEnabled;
@property (nonatomic) BOOL shuffleEnabled;
@property (nonatomic) BOOL skipEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (long long)_handleChangeRepeatModeCommand:(id)a0;
- (id)_allAudioMediaTypes;
- (void)_currentMediaItemDidChange:(id)a0;
- (long long)_handleAdvanceRepeatModeCommand:(id)a0;
- (long long)_handleAdvanceShuffleModeCommand:(id)a0;
- (long long)_handleChangePlaybackPositionCommand:(id)a0;
- (long long)_handleChangePlaybackRateCommand:(id)a0;
- (long long)_handleChangeShuffleModeCommand:(id)a0;
- (long long)_handleDisableAudibleLanguageOptionCommand;
- (long long)_handleDisableLanguageOptionCommand:(id)a0;
- (long long)_handleDisableLegibleLanguageOptionCommand;
- (long long)_handleEnableLanguageOptionCommand:(id)a0;
- (long long)_handleEnableLanguageOptionCommandWithAudibleOption:(id)a0;
- (long long)_handleEnableLanguageOptionCommandWithLegibleOption:(id)a0;
- (long long)_handleNextTrackCommand:(id)a0;
- (long long)_handlePauseCommand:(id)a0;
- (long long)_handlePlayCommand:(id)a0;
- (long long)_handlePlayItemInQueueCommand:(id)a0;
- (long long)_handlePreviousTrackCommand:(id)a0;
- (long long)_handleRemoveFromPlaybackQueueCommand:(id)a0;
- (long long)_handleReorderQueueCommand:(id)a0;
- (long long)_handleSeekBackwardCommand:(id)a0;
- (long long)_handleSeekForwardCommand:(id)a0;
- (long long)_handleSkipBackwardCommand:(id)a0;
- (long long)_handleSkipForwardCommand:(id)a0;
- (long long)_handleSpecialSeekBackwardCommand:(id)a0;
- (long long)_handleSpecialSeekForwardCommand:(id)a0;
- (long long)_handleStopCommand:(id)a0;
- (long long)_handleTogglePlayPauseCommand:(id)a0;
- (id)_initWithRemoteCommandCenter:(id)a0;
- (long long)_processPlayQueueCommandWithBlock:(id /* block */)a0;
- (void)_registerPlayerNotifications;
- (void)_registerPrivateCommands;
- (void)_registerPublicCommands;
- (long long)_selectDefaultAudioOption;
- (void)_startRespondingToRemoteControlEvents;
- (long long)_statusByAdvancingInDirection:(long long)a0;
- (void)_stopRespondingToRemoteControlEvents;
- (void)_unregisterPlayerNotifications;
- (void)_unregisterPrivateCommands;
- (void)_unregisterPublicCommands;
- (void)_updateSupportedCommandsForPlayer:(id)a0;

@end
