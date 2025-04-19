@class NSString;

@interface VideosUI.LivePostPlayController : NSObject <NSGestureRecognizerDelegate, VUILivePostPlayController> {
    void /* unknown type, empty encoding */ playerLiveEventMonitor;
    void /* unknown type, empty encoding */ playerViewController;
    void /* unknown type, empty encoding */ presentationView;
    void /* unknown type, empty encoding */ animationDuration;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ shelfFetchPolicy;
    void /* unknown type, empty encoding */ shelfViewController;
    void /* unknown type, empty encoding */ isShowingShelf;
    void /* unknown type, empty encoding */ gameEndShelfAlreadyDisplayed;
    void /* unknown type, empty encoding */ broadcastEndShelfAlreadyDisplayed;
    void /* unknown type, empty encoding */ shelfFetchTask;
    void /* unknown type, empty encoding */ inactivityTask;
    void /* unknown type, empty encoding */ dismissPlaybackTask;
    void /* unknown type, empty encoding */ dismissPlaybackDelay;
    void /* unknown type, empty encoding */ waitingForPlayerControlsOrTabsToDismiss;
    void /* unknown type, empty encoding */ didEnterStreamInBroadcastEndRange;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tapGestureRecognizer;
    void /* unknown type, empty encoding */ videosPlayable;
    void /* unknown type, empty encoding */ playerControlsOrTabsVisible;
    void /* unknown type, empty encoding */ windowResizingObserver;
}

@property (nonatomic, readonly) NSString *description;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)cleanup;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)didTapWithGesture:(id)a0;
- (void)recordShelfImpressionsIfNeeded;

@end
