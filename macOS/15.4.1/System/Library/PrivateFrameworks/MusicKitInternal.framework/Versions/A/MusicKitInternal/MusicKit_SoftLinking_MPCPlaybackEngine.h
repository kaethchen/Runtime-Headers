@class NSString, MPCPlaybackEngine;

@interface MusicKit_SoftLinking_MPCPlaybackEngine : NSObject {
    MPCPlaybackEngine *_underlyingPlaybackEngine;
}

@property (readonly, copy, nonatomic) NSString *playerID;
@property (readonly, nonatomic, getter=isStarted) BOOL started;
@property (nonatomic, getter=isSystemMusicApplication, setter=musicKit_setSystemMusicApplication:) BOOL systemMusicApplication;
@property (nonatomic, getter=isAudioAnalyzerEnabled, setter=musicKit_setAudioAnalyzerEnabled:) BOOL audioAnalyzerEnabled;
@property (nonatomic, getter=isPictureInPictureSupported, setter=musicKit_setPictureInPictureSupported:) BOOL pictureInPictureSupported;
@property (nonatomic, getter=isVideoSupported, setter=musicKit_setVideoSupported:) BOOL videoSupported;
@property (nonatomic, getter=isStateRestorationSupported, setter=musicKit_setStateRestorationSupported:) BOOL stateRestorationSupported;

- (void).cxx_destruct;
- (void)start;
- (void)becomeActive;
- (void)restoreStateWithCompletion:(id /* block */)a0;
- (void)setAudioAnalyzerEnabled:(BOOL)a0;
- (void)setPictureInPictureSupported:(BOOL)a0;
- (void)setStateRestorationSupported:(BOOL)a0;
- (void)setSystemMusicApplication:(BOOL)a0;
- (void)setVideoSupported:(BOOL)a0;
- (id)initWithPlayerID:(id)a0 options:(unsigned long long)a1 fallbackPlaybackIntent:(id)a2;

@end
