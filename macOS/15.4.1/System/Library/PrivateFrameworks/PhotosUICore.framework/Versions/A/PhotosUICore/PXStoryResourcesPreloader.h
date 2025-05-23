@class PXMediaProvider, PXUpdater, NSObject, PXStoryLoadingStatusReporter, NSMutableIndexSet, NSMutableArray, PXVideoSessionManager, NSString, PXStoryResourcesPreloadingStatsStore, PXStoryResourcesPreloadingRequest, NSIndexSet, NSOperationQueue, NSArray, NSCountedSet, NSError;
@protocol OS_dispatch_queue, OS_os_log, PXStoryTimeline;

@interface PXStoryResourcesPreloader : PXObservable <PXStoryMutableResourcesPreloader, PXStoryQueueParticipant> {
    BOOL _stateQueue_isLoadingLikelyToKeepUpWithPlaybackWasSet;
    BOOL _stateQueue_isLoadingLikelyToKeepUpWithPlayback;
    long long _stateQueue_lagsCount;
    float _stateQueue_loadingFractionComplete;
    NSError *_stateQueue_error;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _stateQueue_currentPlaybackTime;
    long long _stateQueue_currentSegmentIdentifier;
    PXStoryResourcesPreloadingRequest *_stateQueue_currentRequest;
    PXStoryResourcesPreloadingRequest *_stateQueue_previousRequest;
    NSMutableArray *_stateQueue_loadedTimeRanges;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _stateQueue_loadedContinuousTimeRange;
    NSString *_stateQueue_estimationDiagnostics;
    NSCountedSet *_stateQueue_loadingSegments;
    NSMutableIndexSet *_stateQueue_loadedSegments;
    BOOL _estimationQueue_sessionStarted;
    id<PXStoryTimeline> _estimationQueue_currentSessionTimeline;
    NSArray *_estimationQueue_loadingSegments;
    NSIndexSet *_estimationQueue_loadedSegments;
    NSMutableIndexSet *_estimationQueue_segmentsToLoad;
    PXStoryResourcesPreloadingStatsStore *_estimationQueue_statsStore;
    unsigned long long _estimationQueue_loadingStartTime;
}

