@class NSData;

@interface AVAudioMixCinematicAudioEffect : AVAudioMixEffect {
    NSData *_data;
}

@property (readonly, nonatomic) NSData *data;

+ (id)cinematicAudioEffectWithData:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithData:(id)a0;

@end
