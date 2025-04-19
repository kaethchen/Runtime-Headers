@class AVTouchBarMediaSelectionOption, NSArray, NSString, AVValueTiming, NSURL;

@interface WebPlaybackControlsManager : NSObject <AVTouchBarPlaybackControlsControlling> {
    double _contentDuration;
    struct RetainPtr<AVValueTiming> { void *m_ptr; } _timing;
    struct RetainPtr<NSArray> { void *m_ptr; } _seekableTimeRanges;
    struct RetainPtr<NSArray<AVTouchBarMediaSelectionOption *>> { void *m_ptr; } _audioTouchBarMediaSelectionOptions;
    struct RetainPtr<AVTouchBarMediaSelectionOption> { void *m_ptr; } _currentAudioTouchBarMediaSelectionOption;
    struct RetainPtr<NSArray<AVTouchBarMediaSelectionOption *>> { void *m_ptr; } _legibleTouchBarMediaSelectionOptions;
    struct RetainPtr<AVTouchBarMediaSelectionOption> { void *m_ptr; } _currentLegibleTouchBarMediaSelectionOption;
    struct RefPtr<WebCore::PlaybackSessionInterfaceMac, WTF::RawPtrTraits<WebCore::PlaybackSessionInterfaceMac>, WTF::DefaultRefDerefTraits<WebCore::PlaybackSessionInterfaceMac>> { struct PlaybackSessionInterfaceMac *m_ptr; } _playbackSessionInterfaceMac;
    double _defaultPlaybackRate;
    float _rate;
    BOOL _playing;
    BOOL _canSeek;
}

@property void *playbackSessionInterfaceMac;
@property double contentDuration;
@property (retain, nonatomic) AVValueTiming *timing;
@property (nonatomic) double seekToTime;
@property (retain, nonatomic) NSArray *seekableTimeRanges;
@property (nonatomic) BOOL hasEnabledAudio;
@property (nonatomic) BOOL hasEnabledVideo;
@property (getter=isPlaying) BOOL playing;
@property BOOL canTogglePlayback;
@property double defaultPlaybackRate;
@property (nonatomic) float rate;
@property BOOL allowsPictureInPicturePlayback;
@property (getter=isPictureInPictureActive) BOOL pictureInPictureActive;
@property BOOL canTogglePictureInPicture;
@property (readonly, nonatomic) BOOL canSeek;
@property (readonly, getter=isSeeking) BOOL seeking;
@property (readonly) NSArray *audioTouchBarMediaSelectionOptions;
@property (retain) AVTouchBarMediaSelectionOption *currentAudioTouchBarMediaSelectionOption;
@property (readonly) NSArray *legibleTouchBarMediaSelectionOptions;
@property (retain) AVTouchBarMediaSelectionOption *currentLegibleTouchBarMediaSelectionOption;
@property (readonly) BOOL canBeginTouchBarScrubbing;
@property (readonly) NSURL *assetURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingCanBeginTouchBarScrubbing;
+ (id)keyPathsForValuesAffectingContentDuration;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)seekToTime:(double)a0 toleranceBefore:(double)a1 toleranceAfter:(double)a2;
- (void)beginTouchBarScrubbing;
- (void)cancelThumbnailAndAudioAmplitudeSampleGeneration;
- (void)endTouchBarScrubbing;
- (void)enterInWindow;
- (void)exitInWindow;
- (void)generateTouchBarAudioAmplitudeSamples:(long long)a0 completionHandler:(id /* block */)a1;
- (void)generateTouchBarThumbnailsForTimes:(id)a0 tolerance:(double)a1 size:(struct CGSize { double x0; double x1; })a2 thumbnailHandler:(id /* block */)a3;
- (void)setAudioMediaSelectionIndex:(unsigned long long)a0;
- (void)setAudioMediaSelectionOptions:(const void *)a0 withSelectedIndex:(unsigned long long)a1;
- (void)setAudioTouchBarMediaSelectionOptions:(id)a0;
- (void)setCanSeek:(BOOL)a0;
- (void)setDefaultPlaybackRate:(double)a0 fromJavaScript:(BOOL)a1;
- (void)setLegibleMediaSelectionIndex:(unsigned long long)a0;
- (void)setLegibleMediaSelectionOptions:(const void *)a0 withSelectedIndex:(unsigned long long)a1;
- (void)setLegibleTouchBarMediaSelectionOptions:(id)a0;
- (void)setRate:(double)a0 fromJavaScript:(BOOL)a1;
- (void)togglePictureInPicture;
- (void)togglePlayback;

@end