@property (readonly, nonatomic) double displayScale;
@property (readonly, nonatomic) BOOL isExporting;
@property (readonly, nonatomic) BOOL isInline;
@property (readonly, nonatomic) PXStoryLoadingStatusReporter *loadingStatusReporter;
@property (readonly, nonatomic) PXUpdater *updater;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *timelineReadingQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *estimationQueue;
@property (readonly, nonatomic) NSOperationQueue *loadingOperationQueue;
@property (retain, nonatomic) NSMutableIndexSet *timelineReadingQueue_loadedSegments;
@property (readonly, nonatomic) PXMediaProvider *mediaProvider;
@property (readonly, nonatomic) PXVideoSessionManager *videoSessionManager;
@property (retain) NSObject<OS_os_log> *log;
@property unsigned long long logContext;
@property (readonly, nonatomic) PXStoryResourcesPreloadingRequest *currentRequest;
@property (readonly, nonatomic) BOOL isLoadingLikelyToKeepUpWithPlayback;
@property (readonly, nonatomic) float loadingFractionComplete;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSString *diagnosticDescription;
@property (readonly, nonatomic) NSArray *loadedTimeRanges;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } currentPlaybackTime;
@property (nonatomic) long long currentSegmentIdentifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setError:(id)a0;
- (void)setCurrentRequest:(id)a0;
- (void)performChanges:(id /* block */)a0;
- (void)_setNeedsUpdate;
- (void)didPerformChanges;
- (id)previousRequest;
- (void)_accumulateLoadedTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 moreExpected:(BOOL)a1;
- (void)_estimationNoteClipWithPlaybackStyle:(long long)a0 loadedWithLoadingTime:(double)a1;
- (void)_estimationNoteLoadingSegments:(id)a0 loadedSegments:(id)a1;
- (void)_estimationNoteSessionStartedWithSegmentsToLoad:(id)a0 preloadableClipsCounts:(struct { long long x0; long long x1; long long x2; })a1 inTimeline:(id)a2;
- (void)_estimationQueue_updateEstimation;
- (void)_invalidateEstimation;
- (void)_invalidateProcessing;
- (BOOL)_isClipPreloadable:(struct { long long x0; long long x1; struct CGSize { double x0; double x1; } x2; unsigned long long x3; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; long long x1; } x3; char x4; } x4; long long x5; struct { struct CGSize { double x0; double x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; } x6; struct NSEdgeInsets { double x0; double x1; double x2; double x3; } x7; struct { struct { struct { double x0; double x1; double x2; } x0; struct { double x0; double x1; double x2; } x1; struct { double x0; double x1; double x2; } x2; struct { double x0; double x1; double x2; } x3; } x0; struct { struct { double x0; double x1; double x2; } x0; struct { double x0; double x1; double x2; } x1; struct { double x0; double x1; double x2; } x2; struct { double x0; double x1; double x2; } x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } x8; struct { struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x0; struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } x9; struct { char x0; unsigned char x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; char x3; union { char x0; char x1; char x2; char x3; } x4; union { double x0; double x1; char x2; } x5; } x10; struct { long long x0; long long x1; float x2; double x3; double x4; double x5; double x6; } x11; })a0;
- (BOOL)_isImagePreloadingNeededForClipInfo:(struct { long long x0; long long x1; struct CGSize { double x0; double x1; } x2; unsigned long long x3; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; long long x1; } x3; char x4; } x4; long long x5; struct { struct CGSize { double x0; double x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; } x6; struct NSEdgeInsets { double x0; double x1; double x2; double x3; } x7; struct { struct { struct { double x0; double x1; double x2; } x0; struct { double x0; double x1; double x2; } x1; struct { double x0; double x1; double x2; } x2; struct { double x0; double x1; double x2; } x3; } x0; struct { struct { double x0; double x1; double x2; } x0; struct { double x0; double x1; double x2; } x1; struct { double x0; double x1; double x2; } x2; struct { double x0; double x1; double x2; } x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } x8; struct { struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x0; struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } x9; struct { char x0; unsigned char x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; char x3; union { char x0; char x1; char x2; char x3; } x4; union { double x0; double x1; char x2; } x5; } x10; struct { long long x0; long long x1; float x2; double x3; double x4; double x5; double x6; } x11; })a0;
- (BOOL)_isVideoPreloadingNeededForClipInfo:(struct { long long x0; long long x1; struct CGSize { double x0; double x1; } x2; unsigned long long x3; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; long long x1; } x3; char x4; } x4; long long x5; struct { struct CGSize { double x0; double x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; } x6; struct NSEdgeInsets { double x0; double x1; double x2; double x3; } x7; struct { struct { struct { double x0; double x1; double x2; } x0; struct { double x0; double x1; double x2; } x1; struct { double x0; double x1; double x2; } x2; struct { double x0; double x1; double x2; } x3; } x0; struct { struct { double x0; double x1; double x2; } x0; struct { double x0; double x1; double x2; } x1; struct { double x0; double x1; double x2; } x2; struct { double x0; double x1; double x2; } x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } x8; struct { struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x0; struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } x9; struct { char x0; unsigned char x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; char x3; union { char x0; char x1; char x2; char x3; } x4; union { double x0; double x1; char x2; } x5; } x10; struct { long long x0; long long x1; float x2; double x3; double x4; double x5; double x6; } x11; })a0;
- (void)_noteLoadingEndedForClip:(struct { long long x0; long long x1; struct CGSize { double x0; double x1; } x2; unsigned long long x3; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; long long x1; } x3; char x4; } x4; long long x5; struct { struct CGSize { double x0; double x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; } x6; struct NSEdgeInsets { double x0; double x1; double x2; double x3; } x7; struct { struct { struct { double x0; double x1; double x2; } x0; struct { double x0; double x1; double x2; } x1; struct { double x0; double x1; double x2; } x2; struct { double x0; double x1; double x2; } x3; } x0; struct { struct { double x0; double x1; double x2; } x0; struct { double x0; double x1; double x2; } x1; struct { double x0; double x1; double x2; } x2; struct { double x0; double x1; double x2; } x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } x8; struct { struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x0; struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } x9; struct { char x0; unsigned char x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; char x3; union { char x0; char x1; char x2; char x3; } x4; union { double x0; double x1; char x2; } x5; } x10; struct { long long x0; long long x1; float x2; double x3; double x4; double x5; double x6; } x11; })a0 inSegment:(long long)a1 resourceType:(id)a2 resourceIdentifier:(id)a3 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a4 error:(id)a5 loadingTime:(double)a6 playbackStyle:(long long)a7;
- (void)_noteLoadingStartedForClipInSegment:(long long)a0;
- (void)_noteSessionStartedWithLoadedSegments:(id)a0 segmentsToLoad:(id)a1 preloadableClipsCounts:(struct { long long x0; long long x1; long long x2; })a2 inTimeline:(id)a3;
- (void)_performChangesOnStoryQueue:(id /* block */)a0;
- (void)_stateQueue_accumulateLoadedTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 moreExpected:(BOOL)a1;
- (void)_timelineReadingQueue_loadResourcesForClipsInSegment:(long long)a0 request:(id)a1 clipLoadingGroup:(id)a2;
- (void)_timelineReadingQueue_processRequest:(id)a0 previousRequest:(id)a1;
- (void)_timelineReadingQueue_sessionStartedWithAlreadyLoadedSegments:(id)a0 segmentsToLoad:(id)a1 preloadableClipsCounts:(struct { long long x0; long long x1; long long x2; })a2 request:(id)a3;
- (void)_updateEstimation;
- (void)_updateProcessing;
- (void)cancelProcessingAllRequests;
- (id)initWithMediaProvider:(id)a0 displayScale:(double)a1 videoSessionManager:(id)a2 loadingStatusReporter:(id)a3 storyQueue:(id)a4 isExporting:(BOOL)a5 isInline:(BOOL)a6;
- (long long)lagsCount;
- (void)setIsLoadingLikelyToKeepUpWithPlayback:(BOOL)a0;
- (void)setLoadingFractionComplete:(float)a0;
- (void)startProcessingRequest:(id)a0;

@end
