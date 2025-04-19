@class AVTouchBarPlaybackControlsProvider, AVPlaybackSpeedCollection, NSString, NSTouchBar, AVPlayerController;

@interface AVTouchBarMacHelper : NSObject <AVTouchBarMacHelper>

@property (readonly, nonatomic) AVTouchBarPlaybackControlsProvider *touchBarProvider;
@property (readonly, nonatomic) AVTouchBarPlaybackControlsProvider *touchBarProviderIfLoaded;
@property (retain, nonatomic) AVPlayerController *playerController;
@property (retain, nonatomic) AVPlaybackSpeedCollection *playbackSpeedCollection;
@property (retain) NSTouchBar *touchBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidate;
- (id)makeTouchBar;

@end
