@protocol AVVolumeControlViewDelegate;

@interface AVVolumeControlView : NSView

@property (weak) id<AVVolumeControlViewDelegate> delegate;
@property (getter=isMuted) BOOL muted;
@property double volume;

- (void).cxx_destruct;

@end
