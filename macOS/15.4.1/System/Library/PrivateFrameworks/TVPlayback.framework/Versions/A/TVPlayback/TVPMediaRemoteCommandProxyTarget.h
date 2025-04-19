@class NSString;
@protocol TVPMediaRemoteCommandHandling;

@interface TVPMediaRemoteCommandProxyTarget : NSObject <TVPMediaRemoteCommandHandling>

@property (weak, nonatomic) id<TVPMediaRemoteCommandHandling> defaultHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)_handleAction:(SEL)a0 withDefaultSelector:(SEL)a1 forRemoteCommandEvent:(id)a2;
- (long long)_handleChangePlaybackRateCommand:(id)a0;
- (long long)_handleNextTrackCommand:(id)a0;
- (long long)_handlePauseCommand:(id)a0;
- (long long)_handlePlayCommand:(id)a0;
- (long long)_handlePreviousTrackCommand:(id)a0;
- (long long)_handleSeekBackwardCommand:(id)a0;
- (long long)_handleSeekForwardCommand:(id)a0;
- (long long)_handleSkipBackwardCommand:(id)a0;
- (long long)_handleSkipForwardCommand:(id)a0;
- (long long)_handleStopCommand:(id)a0;
- (long long)_handleTogglePlayPauseCommand:(id)a0;

@end
