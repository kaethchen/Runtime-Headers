@class AVAudioMix, AVComposition;

@interface MEAVComposition : NSObject

@property (readonly, nonatomic) AVComposition *composition;
@property (readonly, nonatomic) AVAudioMix *audioMix;

- (void)dealloc;
- (id)initWithComposition:(id)a0 andAudioMix:(id)a1;

@end
