@class TUNSSoundPlayer;

@interface TUCallSoundPlayer : NSObject

@property (retain, nonatomic) TUNSSoundPlayer *player;
@property (nonatomic) long long currentlyPlayingSoundType;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)attemptToPlaySoundType:(long long)a0 forCall:(id)a1;
- (BOOL)attemptToPlayDescriptor:(id)a0;
- (BOOL)attemptToPlayDescriptor:(id)a0 completion:(id /* block */)a1;
- (BOOL)attemptToPlaySoundType:(long long)a0 forCall:(id)a1 completion:(id /* block */)a2;
- (void)stopPlaying;

@end
