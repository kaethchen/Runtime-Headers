@class AVAudioPlayerNode, VFXAudioSource, AVAudioNode;

@interface VFXAudioPlayer : NSObject {
    struct __CFXNode { } *_nodeRef;
    BOOL _shouldRecycle;
}

@property (readonly) struct __CFXWorld { } *world;
@property (readonly) BOOL customAudioNode;
@property BOOL completed;
@property (readonly) AVAudioPlayerNode *audioPlayer;
@property (copy, nonatomic) id /* block */ willStartPlayback;
@property (copy, nonatomic) id /* block */ didFinishPlayback;
@property (readonly, nonatomic) AVAudioNode *audioNode;
@property (readonly, nonatomic) VFXAudioSource *audioSource;

+ (id)audioPlayerWithAVAudioNode:(id)a0;
+ (id)audioPlayerWithSource:(id)a0;

- (void)dealloc;
- (void)reset;
- (id)initWithSource:(id)a0;
- (void)play;
- (struct __CFXNode { } *)nodeRef;
- (void *)__CFObject;
- (void)recycle;
- (id)audioBufferFormat;
- (id)initWithAVAudioNode:(id)a0;
- (void)setNodeRef:(struct __CFXNode { } *)a0;

@end
