@class NSString, SCROutputAction;
@protocol SCROutputSoundCallbackProtocol;

@interface SCRMusicSequenceSound : NSObject <SCROutputSoundProtocol>

@property (readonly, nonatomic) struct OpaqueMusicPlayer { } *player;
@property (readonly, nonatomic) struct OpaqueMusicSequence { } *sequence;
@property (retain, nonatomic) id owner;
@property (retain, nonatomic) SCROutputAction *action;
@property (retain, nonatomic) NSString *category;
@property (nonatomic) int busID;
@property (nonatomic) float volume;
@property (readonly, nonatomic) double audioDuration;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (weak, nonatomic) id<SCROutputSoundCallbackProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)stop;
- (BOOL)play;
- (BOOL)stopImmediately;
- (id)initWithMusicSequence:(struct OpaqueMusicSequence { } *)a0;

@end
