@class AVTouchBarTrackViewController, NSString, AVPlayerLayer, AVPlayerControllerTimeResolver, AVTouchBarScrubberInternal, NSMutableArray;
@protocol AVTouchBarTrackControlling, AVTouchBarScrubberControlling, AVTimeControlling;

@interface AVTouchBarScrubberController : NSViewController <AVTouchBarScrubberDelegateInternal> {
    AVTouchBarTrackViewController *_touchBarTrackViewController;
    NSMutableArray *_bindings;
    id _touchBarTrackViewBoundsObserver;
    long long _previousAssetPreviewRequestType;
    double _previousAssetPreviewRequestDuration;
    double _previousAssetPreviewRequestMinTime;
    double _previousAssetPreviewRequestMaxTime;
    unsigned long long _previousAssetPreviewRequestNumberOfPreviewLayers;
    BOOL _isVisible;
    BOOL _thumbnailsNeedRedraw;
    id _applicationWillBecomeActiveObserverToken;
    id _applicationDidResignActiveObserverToken;
}

@property (retain) AVPlayerControllerTimeResolver *timeResolver;
@property (retain, nonatomic) id<AVTouchBarScrubberControlling, AVTouchBarTrackControlling, AVTimeControlling> playerController;
@property (readonly, nonatomic) AVTouchBarScrubberInternal *scrubber;
@property BOOL hasRoundedCorners;
@property (retain, nonatomic) AVPlayerLayer *scrubPlayerLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)_cancelThumbnailGeneration;
- (void)_reloadAudioWaveformForAudioTrackView:(id)a0;
- (void)_reloadThumbailsOrAudioWaveformIfNeeded;
- (void)_reloadThumbnailsForVideoTrackView:(id)a0;
- (void)_startOrStopUpdatingPlayheadApplicationIsActive:(BOOL)a0;
- (void)bindObject:(id)a0 withBinding:(id)a1 toObject:(id)a2 withKeyPath:(id)a3 options:(id)a4;
- (void)reloadThumbailsOrAudioWaveform;
- (id)touchBarScrubber:(id)a0 thumbnailForTime:(double)a1;
- (void)touchBarScrubberDidStopTracking:(id)a0;
- (BOOL)touchBarScrubberWillStartTracking:(id)a0;
- (void)unbindAllObjects;
- (void)unbindObject:(id)a0;

@end
