@interface IMAVManagerImpl : IMAVManager

+ (id)sharedAVManager;

- (unsigned long long)state;
- (void)start;
- (void)setNilValueForKey:(id)a0;
- (void)stop;
- (long long)numberOfAudioChannels;
- (id)URLToShare;
- (unsigned long long)_effectiveState;
- (void)_IMVideoDataSourceNeedsUpdate;
- (id)_buildProviderForReceiver:(id)a0;
- (void)_changeStateIfAppropriate;
- (id)videoDataSource;
- (void)_daemonDidConnect:(id)a0;
- (BOOL)_fillBuffer:(struct __CVBuffer { } *)a0;
- (unsigned long long)_filteredOptimizationOptions;
- (id)_iPhotoAlbumIDToShare;
- (unsigned int)_pixelFormat;
- (void)_provideAudioOnDeviceUID:(id)a0 channels:(id)a1;
- (void)_setAVManagerRequested:(BOOL)a0 URLToShare:(id)a1;
- (void)_setAudioDeviceUID:(id)a0 channels:(id)a1;
- (void)_startListeningForIMDaemonListenerNotifications;
- (void)_suspendVideo:(BOOL)a0;
- (void)_updateControlBarFromDictionaryRepresentation:(id)a0;
- (void)_videoProviderChangedState:(id)a0;
- (id)audioDeviceChannels;
- (id)audioDeviceUID;
- (id)controlBar;
- (void)setNumberOfAudioChannels:(long long)a0;
- (void)setVideoDataSource:(id)a0;
- (void)setVideoOptimizationOptions:(unsigned long long)a0;
- (unsigned long long)videoOptimizationOptions;

@end
