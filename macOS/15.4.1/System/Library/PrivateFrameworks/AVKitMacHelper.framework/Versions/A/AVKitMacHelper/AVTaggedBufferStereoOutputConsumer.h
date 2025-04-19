@class AVPlayerVideoOutput, NSString, AVPlayerVideoOutputConfiguration, AVSampleBufferDisplayLayer, AVPlayer;

@interface AVTaggedBufferStereoOutputConsumer : NSObject <AVStereoLayerConsumer> {
    struct __CVDisplayLink { } *_displayLink;
    AVSampleBufferDisplayLayer *_leftLayer;
    AVSampleBufferDisplayLayer *_rightLayer;
    AVPlayerVideoOutput *_output;
    AVPlayerVideoOutputConfiguration *_lastSeenConfiguration;
}

@property (weak, nonatomic) AVPlayer *player;
@property (readonly, nonatomic) AVSampleBufferDisplayLayer *leftLayer;
@property (readonly, nonatomic) AVSampleBufferDisplayLayer *rightLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)startTaggedStereoOutput;
- (void)stopTaggedStereoOutput;

@end
