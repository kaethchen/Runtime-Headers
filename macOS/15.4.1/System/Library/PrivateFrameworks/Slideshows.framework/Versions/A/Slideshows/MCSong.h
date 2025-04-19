@class MCSlide, MCAssetAudio, MCAudioPlaylist;

@interface MCSong : MCObject

@property MCAudioPlaylist *audioPlaylistIfAudioPlaylistSong;
@property MCSlide *slideIfSlideSong;
@property (retain) MCAssetAudio *asset;
@property (nonatomic) float volume;
@property (nonatomic) double fadeInDuration;
@property (nonatomic) double fadeOutDuration;
@property (nonatomic) unsigned long long index;
@property (readonly, nonatomic) BOOL startTimeIsDefined;
@property (nonatomic) double startTime;
@property (readonly, nonatomic) BOOL durationIsDefined;
@property (nonatomic) double duration;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (id)init;
- (id)xmlElement;
- (id)imprint;
- (void)_copySelfToSnapshot:(id)a0;
- (void)demolish;
- (id)initWithImprint:(id)a0 andMontage:(id)a1;
- (void)undefineDuration;
- (void)undefineStartTime;

@end
