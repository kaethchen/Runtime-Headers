@class NSArray, NSTimer, NSString, AXMDataSummary, AXMChartDescriptor, NSObject;
@protocol OS_dispatch_queue;

@interface AXMDataSonificationManager : NSObject <AXMDataSonifierPlaybackObserver, AXMDataSummaryCategoryNameProvider> {
    NSObject<OS_dispatch_queue> *_dataSonifierAccessQueue;
}

@property (nonatomic) double lastScrubbingValueAnnouncementPosition;
@property (retain, nonatomic) NSTimer *scrubbingValueAnnouncementTimer;
@property (retain, nonatomic) AXMChartDescriptor *currentChartDescriptor;
@property (nonatomic) long long currentSeriesIndex;
@property (nonatomic) BOOL hapticsEnabled;
@property (readonly, nonatomic) BOOL isPlaying;
@property (readonly, nonatomic) BOOL isPaused;
@property (readonly, nonatomic) BOOL isScrubbing;
@property (readonly, nonatomic) double currentPlaybackPosition;
@property (nonatomic) double lastPlayheadPosition;
@property (readonly, nonatomic) NSArray *xGridlinePositions;
@property (readonly, nonatomic) NSArray *xCategoryLabels;
@property (retain, nonatomic) AXMDataSummary *dataSeriesSummary;
@property (readonly, nonatomic) BOOL isDataSeriesRegressionModelLoaded;
@property (readonly, nonatomic) unsigned long long playbackStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)pause;
- (void)play;
- (void)stopSpeaking;
- (void)beginLiveModeSession;
- (void)endLiveModeSession;
- (void)setLiveModeValue:(double)a0;
- (void)stopPlaying;
- (void)announceValueForPlayheadPosition;
- (void)beginScrubbingSession;
- (id)categoryNameForXAxisPosition:(double)a0;
- (void)endScrubbingSession;
- (void)scrubToPosition:(double)a0;
- (id)valueDescriptionForPlayheadPosition;

@end
