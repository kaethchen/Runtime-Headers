@class NSString, AVAudioPlayer;
@protocol IMAssistantAudioPlayerDelegate;

@interface IMAssistantAudioPlayer : NSObject <AVAudioPlayerDelegate> {
    id<IMAssistantAudioPlayerDelegate> _delegate;
    AVAudioPlayer *_player;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)audioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;
- (long long)playerState;
- (void)stopPlaying;
- (BOOL)setupAudioSession;
- (void)cleanupAudioSession;
- (id)initWithDelegate:(id)a0 identifier:(id)a1;
- (BOOL)startPlayingAudioURL:(id)a0;

@end
