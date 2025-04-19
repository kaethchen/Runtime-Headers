@class AVCaptureAudioChannelInternal_Tundra;

@interface AVCaptureAudioChannel_Tundra : NSObject {
    AVCaptureAudioChannelInternal_Tundra *_internal;
}

@property (readonly, nonatomic) float averagePowerLevel;
@property (readonly, nonatomic) float peakHoldLevel;
@property (nonatomic) float volume;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (void)dealloc;
- (id)initWithConnection:(id)a0;
- (void)invalidate;

@end
