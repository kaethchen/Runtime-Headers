@class AVAudioMixEffectParametersInternal;

@interface AVAudioMixEffect : NSObject <NSCopying> {
    AVAudioMixEffectParametersInternal *_audioEffect;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
