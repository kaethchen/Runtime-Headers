@class NSString, NSArray, NSObservation;

@interface AVKitGlobalSettings : NSObject {
    NSObservation *_mostRecentLegibleLanguageCodeObservation;
    NSObservation *_mostRecentAudioLanguageCodeObservation;
    NSObservation *_displayingCaptionsOnSkipBackObservation;
    NSObservation *_subtitleEnabledFromAutoStateCodeObservation;
}

@property (nonatomic) BOOL secondGenerationPlayerEnabled;
@property (readonly, nonatomic) BOOL playbackSpeedControlEnabled;
@property (readonly, nonatomic) BOOL visualAnalysisEnabled;
@property (readonly, nonatomic) BOOL visualAnalysisSupported;
@property (readonly, nonatomic) BOOL isQuickLook;
@property (readonly, nonatomic) BOOL isArtemisApp;
@property (readonly, nonatomic) BOOL isAVKitMacPlayer;
@property (readonly, nonatomic) BOOL isAVKitTester;
@property (readonly, nonatomic) BOOL isPhotosApp;
@property (readonly, nonatomic) BOOL isQuickTimePlayerX;
@property (readonly, nonatomic) BOOL isTVApp;
@property (readonly, nonatomic) BOOL isSpotlight;
@property (readonly, nonatomic) BOOL extendedVisualAnalysisEnabled;
@property (readonly, nonatomic) BOOL subjectLiftGestureEnabled;
@property (readonly, nonatomic) BOOL searchBannerEnabled;
@property (readonly, nonatomic) BOOL fluidSliderEnabled;
@property (readonly, nonatomic) BOOL showsTVControls;
@property (readonly, nonatomic) BOOL frameCountingForAllVideosEnabled;
@property (readonly, nonatomic) BOOL overVideoScrubbingGestureEnabled;
@property (readonly, nonatomic) BOOL quickLookModernPlayerControlsEnabled;
@property (readonly, nonatomic) BOOL backgroundEffectEnabled;
@property (readonly, nonatomic) BOOL attributedContentTitlesSupported;
@property (readonly, nonatomic) BOOL subtitlesOnMuteEnabled;
@property (copy, nonatomic) NSString *mostRecentLegibleLanguageCode;
@property (copy, nonatomic) NSString *mostRecentAudioLanguageCode;
@property (readonly, nonatomic) BOOL skipBackCaptionsEnabled;
@property (nonatomic, getter=isDisplayingCaptionsOnSkipBack) BOOL displayingCaptionsOnSkipBack;
@property (readonly, nonatomic) BOOL enhanceDialogueEnabled;
@property (nonatomic) unsigned long long subtitleAutomaticallyEnabledState;
@property (readonly, nonatomic) NSArray *preferredLanguages;
@property (readonly, nonatomic) BOOL isIntegratedTimelineEnabled;
@property (readonly, nonatomic) BOOL isIntegratedTimelineEnabledForLiveStreams;
@property (readonly, nonatomic) BOOL timelineDiagnosticsEnabled;
@property (readonly, nonatomic) BOOL animatedSkipButtonsEnabled;
@property (readonly, nonatomic) BOOL prefersTintColorForPlaybackControlsView;
@property (readonly, nonatomic) BOOL playerTipsEnabled;

+ (id)shared;
+ (BOOL)_isDisplayingCaptionsOnSkipBack;
+ (BOOL)_enhanceDialogueEnabled;
+ (id)_mostRecentAudioLanguageCode;
+ (id)_mostRecentLegibleLanguageCode;
+ (BOOL)_overVideoScrubbingGestureEnabled;
+ (unsigned long long)_subtitleAutomaticallyEnabledState;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_platformSupportsIntegratedTimeline;
- (void)setSharedSetting:(id)a0 toString:(id)a1;

@end
