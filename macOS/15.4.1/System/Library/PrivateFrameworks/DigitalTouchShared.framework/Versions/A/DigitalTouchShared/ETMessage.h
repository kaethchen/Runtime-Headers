@class NSString, NSMutableSet, NSColor;
@protocol ETMessageTimeSource, ETMessageDelegate;

@interface ETMessage : NSObject {
    NSMutableSet *_childrenDelayingWisp;
}

@property (readonly, nonatomic) unsigned short messageType;
@property (readonly, nonatomic) unsigned long long messageVersion;
@property (nonatomic) double timeCreated;
@property (nonatomic) double sendTime;
@property (nonatomic) double startDelay;
@property (nonatomic) BOOL supportsPlaybackTimeOffset;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL missedDuringPlayback;
@property (readonly, nonatomic) BOOL shouldLoopDuringPlayback;
@property (retain, nonatomic) NSColor *color;
@property (nonatomic, getter=isRenderingOffscreen) BOOL renderingOffscreen;
@property (nonatomic, getter=isRenderingOffscreenOpaque) BOOL renderingOffscreenOpaque;
@property (readonly, nonatomic) double messageDuration;
@property (weak, nonatomic) id<ETMessageDelegate> delegate;
@property (weak, nonatomic) id<ETMessageTimeSource> timeSource;
@property (nonatomic) BOOL delayWisp;
@property (weak, nonatomic) ETMessage *parentMessage;
@property (readonly, nonatomic, getter=isAnimated) BOOL animated;
@property (nonatomic) BOOL mute;

+ (unsigned short)messageType;
+ (id)unarchive:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)archiveData;
- (id)initWithArchiveData:(id)a0;
- (id)archive;
- (void)stopPlaying;
- (BOOL)sendTimeIsValid;
- (void)displayInScene:(id)a0;
- (void)_startAudioPlayback;
- (void)_stopAudioPlayback;
- (void)childMessageDidCompleteWisp:(id)a0;
- (void)childMessageDidDelayWisp:(id)a0;
- (BOOL)hasWispingChildren;
- (id)messageTypeAsString;
- (void)preVisualizeInScene:(id)a0;
- (BOOL)reachedSizeLimit;
- (struct CGPoint { double x0; double x1; })scenePointFromNormalizedPoint:(struct CGPoint { double x0; double x1; })a0 inScene:(id)a1;
- (void)wispChildren;

@end
