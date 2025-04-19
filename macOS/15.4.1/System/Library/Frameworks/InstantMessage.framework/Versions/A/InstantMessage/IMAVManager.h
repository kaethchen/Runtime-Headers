@interface IMAVManager : NSObject

+ (id)sharedAVManager;
+ (void)_setAVManagerRequested:(BOOL)a0 URLToShare:(id)a1;
+ (id)sharedAVManagerReference;

- (unsigned long long)state;
- (void)start;
- (void)stop;
- (long long)numberOfAudioChannels;
- (id)URLToShare;
- (void)_IMVideoDataSourceNeedsUpdate;
- (id)videoDataSource;
- (BOOL)_fillBuffer:(struct __CVBuffer { } *)a0;
- (id)_iPhotoAlbumIDToShare;
- (void)_provideAudioOnDeviceUID:(id)a0 channels:(id)a1;
- (void)_setAVManagerRequested:(BOOL)a0 URLToShare:(id)a1;
- (void)_startListeningForIMDaemonListenerNotifications;
- (void)_updateControlBarFromDictionaryRepresentation:(id)a0;
- (id)audioDeviceChannels;
- (id)audioDeviceUID;
- (id)controlBar;
- (void)setNumberOfAudioChannels:(long long)a0;
- (void)setVideoDataSource:(id)a0;
- (void)setVideoOptimizationOptions:(unsigned long long)a0;
- (unsigned long long)videoOptimizationOptions;

@end
