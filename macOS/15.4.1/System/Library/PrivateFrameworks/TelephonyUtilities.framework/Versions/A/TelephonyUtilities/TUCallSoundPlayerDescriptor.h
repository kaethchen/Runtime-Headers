@class NSSound;

@interface TUCallSoundPlayerDescriptor : NSObject

@property (nonatomic) long long soundType;
@property (nonatomic) BOOL audioPlayingWarmupNeeded;
@property (retain, nonatomic) NSSound *sound;
@property (nonatomic) unsigned long long iterations;
@property (nonatomic) double pauseDuration;

- (id)description;
- (void).cxx_destruct;
- (id)initWithSoundType:(long long)a0 call:(id)a1;
- (id)initWithSoundType:(long long)a0 provider:(id)a1 video:(BOOL)a2 region:(long long)a3;
- (id)initWithSoundType:(long long)a0 provider:(id)a1 video:(BOOL)a2 region:(long long)a3 audioPlayingWarmupNeeded:(BOOL)a4;
- (id)initWithSoundType:(long long)a0 sound:(id)a1 iterations:(unsigned long long)a2 pauseDuration:(double)a3 audioPlayingWarmupNeeded:(BOOL)a4;

@end
