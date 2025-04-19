@class OKDocument, NSArray, NSString, OKAudioDucker;
@protocol OKAudioPlaylistDelegate;

@interface OKAudioPlaylist : NSObject <AVAudioPlayerDelegate> {
    NSArray *_players;
    BOOL _playing;
    long long _currentPlayerIndex;
    OKAudioDucker *_ducker;
    OKDocument *_document;
}

@property (readonly, nonatomic) NSArray *audioItems;
@property (nonatomic) float volume;
@property (nonatomic) BOOL loops;
@property (nonatomic) id<OKAudioPlaylistDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)stop;
- (void)audioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;
- (void)play;
- (void)warmup;
- (void)rewind;
- (void)_setupPlayers;
- (void)beginDuckingToLevel:(double)a0 fadeDuration:(double)a1;
- (void)beginFadingWithDuration:(double)a0;
- (void)endDucking;
- (void)endFading;
- (id)initWithAudioItems:(id)a0 document:(id)a1;

@end
