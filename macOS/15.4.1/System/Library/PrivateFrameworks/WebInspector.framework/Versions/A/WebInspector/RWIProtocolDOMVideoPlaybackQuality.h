@interface RWIProtocolDOMVideoPlaybackQuality : RWIProtocolJSONObject

@property (nonatomic) int displayCompositedVideoFrames;
@property (nonatomic) int droppedVideoFrames;
@property (nonatomic) int totalVideoFrames;

- (id)initWithDisplayCompositedVideoFrames:(int)a0 droppedVideoFrames:(int)a1 totalVideoFrames:(int)a2;

@end
