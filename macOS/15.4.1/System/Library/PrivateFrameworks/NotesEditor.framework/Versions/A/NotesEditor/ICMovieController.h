@class AVAsset, AVPlayerView, ICMovieAttachmentView;

@interface ICMovieController : NSObject

@property (class, readonly, nonatomic) ICMovieController *sharedController;

@property (retain, nonatomic) AVAsset *activeAsset;
@property (retain, nonatomic) AVPlayerView *moviePlayerView;
@property (retain, nonatomic) ICMovieAttachmentView *activeMovieAttachmentView;

+ (void)pauseIfPlaying;
+ (void)stopIfPlaying;

- (void)dealloc;
- (void).cxx_destruct;
- (void)play;
- (void)pauseIfPlaying;
- (void)moviePlayerTapped;
- (BOOL)prepareForPlayback;
- (void)stopIfPlaying;
- (void)updatePlayer;

@end
